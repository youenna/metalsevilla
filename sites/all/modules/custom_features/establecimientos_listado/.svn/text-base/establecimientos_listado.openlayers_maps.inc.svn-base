<?php
/**
 * @file
 * establecimientos_listado.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function establecimientos_listado_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'local_map_guia';
  $openlayers_maps->title = 'Localización de guia metalera';
  $openlayers_maps->description = 'Localización de un establecimiento';
  $openlayers_maps->data = array(
    'width' => '600px',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-5.978616327976, 37.361951841093',
        'zoom' => '11',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
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
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'mapa_home_openlayers_1' => 'mapa_home_openlayers_1',
        ),
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'osm_tah' => 'osm_tah',
      'osm_cycle' => 'osm_cycle',
      'mapa_home_openlayers_1' => 'mapa_home_openlayers_1',
    ),
    'layer_weight' => array(
      'mapa_home_openlayers_1' => '0',
      'mapa_home_openlayers_2' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => 'default_marker_black',
      'openlayers_geojson_picture_this' => '0',
      'mapa_home_openlayers_2' => '0',
      'mapa_home_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => 'default_marker_black',
      'openlayers_geojson_picture_this' => '0',
      'mapa_home_openlayers_2' => '0',
      'mapa_home_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_activated' => array(
      'mapa_home_openlayers_1' => 'mapa_home_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mapa_home_openlayers_2' => 0,
    ),
    'layer_switcher' => array(
      'mapa_home_openlayers_1' => 'mapa_home_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
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
  $export['local_map_guia'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'local_map_guia_tiendas';
  $openlayers_maps->title = 'Localización de guia metalera en tiendas';
  $openlayers_maps->description = 'Localización de un establecimiento';
  $openlayers_maps->data = array(
    'width' => '600px',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-5.978616327976, 37.361951841093',
        'zoom' => '11',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
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
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'mapa_home_openlayers_2' => 'mapa_home_openlayers_2',
        ),
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'osm_tah' => 'osm_tah',
      'osm_cycle' => 'osm_cycle',
      'mapa_home_openlayers_2' => 'mapa_home_openlayers_2',
    ),
    'layer_weight' => array(
      'mapa_home_openlayers_2' => '0',
      'mapa_home_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => 'default_marker_black',
      'openlayers_geojson_picture_this' => '0',
      'mapa_home_openlayers_1' => 'default_marker_black_small',
      'mapa_home_openlayers_2' => 'default_marker_black_small',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => 'default_marker_black',
      'openlayers_geojson_picture_this' => '0',
      'mapa_home_openlayers_1' => 'default_marker_black_small',
      'mapa_home_openlayers_2' => 'default_marker_black_small',
    ),
    'layer_activated' => array(
      'mapa_home_openlayers_2' => 'mapa_home_openlayers_2',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mapa_home_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'mapa_home_openlayers_2' => 'mapa_home_openlayers_2',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mapa_home_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_black',
      'select' => 'default_marker_black',
      'temporary' => 'default_marker_black',
    ),
  );
  $export['local_map_guia_tiendas'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'local_map_home';
  $openlayers_maps->title = 'Localización de home';
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
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'mapa_home_openlayers_1' => 'mapa_home_openlayers_1',
        ),
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'osm_tah' => 'osm_tah',
      'osm_cycle' => 'osm_cycle',
      'mapa_home_openlayers_1' => 'mapa_home_openlayers_1',
    ),
    'layer_weight' => array(
      'mapa_home_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => 'default_marker_black',
      'openlayers_geojson_picture_this' => '0',
      'mapa_home_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => 'default_marker_black',
      'openlayers_geojson_picture_this' => '0',
      'mapa_home_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_activated' => array(
      'mapa_home_openlayers_1' => 'mapa_home_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'mapa_home_openlayers_1' => 'mapa_home_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default_marker_black',
      'select' => 'default_marker_black',
      'temporary' => 'default_marker_black',
    ),
  );
  $export['local_map_home'] = $openlayers_maps;

  return $export;
}
