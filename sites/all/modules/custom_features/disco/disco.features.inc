<?php
/**
 * @file
 * disco.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function disco_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function disco_node_info() {
  $items = array(
    'disco' => array(
      'name' => t('Disco'),
      'base' => 'node_content',
      'description' => t('Disco de los grupos de música y artistas que forman MetalSevilla
'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
