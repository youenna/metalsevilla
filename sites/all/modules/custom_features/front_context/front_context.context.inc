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
  $context->name = 'mostrado_siempre';
  $context->description = 'Contexto para los menús';
  $context->tag = 'portada';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'search_area',
          'weight' => '-10',
        ),
        'menu-menu-redes-sociales' => array(
          'module' => 'menu',
          'delta' => 'menu-redes-sociales',
          'region' => 'search_area',
          'weight' => '-9',
        ),
        'menu-menu-menu-cabecera' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-cabecera',
          'region' => 'search_area',
          'weight' => '-7',
        ),
        'node_subpages-menu_bar' => array(
          'module' => 'node_subpages',
          'delta' => 'menu_bar',
          'region' => 'content_top_below_title',
          'weight' => '-10',
        ),
        'views-banners_right-block' => array(
          'module' => 'views',
          'delta' => 'banners_right-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => 10,
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto para los menús');
  t('portada');
  $export['mostrado_siempre'] = $context;

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
        'nivo_slider-nivo_slider' => array(
          'module' => 'nivo_slider',
          'delta' => 'nivo_slider',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-actualidad-block_1' => array(
          'module' => 'views',
          'delta' => 'actualidad-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-eventos-block_1' => array(
          'module' => 'views',
          'delta' => 'eventos-block_1',
          'region' => 'content',
          'weight' => '-8',
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
