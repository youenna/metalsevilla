<?php
/**
 * @file
 * relaciones.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function relaciones_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'noticias_toc';
  $context->description = '';
  $context->tag = 'Detalle Noticia, Cronica, Critica, Entrevista, Disco y Evento';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'critica_disco' => 'critica_disco',
        'cronica' => 'cronica',
        'disco' => 'disco',
        'entrevista' => 'entrevista',
        'evento' => 'evento',
        'noticia' => 'noticia',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Detalle Noticia, Cronica, Critica, Entrevista, Disco y Evento');
  $export['noticias_toc'] = $context;

  return $export;
}
