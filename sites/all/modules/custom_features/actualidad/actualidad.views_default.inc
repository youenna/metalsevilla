<?php
/**
 * @file
 * actualidad.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function actualidad_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'actualidad';
  $view->description = 'Listado y bloques de toda la actualidad';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Actualidad';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Actualidad';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ver más';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Contenido: Grupos relacionados (field_shared_rel_group) */
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['id'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['table'] = 'field_data_field_shared_rel_group';
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['field'] = 'field_shared_rel_group_nid';
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Campo: Descripción */
  $handler->display->display_options['fields']['field_shared_description']['id'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['table'] = 'field_data_field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['field'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['label'] = '';
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_shared_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critica_disco' => 'critica_disco',
    'cronica' => 'cronica',
    'entrevista' => 'entrevista',
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Campo: Foto */
  $handler->display->display_options['fields']['field_shared_image']['id'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['table'] = 'field_data_field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['field'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['label'] = '';
  $handler->display->display_options['fields']['field_shared_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_image']['settings'] = array(
    'image_style' => 'imagen_listado',
    'image_link' => 'content',
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="list-submitted">ENVIADO POR [name] EL [created]</div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Campo: Campo: Descripción */
  $handler->display->display_options['fields']['field_shared_description']['id'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['table'] = 'field_data_field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['field'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['label'] = '';
  $handler->display->display_options['fields']['field_shared_description']['alter']['max_length'] = '450';
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['element_label_colon'] = FALSE;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="guionnoticias"></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'critica_disco' => 'critica_disco',
    'cronica' => 'cronica',
    'entrevista' => 'entrevista',
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'critica_disco' => 'critica_disco',
    'cronica' => 'cronica',
    'entrevista' => 'entrevista',
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Tipo';
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['reduce'] = TRUE;
  /* Filter criterion: Campo: Estilo (field_shared_style) */
  $handler->display->display_options['filters']['field_shared_style_tid']['id'] = 'field_shared_style_tid';
  $handler->display->display_options['filters']['field_shared_style_tid']['table'] = 'field_data_field_shared_style';
  $handler->display->display_options['filters']['field_shared_style_tid']['field'] = 'field_shared_style_tid';
  $handler->display->display_options['filters']['field_shared_style_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_style_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['operator_id'] = 'field_shared_style_tid_op';
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['label'] = 'Estilo';
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['operator'] = 'field_shared_style_tid_op';
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['identifier'] = 'field_shared_style_tid';
  $handler->display->display_options['filters']['field_shared_style_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_style_tid']['vocabulary'] = 'estilo';
  /* Filter criterion: Campo: Provincia (field_shared_state) */
  $handler->display->display_options['filters']['field_shared_state_tid']['id'] = 'field_shared_state_tid';
  $handler->display->display_options['filters']['field_shared_state_tid']['table'] = 'field_data_field_shared_state';
  $handler->display->display_options['filters']['field_shared_state_tid']['field'] = 'field_shared_state_tid';
  $handler->display->display_options['filters']['field_shared_state_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_state_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_state_tid']['expose']['operator_id'] = 'field_shared_state_tid_op';
  $handler->display->display_options['filters']['field_shared_state_tid']['expose']['label'] = 'Provincia';
  $handler->display->display_options['filters']['field_shared_state_tid']['expose']['operator'] = 'field_shared_state_tid_op';
  $handler->display->display_options['filters']['field_shared_state_tid']['expose']['identifier'] = 'field_shared_state_tid';
  $handler->display->display_options['filters']['field_shared_state_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_state_tid']['vocabulary'] = 'provincia';
  $handler->display->display_options['filters']['field_shared_state_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'actualidad';

  /* Display: Bloque */
  $handler = $view->new_display('block', 'Bloque', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Campo: Foto */
  $handler->display->display_options['fields']['field_shared_image']['id'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['table'] = 'field_data_field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['field'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['label'] = '';
  $handler->display->display_options['fields']['field_shared_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_image']['type'] = 'lightbox2__lightbox__image_430width__original';
  $handler->display->display_options['fields']['field_shared_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Campo: Descripción */
  $handler->display->display_options['fields']['field_shared_description']['id'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['table'] = 'field_data_field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['field'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['label'] = '';
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['field_shared_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_shared_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_description']['type'] = 'text_plain';
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="guionnoticias"></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Actualidad (home)';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'actualidad/feed';

  /* Display: Actualidad grupo */
  $handler = $view->new_display('block', 'Actualidad grupo', 'block_3');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'anuncio' => 'anuncio',
    'critica_disco' => 'critica_disco',
    'cronica' => 'cronica',
    'disco' => 'disco',
    'entrevista' => 'entrevista',
    'evento' => 'evento',
    'lanzamiento_disco' => 'lanzamiento_disco',
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Actualidad (grupo)';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Actualidad establecimiento */
  $handler = $view->new_display('block', 'Actualidad establecimiento', 'block_4');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Establecimiento relacionado (field_shared_rel_local) */
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['id'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['table'] = 'field_data_field_shared_rel_local';
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['field'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cronica' => 'cronica',
    'entrevista' => 'entrevista',
    'evento' => 'evento',
    'lanzamiento_disco' => 'lanzamiento_disco',
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Actualidad (establecimiento)';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['actualidad'] = array(
    t('Master'),
    t('Actualidad'),
    t('ver más'),
    t('Filtrar'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('field_shared_rel_group'),
    t('author'),
    t('Page'),
    t('more'),
    t('<div class="list-submitted">ENVIADO POR [name] EL [created]</div>'),
    t('<span class="guionnoticias"></span>'),
    t('Tipo'),
    t('Estilo'),
    t('Provincia'),
    t('Bloque'),
    t('Actualidad (home)'),
    t('Feed'),
    t('Actualidad grupo'),
    t('Todo(s)'),
    t('Actualidad (grupo)'),
    t('Actualidad establecimiento'),
    t('field_shared_rel_local'),
    t('Actualidad (establecimiento)'),
  );
  $export['actualidad'] = $view;

  return $export;
}
