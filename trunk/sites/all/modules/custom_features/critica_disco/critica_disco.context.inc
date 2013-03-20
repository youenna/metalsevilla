<?php
/**
 * @file
 * critica_disco.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function critica_disco_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'critica_disco_toc';
  $context->description = '';
  $context->tag = 'Detalle ToC';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'critica_disco' => 'critica_disco',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-610c147fb4faf7d9ba9d99eb6c6ec355' => array(
          'module' => 'views',
          'delta' => '610c147fb4faf7d9ba9d99eb6c6ec355',
          'region' => 'left',
          'weight' => '-10',
        ),
        'views-3df97544bb32f4ca62f53a43577069bd' => array(
          'module' => 'views',
          'delta' => '3df97544bb32f4ca62f53a43577069bd',
          'region' => 'left',
          'weight' => '-10',
        ),
        'views--exp-criticas_de_discos-page' => array(
          'module' => 'views',
          'delta' => '-exp-criticas_de_discos-page',
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
  $export['critica_disco_toc'] = $context;

  return $export;
}
