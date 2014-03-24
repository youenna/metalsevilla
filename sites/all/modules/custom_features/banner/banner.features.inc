<?php
/**
 * @file
 * banner.features.inc
 */

/**
 * Implements hook_views_api().
 */
function banner_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function banner_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => t('Contenido específico para los banners de la derecha'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
