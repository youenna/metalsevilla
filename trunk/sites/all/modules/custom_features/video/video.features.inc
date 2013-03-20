<?php
/**
 * @file
 * video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function video_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Vídeo'),
      'base' => 'node_content',
      'description' => t('Vídeo que se puede vincular a los grupos, locales, eventos y noticias.
'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
