<?php
/**
 * @file
 * grupos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function grupos_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'listado_grupos';
  $view->description = 'Listados y bloques de grupos y artistas';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listado grupos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Grupos y artistas';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  $handler->display->display_options['fields']['field_shared_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_shared_logo']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['field_api_classes'] = 0;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Contenido: Biografía */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['label'] = '';
  $handler->display->display_options['fields']['field_bio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bio']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_bio']['field_api_classes'] = 0;
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
    'grupo_artista' => 'grupo_artista',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Título';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
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
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_shared_style_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_shared_style_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_style_tid']['vocabulary'] = 'estilo';
  $handler->display->display_options['filters']['field_shared_style_tid']['error_message'] = 1;
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
  $handler->display->display_options['filters']['field_shared_state_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_shared_state_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_shared_state_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_state_tid']['vocabulary'] = 'provincia';
  $handler->display->display_options['filters']['field_shared_state_tid']['error_message'] = 1;
  /* Filter criterion: Contenido: Actividad (field_activity) */
  $handler->display->display_options['filters']['field_activity_value']['id'] = 'field_activity_value';
  $handler->display->display_options['filters']['field_activity_value']['table'] = 'field_data_field_activity';
  $handler->display->display_options['filters']['field_activity_value']['field'] = 'field_activity_value';
  $handler->display->display_options['filters']['field_activity_value']['group'] = 1;
  $handler->display->display_options['filters']['field_activity_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activity_value']['expose']['operator_id'] = 'field_activity_value_op';
  $handler->display->display_options['filters']['field_activity_value']['expose']['label'] = 'Actividad';
  $handler->display->display_options['filters']['field_activity_value']['expose']['operator'] = 'field_activity_value_op';
  $handler->display->display_options['filters']['field_activity_value']['expose']['identifier'] = 'field_activity_value';
  $handler->display->display_options['filters']['field_activity_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
  $handler->display->display_options['fields']['field_shared_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'imagen_listado',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_logo']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['field_api_classes'] = 0;
  /* Campo: Contenido: Biografía */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['label'] = '';
  $handler->display->display_options['fields']['field_bio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_bio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bio']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_bio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bio']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_bio']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'grupos-artistas';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
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
    'grupo_artista' => 'grupo_artista',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'grupos-artistas/feed';
  $translatables['listado_grupos'] = array(
    t('Master'),
    t('Grupos y artistas'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Título'),
    t('Estilo'),
    t('Provincia'),
    t('Actividad'),
    t('Page'),
    t('Feed'),
  );
  $export['listado_grupos'] = $view;

  $view = new view;
  $view->name = 'pestanas_de_grupos';
  $view->description = 'Listado y bloques de toda la actualidad';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pestañas de grupos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Actualidad';
  $handler->display->display_options['use_more_text'] = 'ver más';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Contenido: Grupos relacionados (field_shared_rel_group) */
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['id'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['table'] = 'field_data_field_shared_rel_group';
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['field'] = 'field_shared_rel_group_nid';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Campo: Descripción */
  $handler->display->display_options['fields']['field_shared_description']['id'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['table'] = 'field_data_field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['field'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['label'] = '';
  $handler->display->display_options['fields']['field_shared_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_shared_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['field_api_classes'] = 0;
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
    'lanzamiento_disco' => 'lanzamiento_disco',
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Actualidad grupo */
  $handler = $view->new_display('block', 'Actualidad grupo', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Noticias';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Establecimiento relacionado (field_shared_rel_local) */
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['id'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['table'] = 'field_data_field_shared_rel_local';
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['field'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_shared_rel_local_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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

  /* Display: Discografía grupo */
  $handler = $view->new_display('block', 'Discografía grupo', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Discografía';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'disco' => 'disco',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Actualidad (grupo)';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Agenda grupo */
  $handler = $view->new_display('block', 'Agenda grupo', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'evento' => 'evento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Actualidad (grupo)';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Información grupo */
  $handler = $view->new_display('block', 'Información grupo', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Info';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_shared_logo']['type'] = 'lightbox2__lightbox__medium__original';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_shared_logo']['field_api_classes'] = 0;
  /* Campo: Contenido: Actividad */
  $handler->display->display_options['fields']['field_activity']['id'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['table'] = 'field_data_field_activity';
  $handler->display->display_options['fields']['field_activity']['field'] = 'field_activity';
  $handler->display->display_options['fields']['field_activity']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_activity']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_activity']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_activity']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_activity']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_activity']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_activity']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_activity']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_activity']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_activity']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_activity']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_activity']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_activity']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_activity']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_activity']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_activity']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_activity']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_activity']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_activity']['field_api_classes'] = 0;
  /* Campo: Campo: Estilo */
  $handler->display->display_options['fields']['field_shared_style']['id'] = 'field_shared_style';
  $handler->display->display_options['fields']['field_shared_style']['table'] = 'field_data_field_shared_style';
  $handler->display->display_options['fields']['field_shared_style']['field'] = 'field_shared_style';
  $handler->display->display_options['fields']['field_shared_style']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_style']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_style']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_shared_style']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_style']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_style']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_shared_style']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_style']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_shared_style']['field_api_classes'] = 0;
  /* Campo: Campo: Provincia */
  $handler->display->display_options['fields']['field_shared_state']['id'] = 'field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['table'] = 'field_data_field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['field'] = 'field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_state']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_state']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_shared_state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_state']['field_api_classes'] = 0;
  /* Campo: Campo: Facebook */
  $handler->display->display_options['fields']['field_shared_facebook']['id'] = 'field_shared_facebook';
  $handler->display->display_options['fields']['field_shared_facebook']['table'] = 'field_data_field_shared_facebook';
  $handler->display->display_options['fields']['field_shared_facebook']['field'] = 'field_shared_facebook';
  $handler->display->display_options['fields']['field_shared_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['text'] = '<div class="social-group"><a href="[field_shared_facebook-value]"><img src="/sites/default/files/ms-social-share/fb.png" ></a></div>';
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_facebook']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_facebook']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_facebook']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_facebook']['field_api_classes'] = 0;
  /* Campo: Campo: Twitter */
  $handler->display->display_options['fields']['field_shared_twitter']['id'] = 'field_shared_twitter';
  $handler->display->display_options['fields']['field_shared_twitter']['table'] = 'field_data_field_shared_twitter';
  $handler->display->display_options['fields']['field_shared_twitter']['field'] = 'field_shared_twitter';
  $handler->display->display_options['fields']['field_shared_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['text'] = '<div class="social-group"><a href="[field_shared_twitter-value]"><img src="/sites/default/files/ms-social-share/tw.png" ></a></div>';
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_twitter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_twitter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_twitter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_twitter']['field_api_classes'] = 0;
  /* Campo: Campo: Google+ */
  $handler->display->display_options['fields']['field_shared_googleplus']['id'] = 'field_shared_googleplus';
  $handler->display->display_options['fields']['field_shared_googleplus']['table'] = 'field_data_field_shared_googleplus';
  $handler->display->display_options['fields']['field_shared_googleplus']['field'] = 'field_shared_googleplus';
  $handler->display->display_options['fields']['field_shared_googleplus']['label'] = '';
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['text'] = '<div class="social-group"><a href="[field_shared_googleplus-value]"><img src="/sites/default/files/ms-social-share/gp.png" ></a></div>';
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_googleplus']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_googleplus']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_googleplus']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_googleplus']['field_api_classes'] = 0;
  /* Campo: Contenido: MySpace */
  $handler->display->display_options['fields']['field_shared_myspace']['id'] = 'field_shared_myspace';
  $handler->display->display_options['fields']['field_shared_myspace']['table'] = 'field_data_field_shared_myspace';
  $handler->display->display_options['fields']['field_shared_myspace']['field'] = 'field_shared_myspace';
  $handler->display->display_options['fields']['field_shared_myspace']['label'] = '';
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['text'] = '<div class="social-group"><a href="[field_shared_myspace-value]"><img src="/sites/default/files/ms-social-share/my.png" ></a></div>';
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_myspace']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_myspace']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_myspace']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_myspace']['field_api_classes'] = 0;
  /* Campo: Contenido: Spotify */
  $handler->display->display_options['fields']['field_shared_spotify']['id'] = 'field_shared_spotify';
  $handler->display->display_options['fields']['field_shared_spotify']['table'] = 'field_data_field_shared_spotify';
  $handler->display->display_options['fields']['field_shared_spotify']['field'] = 'field_shared_spotify';
  $handler->display->display_options['fields']['field_shared_spotify']['label'] = '';
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['text'] = '<div class="social-group"><a href="[field_shared_spotify-value]"><img src="/sites/default/files/ms-social-share/sf.png" ></a></div>';
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_spotify']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_spotify']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_spotify']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_spotify']['field_api_classes'] = 0;
  /* Campo: Contenido: Youtube */
  $handler->display->display_options['fields']['field_shared_youtube']['id'] = 'field_shared_youtube';
  $handler->display->display_options['fields']['field_shared_youtube']['table'] = 'field_data_field_shared_youtube';
  $handler->display->display_options['fields']['field_shared_youtube']['field'] = 'field_shared_youtube';
  $handler->display->display_options['fields']['field_shared_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['text'] = '<div class="social-group"><a href="[field_shared_youtube-value]"><img src="/sites/default/files/ms-social-share/yt.png" ></a></div>';
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_youtube']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_youtube']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_youtube']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_youtube']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'grupo_artista' => 'grupo_artista',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Info (grupo)';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Miembros grupo */
  $handler = $view->new_display('block', 'Miembros grupo', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Miembros';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Componentes */
  $handler->display->display_options['fields']['field_user_member']['id'] = 'field_user_member';
  $handler->display->display_options['fields']['field_user_member']['table'] = 'field_data_field_user_member';
  $handler->display->display_options['fields']['field_user_member']['field'] = 'field_user_member';
  $handler->display->display_options['fields']['field_user_member']['label'] = '';
  $handler->display->display_options['fields']['field_user_member']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_member']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_member']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_member']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_member']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_member']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_member']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_member']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_member']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_member']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_user_member']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_member']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_member']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_member']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_member']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_member']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_member']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_member']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_user_member']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_user_member']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_user_member']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_user_member']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_user_member']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_user_member']['field_api_classes'] = 0;
  /* Campo: Contenido: Componentes que no son usuarios de MetalSevilla */
  $handler->display->display_options['fields']['field_member']['id'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['table'] = 'field_data_field_member';
  $handler->display->display_options['fields']['field_member']['field'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['label'] = '';
  $handler->display->display_options['fields']['field_member']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_member']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_member']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_member']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_member']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_member']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_member']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_member']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'grupo_artista' => 'grupo_artista',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Miembros (grupo)';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['pestanas_de_grupos'] = array(
    t('Master'),
    t('Actualidad'),
    t('ver más'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_shared_rel_group'),
    t('Actualidad grupo'),
    t('Noticias'),
    t('more'),
    t('Todo(s)'),
    t('Actualidad (grupo)'),
    t('Actualidad establecimiento'),
    t('field_shared_rel_local'),
    t('Actualidad (establecimiento)'),
    t('Discografía grupo'),
    t('Discografía'),
    t('Agenda grupo'),
    t('Agenda'),
    t('Información grupo'),
    t('Info'),
    t('Actividad'),
    t('Estilo'),
    t('Provincia'),
    t('<div class="social-group"><a href="[field_shared_facebook-value]"><img src="/sites/default/files/ms-social-share/fb.png" ></a></div>'),
    t('<div class="social-group"><a href="[field_shared_twitter-value]"><img src="/sites/default/files/ms-social-share/tw.png" ></a></div>'),
    t('<div class="social-group"><a href="[field_shared_googleplus-value]"><img src="/sites/default/files/ms-social-share/gp.png" ></a></div>'),
    t('<div class="social-group"><a href="[field_shared_myspace-value]"><img src="/sites/default/files/ms-social-share/my.png" ></a></div>'),
    t('<div class="social-group"><a href="[field_shared_spotify-value]"><img src="/sites/default/files/ms-social-share/sf.png" ></a></div>'),
    t('<div class="social-group"><a href="[field_shared_youtube-value]"><img src="/sites/default/files/ms-social-share/yt.png" ></a></div>'),
    t('Info (grupo)'),
    t('Miembros grupo'),
    t('Miembros'),
    t('Miembros (grupo)'),
  );
  $export['pestanas_de_grupos'] = $view;

  return $export;
}
