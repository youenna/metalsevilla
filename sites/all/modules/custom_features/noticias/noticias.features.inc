<?php
/**
 * @file
 * noticias.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function noticias_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function noticias_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function noticias_node_info() {
  $items = array(
    'noticia' => array(
      'name' => t('Noticia'),
      'base' => 'node_content',
      'description' => t('Noticias dentro del marco musical
'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
