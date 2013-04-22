<?php
/**
 * @file
 * foto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function foto_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function foto_node_info() {
  $items = array(
    'foto' => array(
      'name' => t('Foto'),
      'base' => 'node_content',
      'description' => t('Imagen que se puede vincular a los grupos, locales, eventos y noticias.
'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
