<?php
/**
 * @file
 * entrevista.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function entrevista_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_maindata|node|entrevista|form';
  $field_group->group_name = 'group_shared_maindata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'entrevista';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Principales',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_audio',
      1 => 'field_shared_description',
      2 => 'field_rep_video',
      3 => 'field_shared_rep_image',
      4 => 'title',
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
  $export['group_shared_maindata|node|entrevista|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_relationships|node|entrevista|form';
  $field_group->group_name = 'group_shared_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'entrevista';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relaciones',
    'weight' => '3',
    'children' => array(
      0 => 'field_shared_rel_group',
      1 => 'field_shared_rel_disc',
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
  $export['group_shared_relationships|node|entrevista|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_settings|node|entrevista|form';
  $field_group->group_name = 'group_shared_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'entrevista';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorización',
    'weight' => '0',
    'children' => array(
      0 => 'field_shared_style',
      1 => 'field_shared_state',
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
  $export['group_shared_settings|node|entrevista|form'] = $field_group;

  return $export;
}
