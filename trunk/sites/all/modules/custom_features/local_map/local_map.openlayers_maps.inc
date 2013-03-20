<?php
/**
 * @file
 * local_map.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function local_map_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'local_map';
  $openlayers_maps->title = 'Localización';
  $openlayers_maps->description = 'Localización de un establecimiento';
  $openlayers_maps->data = array(
    'width' => '400px',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-5.9834197922595, 37.394147084291',
        'zoom' => '12',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(
        'feature_types' => array(
          'point' => 'point',
          'path' => 0,
          'polygon' => 0,
        ),
        'allow_edit' => 1,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'geofield_formatter',
        'point_zoom_level' => '15',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'osm_tah' => 'osm_tah',
      'osm_cycle' => 'osm_cycle',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'mapa_home_openlayers_2' => '0',
      'mapa_home_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles' => array(
      'openlayers_geojson_picture_this' => '0',
      'mapa_home_openlayers_1' => 'default_marker_black_small',
      'mapa_home_openlayers_2' => '0',
      'geofield_formatter' => 'default_marker_black_small',
    ),
    'layer_styles_select' => array(
      'openlayers_geojson_picture_this' => '0',
      'mapa_home_openlayers_1' => 'default_marker_black_small',
      'mapa_home_openlayers_2' => '0',
      'geofield_formatter' => 'default_marker_black_small',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_geojson_picture_this' => 0,
      'mapa_home_openlayers_1' => 0,
      'mapa_home_openlayers_2' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_geojson_picture_this' => 0,
      'mapa_home_openlayers_1' => 0,
      'mapa_home_openlayers_2' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_black',
      'select' => 'default_marker_black',
      'temporary' => 'default_marker_black',
    ),
  );
  $export['local_map'] = $openlayers_maps;

  return $export;
}
