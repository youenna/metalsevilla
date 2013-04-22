<?php
/**
 * @file
 * anuncios_grupos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function anuncios_grupos_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function anuncios_grupos_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function anuncios_grupos_node_info() {
  $items = array(
    'anuncio' => array(
      'name' => t('Anuncio'),
      'base' => 'node_content',
      'description' => t('Si ofreces o buscas: instrumentos, grupo, salas,... ¡Publica aquí tu anuncio!
'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
