<?php
/**
 * @file
 * lanzamiento_disco.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lanzamiento_disco_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function lanzamiento_disco_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lanzamiento_disco_node_info() {
  $items = array(
    'lanzamiento_disco' => array(
      'name' => t('Lanzamiento de disco'),
      'base' => 'node_content',
      'description' => t('Publica la fecha de lanzamiento de un disco
'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
