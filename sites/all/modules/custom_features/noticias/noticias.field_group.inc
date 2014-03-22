<?php
/**
 * @file
 * noticias.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function noticias_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_maindata|node|noticia|form';
  $field_group->group_name = 'group_shared_maindata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'noticia';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Principales',
    'weight' => '0',
    'children' => array(
      0 => 'field_shared_description',
      1 => 'field_shared_image',
      2 => 'field_shared_video',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_shared_maindata|node|noticia|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_relationships|node|noticia|form';
  $field_group->group_name = 'group_shared_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'noticia';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relaciones',
    'weight' => '1',
    'children' => array(
      0 => 'field_shared_rel_group',
      1 => 'field_shared_rel_event',
      2 => 'field_shared_rel_local',
      3 => 'field_shared_rel_disc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_shared_relationships|node|noticia|form'] = $field_group;

  return $export;
}
