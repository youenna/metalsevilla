<?php
/**
 * @file
 * anuncios_grupos.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function anuncios_grupos_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'anuncio_toc';
  $context->description = '';
  $context->tag = 'Detalle ToC';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'anuncio' => 'anuncio',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-3df97544bb32f4ca62f53a43577069bd' => array(
          'module' => 'views',
          'delta' => '3df97544bb32f4ca62f53a43577069bd',
          'region' => 'left',
          'weight' => '-10',
        ),
        'views--exp-anuncios-page' => array(
          'module' => 'views',
          'delta' => '-exp-anuncios-page',
          'region' => 'right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Detalle ToC');
  $export['anuncio_toc'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'listado_anuncios';
  $context->description = '';
  $context->tag = 'Grupos y Artistas';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'anuncios:page' => 'anuncios:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'header',
          'weight' => '-10',
        ),
        'views--exp-anuncios-page' => array(
          'module' => 'views',
          'delta' => '-exp-anuncios-page',
          'region' => 'right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Grupos y Artistas');
  $export['listado_anuncios'] = $context;

  return $export;
}
