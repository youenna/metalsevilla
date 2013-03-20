<?php
/**
 * @file
 * establecimientos_listado.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function establecimientos_listado_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bares_listado';
  $context->description = '';
  $context->tag = 'Establecimientos';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'establecimientos_listado:page_3' => 'establecimientos_listado:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-82209d15f32eae8e7f142ad25dafa7fe' => array(
          'module' => 'views',
          'delta' => '82209d15f32eae8e7f142ad25dafa7fe',
          'region' => 'right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Establecimientos');
  $export['bares_listado'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'establecimientos_listado';
  $context->description = '';
  $context->tag = 'Establecimientos';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'establecimientos_listado:page' => 'establecimientos_listado:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-4d5c8e4be1f937c72c7ea5fafcf405f7' => array(
          'module' => 'views',
          'delta' => '4d5c8e4be1f937c72c7ea5fafcf405f7',
          'region' => 'right',
          'weight' => '-10',
        ),
        'views-mapa_home-block_2' => array(
          'module' => 'views',
          'delta' => 'mapa_home-block_2',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Establecimientos');
  $export['establecimientos_listado'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'locales_ensayo_listado';
  $context->description = '';
  $context->tag = 'Establecimientos';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-mapa_home-block_3' => array(
          'module' => 'views',
          'delta' => 'mapa_home-block_3',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Establecimientos');
  $export['locales_ensayo_listado'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'salas_listado';
  $context->description = '';
  $context->tag = 'Establecimientos';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'establecimientos_listado:page_4' => 'establecimientos_listado:page_4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6bffa7b82d175e3f2d2b3b4e2414c4e1' => array(
          'module' => 'views',
          'delta' => '6bffa7b82d175e3f2d2b3b4e2414c4e1',
          'region' => 'right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Establecimientos');
  $export['salas_listado'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tiendas_listado';
  $context->description = '';
  $context->tag = 'Establecimientos';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'establecimientos_listado:page_2' => 'establecimientos_listado:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b36983ba66e679f2d1ea362d66545927' => array(
          'module' => 'views',
          'delta' => 'b36983ba66e679f2d1ea362d66545927',
          'region' => 'right',
          'weight' => '-10',
        ),
        'views-mapa_home-block_3' => array(
          'module' => 'views',
          'delta' => 'mapa_home-block_3',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Establecimientos');
  $export['tiendas_listado'] = $context;

  return $export;
}
