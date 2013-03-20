<?php
/**
 * @file
 * front_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function front_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada';
  $context->description = 'Contexto para la portada';
  $context->tag = 'portada';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header_top',
          'weight' => '-14',
        ),
        'menu-menu-redes-sociales' => array(
          'module' => 'menu',
          'delta' => 'menu-redes-sociales',
          'region' => 'header_top',
          'weight' => '-13',
        ),
        'menu-menu-menu-cabecera' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-cabecera',
          'region' => 'header_top',
          'weight' => '-12',
        ),
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => 1,
          'region' => 'header_top',
          'weight' => '-10',
        ),
        'views-actualidad-block_2' => array(
          'module' => 'views',
          'delta' => 'actualidad-block_2',
          'region' => 'content',
          'weight' => '-21',
        ),
        'views-actualidad-block_1' => array(
          'module' => 'views',
          'delta' => 'actualidad-block_1',
          'region' => 'content',
          'weight' => '-20',
        ),
        'views-eventos-block_1' => array(
          'module' => 'views',
          'delta' => 'eventos-block_1',
          'region' => 'content',
          'weight' => '-19',
        ),
        'views-anuncios-block_1' => array(
          'module' => 'views',
          'delta' => 'anuncios-block_1',
          'region' => 'content',
          'weight' => '-18',
        ),
        'views-mapa_home-block_1' => array(
          'module' => 'views',
          'delta' => 'mapa_home-block_1',
          'region' => 'content',
          'weight' => '-17',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto para la portada');
  t('portada');
  $export['portada'] = $context;

  return $export;
}
