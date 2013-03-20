<?php
/**
 * @file
 * establecimientos_listado.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function establecimientos_listado_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function establecimientos_listado_views_api() {
  return array("version" => "3.0");
}
