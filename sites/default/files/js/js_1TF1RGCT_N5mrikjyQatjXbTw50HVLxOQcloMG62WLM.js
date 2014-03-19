/*jslint white: false */
/*jslint forin: true */
/*global OpenLayers Drupal $ document jQuery window */

/**
 * @file
 * This file holds the main javascript API for OpenLayers. It is
 * responsable for loading and displaying the map.
 *
 * @ingroup openlayers
 */

/**
 * This is a workaround for a bug involving IE and VML support.
 * See the Drupal Book page describing this problem:
 * http://drupal.org/node/613002
 */

document.namespaces;

(function($) {

Drupal.settings.openlayers = {};
Drupal.settings.openlayers.maps = {};

/**
 * Minimal OpenLayers map bootstrap.
 * All additional operations occur in additional Drupal behaviors.
 */
Drupal.behaviors.openlayers = {
  'attach': function(context, settings) {
    if (typeof(Drupal.settings.openlayers) === 'object' &&
        Drupal.settings.openlayers.maps &&
        !$(context).data('openlayers')) {
      $('.openlayers-map:not(.openlayers-processed)').each(function() {
        // By setting the stop_render variable to TRUE, this will
        // halt the render process.  If set, one could remove this setting
        // then call Drupal.attachBehaviors again to get it started
        var map_id = $(this).attr('id');
        if (Drupal.settings.openlayers.maps[map_id] && Drupal.settings.openlayers.maps[map_id].stop_render != true) {
          var map = Drupal.settings.openlayers.maps[map_id];
          $(this).addClass('openlayers-processed');

          // Use try..catch for error handling.
          try {
            // Set OpenLayers language based on document language,
            // rather than browser language
            OpenLayers.Lang.setCode($('html').attr('lang'));

            $(this)
              // @TODO: move this into markup in theme function, doing this dynamically is a waste.
              .css('width', map.width)
              .css('height', map.height);

            var options = {};
            // This is necessary because the input JSON cannot contain objects
            options.projection = new OpenLayers.Projection('EPSG:' + map.projection);
            options.displayProjection = new OpenLayers.Projection('EPSG:' + map.displayProjection);

            // TODO: work around this scary code
            if (map.projection === '900913') {
              options.maxExtent = new OpenLayers.Bounds(
                -20037508.34, -20037508.34, 20037508.34, 20037508.34);
            }
            if (map.projection === '4326') {
              options.maxExtent = new OpenLayers.Bounds(-180, -90, 180, 90);
            }

            options.maxResolution = 1.40625;
            options.controls = [];

            // Change image, CSS, and proxy paths if specified
            if (map.image_path) {
              OpenLayers.ImgPath = Drupal.openlayers.relatePath(map.image_path,
                Drupal.settings.basePath);
            }
            if (map.css_path) {
              options.theme = Drupal.openlayers.relatePath(map.css_path,
                Drupal.settings.basePath);
            }
            if (map.proxy_host) {
              OpenLayers.ProxyHost = Drupal.openlayers.relatePath(map.proxy_host,
                Drupal.settings.basePath);
            }

            // Initialize openlayers map
            var openlayers = new OpenLayers.Map(map.id, options);

            // Run the layer addition first
            Drupal.openlayers.addLayers(map, openlayers);

            // Attach data to map DOM object
            $(this).data('openlayers', {'map': map, 'openlayers': openlayers});

            // Finally, attach behaviors
            Drupal.attachBehaviors(this);

            if ($.browser.msie) {
              Drupal.openlayers.redrawVectors();
            }
          }
          catch (e) {
            if (typeof console != 'undefined') {
              console.log(e);
            }
            else {
              $(this).text('Error during map rendering: ' + e);
            }
          }
        }
      });
    }
  }
};

/**
 * Collection of helper methods.
 */
Drupal.openlayers = {
  // Determine path based on format.
  'relatePath': function(path, basePath) {
    // Check for a full URL or an absolute path.
    if (path.indexOf('://') >= 0 || path.indexOf('/') == 0) {
      return path;
    }
    else {
      return basePath + path;
    }
  },
  /*
   * Redraw Vectors.
   * This is necessary because various version of IE cannot draw vectors on
   * $(document).ready()
   */
  'redrawVectors': function() {
    $(window).load(
      function() {
        var map;
        for (map in Drupal.settings.openlayers.maps) {
          $.each($('#' + map).data('openlayers')
            .openlayers.getLayersByClass('OpenLayers.Layer.Vector'),
            function(i, layer) {
              layer.redraw();
            }
          );
        }
      }
    );
  },
  /**
   * Add layers to the map
   *
   * @param map Drupal settings object for the map.
   * @param openlayers OpenLayers Map Object.
   */
  'addLayers': function(map, openlayers) {

    var sorted = [];
    for (var name in map.layers) {
      sorted.push({'name': name, 'weight': map.layers[name].weight });
    }
    sorted.sort(function(a, b) {
      var x = a.weight, y = b.weight;
      return ((x < y) ? -1 : ((x > y) ? 1 : 0));
    });

    for (var i = 0; i < sorted.length; ++i) {
      var layer,
        name = sorted[i].name,
        options = map.layers[name];

      // Add reference to our layer ID
      options.drupalID = name;
      // Ensure that the layer handler is available
      if (options.layer_handler !== undefined &&
        Drupal.openlayers.layer[options.layer_handler] !== undefined) {
        var layer = Drupal.openlayers.layer[options.layer_handler](map.layers[name].title, map, options);

        layer.visibility = !!(!map.layer_activated || map.layer_activated[name]);

        if (layer.isBaseLayer === false) {
          layer.displayInLayerSwitcher = (!map.layer_switcher || map.layer_switcher[name]);
        }

        if (map.center.wrapdateline === '1') {
          // TODO: move into layer specific settings
          layer.wrapDateLine = true;
        }

        openlayers.addLayer(layer);
      }
    }

    openlayers.setBaseLayer(openlayers.getLayersBy('drupalID', map.default_layer)[0]);

    // Zoom & center
    if (map.center.initial) {
      var center = OpenLayers.LonLat.fromString(map.center.initial.centerpoint).transform(
            new OpenLayers.Projection('EPSG:4326'),
            new OpenLayers.Projection('EPSG:' + map.projection));
      var zoom = parseInt(map.center.initial.zoom, 10);
      openlayers.setCenter(center, zoom, false, false);
    }

    // Set the restricted extent if wanted.
    // Prevents the map from being panned outside of a specfic bounding box.
    if (typeof map.center.restrict !== 'undefined' && map.center.restrict.restrictextent) {
      openlayers.restrictedExtent = OpenLayers.Bounds.fromString(
          map.center.restrict.restrictedExtent);
    }
  },
  /**
   * Abstraction of OpenLayer's feature adding syntax to work with Drupal output.
   * Ideally this should be rolled into the PHP code, because we don't want to manually
   * parse WKT
   */
  'addFeatures': function(map, layer, features) {
    var newFeatures = [];

    // Go through features
    for (var key in features) {
      var feature = features[key];
      var newFeatureObject = this.objectFromFeature(feature);

      // If we have successfully extracted geometry add additional
      // properties and queue it for addition to the layer
      if (newFeatureObject) {
        var newFeatureSet = [];

        // Check to see if it is a new feature, or an array of new features.
        if (typeof(newFeatureObject[0]) === 'undefined') {
          newFeatureSet[0] = newFeatureObject;
        }
        else {
          newFeatureSet = newFeatureObject;
        }

        // Go through new features
        for (var i in newFeatureSet) {
          var newFeature = newFeatureSet[i];

          // Transform the geometry if the 'projection' property is different from the map projection
          if (feature.projection) {
            if (feature.projection !== map.projection) {
              var featureProjection = new OpenLayers.Projection('EPSG:' + feature.projection);
              var mapProjection = new OpenLayers.Projection('EPSG:' + map.projection);
              newFeature.geometry.transform(featureProjection, mapProjection);
            }
          }

          // Add attribute data
          if (feature.attributes) {
            // Attributes belong to features, not single component geometries
            // of them. But we're creating a geometry for each component for
            // better performance and clustering support. Let's call these
            // "pseudofeatures".
            //
            // In order to identify the real feature each geometry belongs to
            // we then add a 'fid' parameter to the "pseudofeature".
            // NOTE: 'drupalFID' is only unique within a single layer.
            newFeature.attributes = feature.attributes;
            newFeature.data = feature.attributes;
            newFeature.drupalFID = key;
          }

          // Add style information
          if (feature.style) {
            newFeature.style = jQuery.extend({},
                OpenLayers.Feature.Vector.style['default'],
                feature.style);
          }

          // Push new features
          newFeatures.push(newFeature);
        }
      }
    }

    // Add new features if there are any
    if (newFeatures.length !== 0) {
      layer.addFeatures(newFeatures);
    }
  },
  
  'getStyleMap': function(map, layername) {
    if (map.styles) {
      var stylesAdded = {};
      
      // Grab and map base styles.
      for (var style in map.styles) {
        stylesAdded[style] = new OpenLayers.Style(map.styles[style]);
      }
      
      // Implement layer-specific styles.  First default, then select.
      if (map.layer_styles !== undefined && map.layer_styles[layername]) {
        var style = map.layer_styles[layername];
        stylesAdded['default'] = new OpenLayers.Style(map.styles[style]);
      }
      if (map.layer_styles_select !== undefined && map.layer_styles_select[layername]) {
        var style = map.layer_styles_select[layername];
        stylesAdded['select'] = new OpenLayers.Style(map.styles[style]);
      }
      
      return new OpenLayers.StyleMap(stylesAdded);
    }
    else {
      return new OpenLayers.StyleMap({
        'default': new OpenLayers.Style({
          pointRadius: 5,
          fillColor: '#ffcc66',
          strokeColor: '#ff9933',
          strokeWidth: 4,
          fillOpacity: 0.5
        }),
        'select': new OpenLayers.Style({
          fillColor: '#66ccff',
          strokeColor: '#3399ff'
        })
      });
    }
  },
  
  'objectFromFeature': function(feature) {
    var wktFormat = new OpenLayers.Format.WKT();
    // Extract geometry either from wkt property or lon/lat properties
    if (feature.wkt) {
      return wktFormat.read(feature.wkt);
    }
    else if (feature.lon) {
      return wktFormat.read('POINT(' + feature.lon + ' ' + feature.lat + ')');
    }
  },
  
  /**
   * Add Behavior.
   *
   * This is a wrapper around adding behaviors for OpenLayers.
   * a module does not have to use this, but it helps cut
   * down on code.
   *
   * @param id
   *   The identifier of the behavior that is attached to
   *   the map.
   * @param attach
   *   The callback function for the attach part of the
   *   Drupal behavior.
   * @param detach
   *   The callback function for the detach part of the
   *   Drupal behavior.
   */
  'addBehavior': function(id, attach, detach) {
    // Add as a Drupal behavior.  Add a prefix, just to be safe.
    Drupal.behaviors['openlayers_auto_' + id] = {
      attach: function (context, settings) {
        var data = $(context).data('openlayers');
        
        // Ensure that there is a map and that the appropriate
        // behavior exists.  Need "data &&" to avoid js crash 
        // when data is empty
        var localBehavior = data && data.map.behaviors[id];
        
        // Ensure scope in the attach callback
        var that = this;
        if (localBehavior) {
          $(context).once('openlayers-' + id, function () {
            attach.apply(that, [data, data.map.behaviors[id], context, settings]);
          });
        }
      },
      // Maybe we need a little more handling here.
      detach: detach
    };
  },
  
  /**
   * Add Control.
   *
   * This is a wrapper around adding controls to maps.  It
   * is not needed but saves some code.
   */
  'addControl': function(openlayers, controlName, options) {
    var control = new OpenLayers.Control[controlName](options);
    openlayers.addControl(control);
    control.activate();
    return control;
  }
};

Drupal.openlayers.layer = {};
})(jQuery);
;

/**
 * OpenLayers Raw Layer Handler
 */
Drupal.openlayers.layer.openlayers_raw = function(title, map, options) {
  options.options = options.options || {};

  // Note, so that we do not pass all the features along to the Layer
  // options, we use the options.options to give to Layer
  options.options.drupalID = options.drupalID;

  options.options.styleMap = Drupal.openlayers.getStyleMap(map, options.drupalID);
  
  var layer = new OpenLayers.Layer.Vector(title, options.options);

  if (options.features) {
    Drupal.openlayers.addFeatures(map, layer, options.features);
  }

  return layer;
};
;
/**
 * @file
 * JS Implementation of OpenLayers behavior.
 */
/**
 * Class: OpenLayers.Control.DrupalEditingToolbar
 * The DrupalEditingToolbar is a panel controls to modify or draw polygons, lines,
 * points, or to navigate the map by panning. You can select which tool to enable
 * with options.tools.
 *
 * Inherits from:
 *  - <OpenLayers.Control.Panel>
 */
OpenLayers.Control.GeofieldEditingToolbar = OpenLayers.Class(
  OpenLayers.Control.Panel, {

    /**
     * Constructor: OpenLayers.Control.EditingToolbar
     * Create an editing toolbar for a given layer.
     *
     * Parameters:
     * layer - {<OpenLayers.Layer.Vector>}
     * options - {Object}
     */
    initialize: function(layer, options) {
        OpenLayers.Control.Panel.prototype.initialize.apply(this, [options]);

        var controls = [];
        var tools = options.tools;
        var tool = null;

        if (tools && tools.length) {
          for (var i = 0, il = tools.length; i < il; i += 1) {
            // capitalize first letter
            tool = tools[i][0].toUpperCase() + tools[i].slice(1);
            controls.push(
              new OpenLayers.Control.DrawFeature(layer, OpenLayers.Handler[tool], {'displayClass': 'olControlDrawFeature' + tool})
            );
          }
        }

        if (options.allow_edit && options.allow_edit !== 0) {
          // add an Edit feature
          controls.push(new OpenLayers.Control.ModifyFeature(layer, {
            deleteCodes: [46, 68, 100],
            handleKeypress: function(evt) {
              if (this.feature && OpenLayers.Util.indexOf(this.deleteCodes, evt.keyCode) > -1) {
                // We must unselect the feature before we delete it
                var feature_to_delete = this.feature;
                this.selectControl.unselectAll();
                this.layer.removeFeatures([feature_to_delete]);
              }
            }
          }));
        }

        this.addControls(controls);
    },

    /**
     * Method: draw
     * calls the default draw, and then activates mouse defaults.
     *
     * Returns:
     * {DOMElement}
     */
    draw: function() {
        var div = OpenLayers.Control.Panel.prototype.draw.apply(this, arguments);
        if (this.defaultControl === null) {
            this.defaultControl = this.controls[0];
        }
        return div;
    },

    CLASS_NAME: "OpenLayers.Control.EditingToolbar"
});


(function($) {
  /**
   * Geofield Behavior
   */
  Drupal.behaviors.openlayers_behavior_geofield = {
    'attach': function(context, settings) {
      var data = $(context).data('openlayers'),
          behavior = data && data.map.behaviors['openlayers_behavior_geofield'],
          dataProjection = new OpenLayers.Projection('EPSG:4326'),
          features, wktFormat;

      // helper to create a WKT format object with the right projections
      function initWktFormat (inp, outp) {
        var WktWriter = new OpenLayers.Format.WKT();
        WktWriter.internalProjection = inp;
        WktWriter.externalProjection = outp || dataProjection;
        return WktWriter;
      }

      // populate our wkt input field
      function updateWKTField (features) {
        var WktWriter = initWktFormat(features.object.map.projection);
        // limits are to be checked server-side, not here.
        // for a single shape avoid GEOMETRYCOLLECTION
        var toSerialize = features.object.features;
        // don't serialize empty feature
        if (toSerialize.length) {
          if (toSerialize.length === 1) { toSerialize = toSerialize[0]; }
          this.val(WktWriter.write(toSerialize));
        }
        // but clear the value
        else {
          this.val('');
        }
      }

      // keep only one features for each map input
      function limitFeatures (features) {
        // copy a list of features
        var copyFeatures = features.object.features.slice();
        // only keep the last one
        var lastFeature = copyFeatures.pop();
        // we remove a lot of features, don't trigger events
        features.object.destroyFeatures(copyFeatures, {silient: true});
      }

      if (behavior && !$(context).hasClass('geofield-processed')) {
        // we get the .form-item wrapper which is a slibling of our hidden input
        var $wkt = $(context).closest('.form-item').parent().find('input.geofield_wkt');
        // if there is no form input this shouldn't be activated
        if ($wkt.length) {
          var dataLayer = new OpenLayers.Layer.Vector(Drupal.t('Feature Layer'), {
                projection: dataProjection,
                drupalID: 'openlayers_behavior_geofield'
              });

          dataLayer.styleMap = Drupal.openlayers.getStyleMap(data.map, 'openlayers_behavior_geofield');
          data.openlayers.addLayer(dataLayer);

          // only one feature on each map register before adding our data
          if (Drupal.settings.geofield.data_storage == 'single') {
            dataLayer.events.register('featureadded', $wkt, limitFeatures);
          }

          if ($wkt.val() != '') {
            wktFormat = initWktFormat(data.openlayers.projection);
            features = wktFormat.read($wkt.val());
            dataLayer.addFeatures(features);
          }

          // registering events late, because adding data
          // would result in a reprojection loop
          dataLayer.events.register('featureadded', $wkt, updateWKTField);
          dataLayer.events.register('featureremoved', $wkt, updateWKTField);
          dataLayer.events.register('afterfeaturemodified', $wkt, updateWKTField);

          // transform options object to array
          behavior.tools = [];
          // add a new 'tools' key which is an array of enabled features
          $.each(behavior.feature_types, function (key, value) {
            if (value) {
              behavior.tools.push(key);
            }
          });
          // create toolbar
          var control = new OpenLayers.Control.GeofieldEditingToolbar(dataLayer, behavior);
          data.openlayers.addControl(control);

          // on submit recalculate everything to be up to date
          var formData = {
            'control': control,
            'dataLayer': dataLayer
          };
          function handleSubmit (e) {
            $.map(e.data.control.controls, function(c) { c.deactivate(); });
            dataLayer.events.triggerEvent('featuremodified');
          }
          $(context).parents('form').bind('submit', formData, handleSubmit);
        }
        $(context).addClass('geofield-processed');
      } // if
    }
  };
})(jQuery);
;

/**
 * @file
 * Layer handler for XYZ layers
 */

/**
 * Openlayer layer handler for XYZ layer
 */
Drupal.openlayers.layer.xyz = function(title, map, options) {
  var styleMap = Drupal.openlayers.getStyleMap(map, options.drupalID);
  if (options.maxExtent !== undefined) {
    options.maxExtent = new OpenLayers.Bounds.fromArray(options.maxExtent) || new OpenLayers.Bounds(-20037508.34, -20037508.34, 20037508.34, 20037508.34);
  }
  options.projection = 'EPSG:' + options.projection;
  
  // Server resolutions are very particular in OL 2.11
  var r = options.serverResolutions;
  if (r == null || typeof r == 'undefined' || r.length == 0) {
    options.serverResolutions = null;
  }
  
  // Wrap Date Line does not seem to work for 2.10.  This may
  // have something to do with our extent definitions.
  if (OpenLayers.VERSION_NUMBER.indexOf('2.10') >= 0) {
    options.wrapDateLine = null;
  }

  var layer = new OpenLayers.Layer.XYZ(title, options.url, options);
  layer.styleMap = styleMap;
  return layer;
};;

/**
 * @file
 * JS Implementation of OpenLayers behavior.
 */

/**
 * Keyboard Defaults Behavior.  Implements the KeyboardDefaults OpenLayers
 * Control.
 */
Drupal.openlayers.addBehavior('openlayers_behavior_keyboarddefaults', function (data, options) {
  Drupal.openlayers.addControl(data.openlayers, 'KeyboardDefaults');
});
;
/**
 * @file
 * JS Implementation of OpenLayers behavior.
 */

/**
 * OpenLayers Zoom to Layer Behavior
 */
Drupal.openlayers.addBehavior('openlayers_behavior_zoomtolayer', function (data, options) {
  var map = data.openlayers;
  var layers = map.getLayersBy('drupalID', options.zoomtolayer);

  // Go through selected layers to get full extent.
  for (var i in layers) {
    if (layers[i].features !== undefined) {
      // For KML layers, we need to wait until layer is loaded.  Ideally
      // we could check for any layer that is loading from an external
      // source, but for now, just check KML
      if (layers[i].layer_handler == 'kml') {
        layers[i].events.register('loadend', layers[i], function() {
          layerextent = layers[i].getDataExtent();
          map.zoomToExtent(layerextent);
        });
      }
      else {
        layerextent = layers[i].getDataExtent();
        // Check for valid layer extent
        if (layerextent != null) {
          map.zoomToExtent(layerextent);

          // If unable to find width due to single point,
          // zoom in with point_zoom_level option.
          if (layerextent.getWidth() == 0.0) {
            map.zoomTo(options.point_zoom_level);
          }
        }
      }
    }
  }
});
;
/**
 * @file
 * JS Implementation of OpenLayers behavior.
 */

/**
 * Navigation Behavior
 */
Drupal.openlayers.addBehavior('openlayers_behavior_navigation', function (data, options) {
  options.documentDrag = !!options.documentDrag;
  Drupal.openlayers.addControl(data.openlayers, 'Navigation', options);
});
;
/**
 * @file
 * JS Implementation of OpenLayers behavior.
 */

/**
 * Pan Zoom Bar Behavior
 */
Drupal.openlayers.addBehavior('openlayers_behavior_panzoombar', function (data, options) {
  Drupal.openlayers.addControl(data.openlayers, 'PanZoomBar', options);
});
;
