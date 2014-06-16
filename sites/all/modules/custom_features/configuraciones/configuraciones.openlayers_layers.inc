<?php
/**
 * @file
 * configuraciones.openlayers_layers.inc
 */

/**
 * Implements hook_openlayers_layers().
 */
function configuraciones_openlayers_layers() {
  $export = array();

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'osm_mapnik_metalsevilla';
  $openlayers_layers->title = 'OSM Mapnik MetalSevilla';
  $openlayers_layers->description = 'The main OpenStreetMap map';
  $openlayers_layers->data = array(
    'base_url' => '',
    'layer_type' => 'openlayers_layer_type_xyz',
    'serverResolutions' => array(
      '0.597164283371' => '0.597164283371',
    ),
    'wrapDateLine' => 1,
    'projection' => array(
      0 => '900913',
    ),
  );
  $export['osm_mapnik_metalsevilla'] = $openlayers_layers;

  return $export;
}
