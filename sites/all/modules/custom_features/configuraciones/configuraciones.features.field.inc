<?php
/**
 * @file
 * configuraciones.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function configuraciones_field_default_fields() {
  $fields = array();

  // Exported field: 'user-user-field_google_plus_id'
  $fields['user-user-field_google_plus_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_google_plus_id',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is the 21 digit number found in the URL of
                         this user\'s Google+ profile.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_google_plus_id',
      'label' => 'Google+ ID',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => 1,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => '21',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Google+ ID');
  t('This is the 21 digit number found in the URL of
                         this user\'s Google+ profile.');

  return $fields;
}
