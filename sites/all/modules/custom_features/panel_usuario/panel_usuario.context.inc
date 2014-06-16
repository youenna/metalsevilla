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
    'user' => array(
      'values' => array(
        'Community Manager' => 'Community Manager',
        'Gestor de establecimiento' => 'Gestor de establecimiento',
        'Moderador' => 'Moderador',
        'Mánager' => 'Mánager',
        'Músico' => 'Músico',
        'Redactor/a' => 'Redactor/a',
        'administrator' => 'administrator',
        'anonymous user' => 'anonymous user',
        'authenticated user' => 'authenticated user',
      ),
    ),
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
        'views-perfiles_de_usuario-block' => array(
          'module' => 'views',
          'delta' => 'perfiles_de_usuario-block',
          'region' => 'content_top_below_title',
          'weight' => '-44',
        ),
        'views-gestion_de_contenido-block_1' => array(
          'module' => 'views',
          'delta' => 'gestion_de_contenido-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Usuario');
  $export['contenido'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contenido_usuarios_registrados';
  $context->description = '';
  $context->tag = 'Usuario';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Community Manager' => 'Community Manager',
        'Gestor de establecimiento' => 'Gestor de establecimiento',
        'Moderador' => 'Moderador',
        'Mánager' => 'Mánager',
        'Músico' => 'Músico',
        'Redactor/a' => 'Redactor/a',
        'administrator' => 'administrator',
        'authenticated user' => 'authenticated user',
      ),
    ),
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
        'views-perfiles_de_usuario-block_2' => array(
          'module' => 'views',
          'delta' => 'perfiles_de_usuario-block_2',
          'region' => 'content_top_below_title',
          'weight' => '-9',
        ),
        'views-gestion_de_contenido-block_2' => array(
          'module' => 'views',
          'delta' => 'gestion_de_contenido-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Usuario');
  $export['contenido_usuarios_registrados'] = $context;

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
        'views-2b2c408105b14ce2ae3f0aaf9ab26018' => array(
          'module' => 'views',
          'delta' => '2b2c408105b14ce2ae3f0aaf9ab26018',
          'region' => 'content_top_below_title',
          'weight' => '-10',
        ),
        'views-perfiles_de_usuario-block_1' => array(
          'module' => 'views',
          'delta' => 'perfiles_de_usuario-block_1',
          'region' => 'content_top_below_title',
          'weight' => '-9',
        ),
        'views-gestion_de_contenido-block' => array(
          'module' => 'views',
          'delta' => 'gestion_de_contenido-block',
          'region' => 'content',
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
