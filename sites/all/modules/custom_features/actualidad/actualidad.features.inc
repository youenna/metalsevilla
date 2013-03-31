<?php
/**
 * @file
 * actualidad.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function actualidad_ctools_plugin_api() {
  return array("version" => "3");
}

/**
 * Implements hook_views_api().
 */
function actualidad_views_api() {
  return array("version" => "3.0");
}
