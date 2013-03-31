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
