<?php
/**
 * @file
 * establecimiento.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function establecimiento_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|establecimiento|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'establecimiento';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacto',
    'weight' => '9',
    'children' => array(
      0 => 'field_shared_web',
      1 => 'field_shared_email',
      2 => 'field_shared_phone',
      3 => 'field_shared_twitter',
      4 => 'field_shared_facebook',
      5 => 'field_shared_googleplus',
      6 => 'field_shared_flickr',
      7 => 'field_shared_youtube',
      8 => 'field_foursquare',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_contact|node|establecimiento|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_contact|node|establecimiento|form';
  $field_group->group_name = 'group_shared_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'establecimiento';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacto',
    'weight' => '2',
    'children' => array(
      0 => 'field_shared_web',
      1 => 'field_shared_email',
      2 => 'field_shared_phone',
      3 => 'field_shared_twitter',
      4 => 'field_shared_facebook',
      5 => 'field_shared_googleplus',
      6 => 'field_shared_flickr',
      7 => 'field_shared_youtube',
      8 => 'field_foursquare',
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
  $export['group_shared_contact|node|establecimiento|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_maindata|node|establecimiento|form';
  $field_group->group_name = 'group_shared_maindata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'establecimiento';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Principales',
    'weight' => '1',
    'children' => array(
      0 => 'field_address',
      1 => 'field_shared_description',
      2 => 'field_shared_logo',
      3 => 'field_shared_image',
      4 => 'field_timetable',
      5 => 'field_open',
      6 => 'field_location',
      7 => 'title',
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
  $export['group_shared_maindata|node|establecimiento|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_settings|node|establecimiento|form';
  $field_group->group_name = 'group_shared_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'establecimiento';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorización',
    'weight' => '0',
    'children' => array(
      0 => 'field_shared_state',
      1 => 'field_shared_style',
      2 => 'field_shared_type',
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
  $export['group_shared_settings|node|establecimiento|form'] = $field_group;

  return $export;
}
