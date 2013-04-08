<?php
/**
 * @file
 * actualidad.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function actualidad_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'actualidad_listado';
  $context->description = 'Bloques de la sección actualidad general';
  $context->tag = 'actualidad';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'actualidad:page' => 'actualidad:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'header',
          'weight' => '-10',
        ),
        'views--exp-actualidad-page' => array(
          'module' => 'views',
          'delta' => '-exp-actualidad-page',
          'region' => 'right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bloques de la sección actualidad general');
  t('actualidad');
  $export['actualidad_listado'] = $context;

  return $export;
}
