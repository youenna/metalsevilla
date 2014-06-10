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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'criticas_de_discos';
  $context->description = 'Bloques de la sección crítica de discos';
  $context->tag = 'actualidad';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'criticas_de_discos:page' => 'criticas_de_discos:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'header',
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
  t('Bloques de la sección crítica de discos');
  t('actualidad');
  $export['criticas_de_discos'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cronica_concierto_toc';
  $context->description = '';
  $context->tag = 'Detalle ToC';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'cronica' => 'cronica',
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
  t('Detalle ToC');
  $export['cronica_concierto_toc'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cronicas_de_conciertos';
  $context->description = 'Bloques de la sección crónica de conciertos';
  $context->tag = 'actualidad';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'cronicas_de_conciertos:page' => 'cronicas_de_conciertos:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facebook_comments_box-facebook_comments_box' => array(
          'module' => 'facebook_comments_box',
          'delta' => 'facebook_comments_box',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bloques de la sección crónica de conciertos');
  t('actualidad');
  $export['cronicas_de_conciertos'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'disco_toc';
  $context->description = '';
  $context->tag = 'Detalle ToC';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'disco' => 'disco',
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
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Detalle ToC');
  $export['disco_toc'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'entrevista_toc';
  $context->description = '';
  $context->tag = 'Detalle ToC';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'entrevista' => 'entrevista',
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
  t('Detalle ToC');
  $export['entrevista_toc'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'evento_toc';
  $context->description = '';
  $context->tag = 'Detalle ToC';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'evento' => 'evento',
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
        'views-610c147fb4faf7d9ba9d99eb6c6ec355' => array(
          'module' => 'views',
          'delta' => '610c147fb4faf7d9ba9d99eb6c6ec355',
          'region' => 'left',
          'weight' => '-9',
        ),
        'views-34b4d0b75416355a51dfb17350d5e33c' => array(
          'module' => 'views',
          'delta' => '34b4d0b75416355a51dfb17350d5e33c',
          'region' => 'left',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Detalle ToC');
  $export['evento_toc'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'foto_toc';
  $context->description = '';
  $context->tag = 'Detalle ToC';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'foto' => 'foto',
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
        'views-8bd670d8c665375436c3fd0e6b8d41a2' => array(
          'module' => 'views',
          'delta' => '8bd670d8c665375436c3fd0e6b8d41a2',
          'region' => 'left',
          'weight' => '-9',
        ),
        'views-34b4d0b75416355a51dfb17350d5e33c' => array(
          'module' => 'views',
          'delta' => '34b4d0b75416355a51dfb17350d5e33c',
          'region' => 'left',
          'weight' => '-8',
        ),
        'views-610c147fb4faf7d9ba9d99eb6c6ec355' => array(
          'module' => 'views',
          'delta' => '610c147fb4faf7d9ba9d99eb6c6ec355',
          'region' => 'left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Detalle ToC');
  $export['foto_toc'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lanzamiento_disco_toc';
  $context->description = '';
  $context->tag = 'Detalle ToC';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'lanzamiento_disco' => 'lanzamiento_disco',
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
        'views-610c147fb4faf7d9ba9d99eb6c6ec355' => array(
          'module' => 'views',
          'delta' => '610c147fb4faf7d9ba9d99eb6c6ec355',
          'region' => 'left',
          'weight' => '-10',
        ),
        'views-34b4d0b75416355a51dfb17350d5e33c' => array(
          'module' => 'views',
          'delta' => '34b4d0b75416355a51dfb17350d5e33c',
          'region' => 'left',
          'weight' => '-10',
        ),
        'views--exp-fotos-page' => array(
          'module' => 'views',
          'delta' => '-exp-fotos-page',
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
  $export['lanzamiento_disco_toc'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'video_toc';
  $context->description = '';
  $context->tag = 'Detalle ToC';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'foto' => 'foto',
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
        'views-610c147fb4faf7d9ba9d99eb6c6ec355' => array(
          'module' => 'views',
          'delta' => '610c147fb4faf7d9ba9d99eb6c6ec355',
          'region' => 'left',
          'weight' => '-10',
        ),
        'views-8bd670d8c665375436c3fd0e6b8d41a2' => array(
          'module' => 'views',
          'delta' => '8bd670d8c665375436c3fd0e6b8d41a2',
          'region' => 'left',
          'weight' => '-9',
        ),
        'views-34b4d0b75416355a51dfb17350d5e33c' => array(
          'module' => 'views',
          'delta' => '34b4d0b75416355a51dfb17350d5e33c',
          'region' => 'left',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Detalle ToC');
  $export['video_toc'] = $context;

  return $export;
}
