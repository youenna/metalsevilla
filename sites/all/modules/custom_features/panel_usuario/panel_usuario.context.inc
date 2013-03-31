<?php
/**
 * @file
 * panel_usuario.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function panel_usuario_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contenido';
  $context->description = '';
  $context->tag = 'Usuario';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'other',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-gestion_de_contenido-block_1' => array(
          'module' => 'views',
          'delta' => 'gestion_de_contenido-block_1',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Usuario');
  $export['contenido'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mi_contenido';
  $context->description = '';
  $context->tag = 'Usuario';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'current',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-gestion_de_contenido-block' => array(
          'module' => 'views',
          'delta' => 'gestion_de_contenido-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Usuario');
  $export['mi_contenido'] = $context;

  return $export;
}
