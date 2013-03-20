<?php
/**
 * @file
 * relaciones.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function relaciones_ctools_plugin_api() {
  return array("version" => "3");
}

/**
 * Implements hook_views_api().
 */
function relaciones_views_api() {
  return array("version" => "3.0");
}
