<?php
/**
 * @file
 * entrevista.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function entrevista_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function entrevista_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function entrevista_node_info() {
  $items = array(
    'entrevista' => array(
      'name' => t('Entrevista'),
      'base' => 'node_content',
      'description' => t('Entrevistas a músicos y personas relacionadas con la música.
'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
