<?php
/**
 * @file
 * relaciones.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function relaciones_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'grupoa_y_establecimientos_relacionados';
  $view->description = 'Vista con los bloques de los grupos,establecimientos y eventos relacionados de cada nodo';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Grupos y establecimientos relacionados';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Grupos relacionados';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Logo */
  $handler->display->display_options['fields']['field_shared_logo']['id'] = 'field_shared_logo';
  $handler->display->display_options['fields']['field_shared_logo']['table'] = 'field_data_field_shared_logo';
  $handler->display->display_options['fields']['field_shared_logo']['field'] = 'field_shared_logo';
  $handler->display->display_options['fields']['field_shared_logo']['label'] = '';
  $handler->display->display_options['fields']['field_shared_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'logo_detalle',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_logo']['field_api_classes'] = 0;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'anuncio' => 'anuncio',
    'critica_disco' => 'critica_disco',
    'cronica' => 'cronica',
    'disco' => 'disco',
    'entrevista' => 'entrevista',
    'evento' => 'evento',
    'foto' => 'foto',
    'lanzamiento_disco' => 'lanzamiento_disco',
    'noticia' => 'noticia',
    'video' => 'video',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Grupos';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Grupos relacionados (field_shared_rel_group) */
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['id'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['table'] = 'field_data_field_shared_rel_group';
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['field'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Logo */
  $handler->display->display_options['fields']['field_shared_logo']['id'] = 'field_shared_logo';
  $handler->display->display_options['fields']['field_shared_logo']['table'] = 'field_data_field_shared_logo';
  $handler->display->display_options['fields']['field_shared_logo']['field'] = 'field_shared_logo';
  $handler->display->display_options['fields']['field_shared_logo']['relationship'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['fields']['field_shared_logo']['label'] = '';
  $handler->display->display_options['fields']['field_shared_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'logo_detalle',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_logo']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Grupos Relacionados';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Establecimientos';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Establecimiento relacionado (field_shared_rel_local) */
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['id'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['table'] = 'field_data_field_shared_rel_local';
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['field'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Logo */
  $handler->display->display_options['fields']['field_shared_logo']['id'] = 'field_shared_logo';
  $handler->display->display_options['fields']['field_shared_logo']['table'] = 'field_data_field_shared_logo';
  $handler->display->display_options['fields']['field_shared_logo']['field'] = 'field_shared_logo';
  $handler->display->display_options['fields']['field_shared_logo']['relationship'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['fields']['field_shared_logo']['label'] = '';
  $handler->display->display_options['fields']['field_shared_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'logo_detalle',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_logo']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Establecimientos Relacionados';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Eventos';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Evento relacionado (field_shared_rel_event) */
  $handler->display->display_options['relationships']['field_shared_rel_event_nid']['id'] = 'field_shared_rel_event_nid';
  $handler->display->display_options['relationships']['field_shared_rel_event_nid']['table'] = 'field_data_field_shared_rel_event';
  $handler->display->display_options['relationships']['field_shared_rel_event_nid']['field'] = 'field_shared_rel_event_nid';
  $handler->display->display_options['relationships']['field_shared_rel_event_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_shared_rel_event_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Portada */
  $handler->display->display_options['fields']['field_shared_image']['id'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['table'] = 'field_data_field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['field'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['relationship'] = 'field_shared_rel_event_nid';
  $handler->display->display_options['fields']['field_shared_image']['label'] = '';
  $handler->display->display_options['fields']['field_shared_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_image']['settings'] = array(
    'image_style' => 'logo_detalle',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_image']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'EventosRelacionados';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Disco';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Disco relacionado (field_shared_rel_disc) */
  $handler->display->display_options['relationships']['field_shared_rel_disc_nid']['id'] = 'field_shared_rel_disc_nid';
  $handler->display->display_options['relationships']['field_shared_rel_disc_nid']['table'] = 'field_data_field_shared_rel_disc';
  $handler->display->display_options['relationships']['field_shared_rel_disc_nid']['field'] = 'field_shared_rel_disc_nid';
  $handler->display->display_options['relationships']['field_shared_rel_disc_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_shared_rel_disc_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Portada */
  $handler->display->display_options['fields']['field_shared_image']['id'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['table'] = 'field_data_field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['field'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['relationship'] = 'field_shared_rel_disc_nid';
  $handler->display->display_options['fields']['field_shared_image']['label'] = '';
  $handler->display->display_options['fields']['field_shared_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_image']['settings'] = array(
    'image_style' => 'logo_detalle',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_image']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Disco Relacionado';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['grupoa_y_establecimientos_relacionados'] = array(
    t('Master'),
    t('Grupos relacionados'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Todo(s)'),
    t('Block'),
    t('Grupos'),
    t('field_shared_rel_group'),
    t('Grupos Relacionados'),
    t('Establecimientos'),
    t('field_shared_rel_local'),
    t('Establecimientos Relacionados'),
    t('Eventos'),
    t('field_shared_rel_event'),
    t('EventosRelacionados'),
    t('Disco'),
    t('field_shared_rel_disc'),
    t('Disco Relacionado'),
  );
  $export['grupoa_y_establecimientos_relacionados'] = $view;

  return $export;
}
