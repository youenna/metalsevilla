<?php
/**
 * @file
 * grupos.default_node_subpages_paths.inc
 */

/**
 * Implements hook_default_node_subpages_path().
 */
function grupos_default_node_subpages_path() {
  $export = array();

  $path = new stdClass();
  $path->disabled = FALSE; /* Edit this to true to make a default path disabled initially */
  $path->api_version = 1;
  $path->id = '10';
  $path->machine_name = 'agenda';
  $path->node_type = 'grupo_artista';
  $path->subpath = 'agenda';
  $path->title = 'Agenda';
  $path->is_default = FALSE;
  $path->source_type = 'views';
  $path->source_data = array(
    'view' => 'pestanas_de_grupos',
    'display' => 'block_7',
  );
  $path->weight = -6;
  $export['agenda'] = $path;

  $path = new stdClass();
  $path->disabled = FALSE; /* Edit this to true to make a default path disabled initially */
  $path->api_version = 1;
  $path->id = '8';
  $path->machine_name = 'discografia';
  $path->node_type = 'grupo_artista';
  $path->subpath = 'discografia';
  $path->title = 'Discografía';
  $path->is_default = FALSE;
  $path->source_type = 'views';
  $path->source_data = array(
    'view' => 'pestanas_de_grupos',
    'display' => 'block_1',
  );
  $path->weight = -8;
  $export['discografia'] = $path;

  $path = new stdClass();
  $path->disabled = FALSE; /* Edit this to true to make a default path disabled initially */
  $path->api_version = 1;
  $path->id = '7';
  $path->machine_name = 'info';
  $path->node_type = 'grupo_artista';
  $path->subpath = 'info';
  $path->title = 'Info';
  $path->is_default = FALSE;
  $path->source_type = 'views';
  $path->source_data = array(
    'view' => 'pestanas_de_grupos',
    'display' => 'block_5',
  );
  $path->weight = -10;
  $export['info'] = $path;

  $path = new stdClass();
  $path->disabled = FALSE; /* Edit this to true to make a default path disabled initially */
  $path->api_version = 1;
  $path->id = '6';
  $path->machine_name = 'miembros';
  $path->node_type = 'grupo_artista';
  $path->subpath = 'miembros';
  $path->title = 'Miembros';
  $path->is_default = FALSE;
  $path->source_type = 'field';
  $path->source_data = array(
    'field' => 'field_user_member',
    'formatter' => 'field_collection_fields',
    'formatter_options' => array(
      'view_mode' => 'full',
    ),
  );
  $path->weight = -9;
  $export['miembros'] = $path;

  $path = new stdClass();
  $path->disabled = FALSE; /* Edit this to true to make a default path disabled initially */
  $path->api_version = 1;
  $path->id = '9';
  $path->machine_name = 'noticias';
  $path->node_type = 'grupo_artista';
  $path->subpath = 'noticias';
  $path->title = 'Noticias';
  $path->is_default = FALSE;
  $path->source_type = 'views';
  $path->source_data = array(
    'view' => 'pestanas_de_grupos',
    'display' => 'block_3',
  );
  $path->weight = -7;
  $export['noticias'] = $path;

  return $export;
}
