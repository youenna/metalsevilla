<?php
/**
 * @file
 * establecimiento.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function establecimiento_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function establecimiento_node_info() {
  $items = array(
    'establecimiento' => array(
      'name' => t('Establecimiento'),
      'base' => 'node_content',
      'description' => t('Tu establecimiento, también puede aparecer en nuestra página.
'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  return $items;
}
