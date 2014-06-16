<?php
/**
 * @file
 * panel_usuario.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_usuario_ctools_plugin_api() {
  return array("version" => "3");
}

/**
 * Implements hook_views_api().
 */
function panel_usuario_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function panel_usuario_default_profile2_type() {
  $items = array();
  $items['gestor'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "gestor",
    "label" : "Gestor de establecimiento",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Usuario",
    "weight" : "0",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  $items['manager'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "manager",
    "label" : "Manager",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  $items['musico'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "musico",
    "label" : "M\\u00fasico",
    "weight" : "0",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
