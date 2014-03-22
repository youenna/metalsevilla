<?php
/**
 * @file
 * grupo_artista.default_node_subpages_paths.inc
 */

/**
 * Implements hook_default_node_subpages_path().
 */
function grupo_artista_default_node_subpages_path() {
  $export = array();

  $path = new stdClass();
  $path->disabled = FALSE; /* Edit this to true to make a default path disabled initially */
  $path->api_version = 1;
  $path->id = '3';
  $path->machine_name = 'agenda';
  $path->node_type = 'grupo_artista';
  $path->subpath = 'agenda';
  $path->title = 'Agenda';
  $path->is_default = FALSE;
  $path->source_type = 'views';
  $path->source_data = array(
    'view' => 'pestanas_de_grupos',
    'display' => 'block_2',
  );
  $path->weight = -8;
  $export['agenda'] = $path;

  $path = new stdClass();
  $path->disabled = FALSE; /* Edit this to true to make a default path disabled initially */
  $path->api_version = 1;
  $path->id = '5';
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
  $path->weight = -10;
  $export['discografia'] = $path;

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
    'field' => 'field_member',
    'formatter' => 'field_collection_view',
    'formatter_options' => array(
      'edit' => 'Editar',
      'delete' => 'Eliminar',
      'add' => 'Agregar',
      'description' => 1,
      'view_mode' => 'full',
    ),
  );
  $path->weight = 0;
  $export['miembros'] = $path;

  $path = new stdClass();
  $path->disabled = FALSE; /* Edit this to true to make a default path disabled initially */
  $path->api_version = 1;
  $path->id = '4';
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
  $path->weight = -9;
  $export['noticias'] = $path;

  return $export;
}
