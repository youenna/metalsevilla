<?php
/**
 * @file
 * establecimientos_listado.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function establecimientos_listado_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'establecimientos_listado';
  $view->description = 'Listados y bloques de grupos y artistas';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Establecimientos_listado';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Guia Metalera';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
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
    'establecimiento' => 'establecimiento',
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
  /* Filter criterion: Contenido: Activo (field_open) */
  $handler->display->display_options['filters']['field_open_value']['id'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['table'] = 'field_data_field_open';
  $handler->display->display_options['filters']['field_open_value']['field'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_open_value']['expose']['operator_id'] = 'field_open_value_op';
  $handler->display->display_options['filters']['field_open_value']['expose']['label'] = 'Activo';
  $handler->display->display_options['filters']['field_open_value']['expose']['operator'] = 'field_open_value_op';
  $handler->display->display_options['filters']['field_open_value']['expose']['identifier'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['expose']['reduce'] = 0;

  /* Display: Listado establecimientos */
  $handler = $view->new_display('page', 'Listado establecimientos', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Guia Metalera';
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
    'establecimiento' => 'establecimiento',
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
  /* Filter criterion: Contenido: Activo (field_open) */
  $handler->display->display_options['filters']['field_open_value']['id'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['table'] = 'field_data_field_open';
  $handler->display->display_options['filters']['field_open_value']['field'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_open_value']['expose']['operator_id'] = 'field_open_value_op';
  $handler->display->display_options['filters']['field_open_value']['expose']['label'] = 'Activo';
  $handler->display->display_options['filters']['field_open_value']['expose']['operator'] = 'field_open_value_op';
  $handler->display->display_options['filters']['field_open_value']['expose']['identifier'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['expose']['reduce'] = 0;
  /* Filter criterion: Contenido: Tipo de establecimiento (field_shared_type) */
  $handler->display->display_options['filters']['field_shared_type_tid']['id'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid']['table'] = 'field_data_field_shared_type';
  $handler->display->display_options['filters']['field_shared_type_tid']['field'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_type_tid']['expose']['operator_id'] = 'field_shared_type_tid_op';
  $handler->display->display_options['filters']['field_shared_type_tid']['expose']['label'] = 'Tipo';
  $handler->display->display_options['filters']['field_shared_type_tid']['expose']['operator'] = 'field_shared_type_tid_op';
  $handler->display->display_options['filters']['field_shared_type_tid']['expose']['identifier'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_shared_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_shared_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_type_tid']['vocabulary'] = 'tipo_establecimiento';
  $handler->display->display_options['filters']['field_shared_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_shared_type_tid']['error_message'] = 0;
  $handler->display->display_options['path'] = 'guia';

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
    'establecimiento' => 'establecimiento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'guia/feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Listado tiendas */
  $handler = $view->new_display('page', 'Listado tiendas', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tiendas';
  $handler->display->display_options['exposed_block'] = TRUE;
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
  $handler->display->display_options['fields']['field_shared_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'imagen_listado',
    'image_link' => 'content',
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
    'establecimiento' => 'establecimiento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Tipo de establecimiento (field_shared_type) */
  $handler->display->display_options['filters']['field_shared_type_tid_1']['id'] = 'field_shared_type_tid_1';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['table'] = 'field_data_field_shared_type';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['field'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['value'] = array(
    79 => '79',
    82 => '82',
    80 => '80',
    83 => '83',
    81 => '81',
  );
  $handler->display->display_options['filters']['field_shared_type_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_type_tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_shared_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['vocabulary'] = 'tipo_establecimiento';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['hierarchy'] = 1;
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
  /* Filter criterion: Contenido: Activo (field_open) */
  $handler->display->display_options['filters']['field_open_value']['id'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['table'] = 'field_data_field_open';
  $handler->display->display_options['filters']['field_open_value']['field'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['group'] = 1;
  $handler->display->display_options['filters']['field_open_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_open_value']['expose']['operator_id'] = 'field_open_value_op';
  $handler->display->display_options['filters']['field_open_value']['expose']['label'] = 'Activo';
  $handler->display->display_options['filters']['field_open_value']['expose']['operator'] = 'field_open_value_op';
  $handler->display->display_options['filters']['field_open_value']['expose']['identifier'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['expose']['reduce'] = 0;
  /* Filter criterion: Contenido: Tipo de establecimiento (field_shared_type) */
  $handler->display->display_options['filters']['field_shared_type_tid']['id'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid']['table'] = 'field_data_field_shared_type';
  $handler->display->display_options['filters']['field_shared_type_tid']['field'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid']['value'] = array(
    82 => '82',
    80 => '80',
    83 => '83',
    81 => '81',
  );
  $handler->display->display_options['filters']['field_shared_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_type_tid']['expose']['operator_id'] = 'field_shared_type_tid_op';
  $handler->display->display_options['filters']['field_shared_type_tid']['expose']['label'] = 'Tipo';
  $handler->display->display_options['filters']['field_shared_type_tid']['expose']['operator'] = 'field_shared_type_tid_op';
  $handler->display->display_options['filters']['field_shared_type_tid']['expose']['identifier'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['field_shared_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_shared_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_type_tid']['vocabulary'] = 'tipo_establecimiento';
  $handler->display->display_options['filters']['field_shared_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_shared_type_tid']['error_message'] = 0;
  $handler->display->display_options['path'] = 'guia/tiendas';

  /* Display: Listado bares */
  $handler = $view->new_display('page', 'Listado bares', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bares';
  $handler->display->display_options['exposed_block'] = TRUE;
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
  $handler->display->display_options['fields']['field_shared_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'imagen_listado',
    'image_link' => 'content',
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
    'establecimiento' => 'establecimiento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Tipo de establecimiento (field_shared_type) */
  $handler->display->display_options['filters']['field_shared_type_tid_1']['id'] = 'field_shared_type_tid_1';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['table'] = 'field_data_field_shared_type';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['field'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['value'] = array(
    77 => '77',
  );
  $handler->display->display_options['filters']['field_shared_type_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_type_tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_shared_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['vocabulary'] = 'tipo_establecimiento';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['hierarchy'] = 1;
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
  /* Filter criterion: Contenido: Activo (field_open) */
  $handler->display->display_options['filters']['field_open_value']['id'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['table'] = 'field_data_field_open';
  $handler->display->display_options['filters']['field_open_value']['field'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['group'] = 1;
  $handler->display->display_options['filters']['field_open_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_open_value']['expose']['operator_id'] = 'field_open_value_op';
  $handler->display->display_options['filters']['field_open_value']['expose']['label'] = 'Activo';
  $handler->display->display_options['filters']['field_open_value']['expose']['operator'] = 'field_open_value_op';
  $handler->display->display_options['filters']['field_open_value']['expose']['identifier'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'guia/bares';

  /* Display: Listado salas */
  $handler = $view->new_display('page', 'Listado salas', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Salas';
  $handler->display->display_options['exposed_block'] = TRUE;
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
  $handler->display->display_options['fields']['field_shared_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'imagen_listado',
    'image_link' => 'content',
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
    'establecimiento' => 'establecimiento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Tipo de establecimiento (field_shared_type) */
  $handler->display->display_options['filters']['field_shared_type_tid_1']['id'] = 'field_shared_type_tid_1';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['table'] = 'field_data_field_shared_type';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['field'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['value'] = array(
    78 => '78',
  );
  $handler->display->display_options['filters']['field_shared_type_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_type_tid_1']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_shared_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['vocabulary'] = 'tipo_establecimiento';
  $handler->display->display_options['filters']['field_shared_type_tid_1']['hierarchy'] = 1;
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
  /* Filter criterion: Contenido: Activo (field_open) */
  $handler->display->display_options['filters']['field_open_value']['id'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['table'] = 'field_data_field_open';
  $handler->display->display_options['filters']['field_open_value']['field'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['group'] = 1;
  $handler->display->display_options['filters']['field_open_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_open_value']['expose']['operator_id'] = 'field_open_value_op';
  $handler->display->display_options['filters']['field_open_value']['expose']['label'] = 'Activo';
  $handler->display->display_options['filters']['field_open_value']['expose']['operator'] = 'field_open_value_op';
  $handler->display->display_options['filters']['field_open_value']['expose']['identifier'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'guia/salas';
  $translatables['establecimientos_listado'] = array(
    t('Master'),
    t('Guia Metalera'),
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
    t('Activo'),
    t('Listado establecimientos'),
    t('Tipo'),
    t('Feed'),
    t('Listado tiendas'),
    t('Tiendas'),
    t('Listado bares'),
    t('Bares'),
    t('Listado salas'),
    t('Salas'),
  );
  $export['establecimientos_listado'] = $view;

  $view = new view;
  $view->name = 'mapa_home';
  $view->description = 'Mapa ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mapa home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_location',
    'other_lon' => 'title',
    'wkt' => 'field_location',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_shared_description',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Campo: Contenido: Localización */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
  /* Campo: Contenido: Descripción */
  $handler->display->display_options['fields']['field_shared_description']['id'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['table'] = 'field_data_field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['field'] = 'field_shared_description';
  $handler->display->display_options['fields']['field_shared_description']['label'] = '';
  $handler->display->display_options['fields']['field_shared_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_shared_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['alter']['html'] = 0;
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
    'establecimiento' => 'establecimiento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Localización (field_location:lat) */
  $handler->display->display_options['filters']['field_location_lat']['id'] = 'field_location_lat';
  $handler->display->display_options['filters']['field_location_lat']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_lat']['field'] = 'field_location_lat';
  $handler->display->display_options['filters']['field_location_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_location_lat']['group'] = 1;
  /* Filter criterion: Contenido: Activo (field_open) */
  $handler->display->display_options['filters']['field_open_value']['id'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['table'] = 'field_data_field_open';
  $handler->display->display_options['filters']['field_open_value']['field'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_open_value']['group'] = 1;

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'establecimiento' => 'establecimiento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Localización (field_location:lat) */
  $handler->display->display_options['filters']['field_location_lat']['id'] = 'field_location_lat';
  $handler->display->display_options['filters']['field_location_lat']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_lat']['field'] = 'field_location_lat';
  $handler->display->display_options['filters']['field_location_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_location_lat']['group'] = 1;
  /* Filter criterion: Contenido: Activo (field_open) */
  $handler->display->display_options['filters']['field_open_value']['id'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['table'] = 'field_data_field_open';
  $handler->display->display_options['filters']['field_open_value']['field'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_open_value']['group'] = 1;

  /* Display: Bloque */
  $handler = $view->new_display('block', 'Bloque', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'local_map_home';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Mapa del home';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Bloque cabecera listado establecimientos */
  $handler = $view->new_display('block', 'Bloque cabecera listado establecimientos', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'local_map_guia';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_caching'] = '8';

  /* Display: OpenLayers DO Tiendas */
  $handler = $view->new_display('openlayers', 'OpenLayers DO Tiendas', 'openlayers_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'establecimiento' => 'establecimiento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Localización (field_location:lat) */
  $handler->display->display_options['filters']['field_location_lat']['id'] = 'field_location_lat';
  $handler->display->display_options['filters']['field_location_lat']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_lat']['field'] = 'field_location_lat';
  $handler->display->display_options['filters']['field_location_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_location_lat']['group'] = 1;
  /* Filter criterion: Contenido: Activo (field_open) */
  $handler->display->display_options['filters']['field_open_value']['id'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['table'] = 'field_data_field_open';
  $handler->display->display_options['filters']['field_open_value']['field'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_open_value']['group'] = 1;
  /* Filter criterion: Contenido: Tipo de establecimiento (field_shared_type) */
  $handler->display->display_options['filters']['field_shared_type_tid']['id'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid']['table'] = 'field_data_field_shared_type';
  $handler->display->display_options['filters']['field_shared_type_tid']['field'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid']['value'] = array(
    82 => '82',
    80 => '80',
    83 => '83',
    81 => '81',
    79 => '79',
  );
  $handler->display->display_options['filters']['field_shared_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_shared_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_type_tid']['vocabulary'] = 'tipo_establecimiento';

  /* Display: Bloque cabecera listado tiendas */
  $handler = $view->new_display('block', 'Bloque cabecera listado tiendas', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'local_map_guia_tiendas';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'establecimiento' => 'establecimiento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Localización (field_location:lat) */
  $handler->display->display_options['filters']['field_location_lat']['id'] = 'field_location_lat';
  $handler->display->display_options['filters']['field_location_lat']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_lat']['field'] = 'field_location_lat';
  $handler->display->display_options['filters']['field_location_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_location_lat']['group'] = 1;
  /* Filter criterion: Contenido: Activo (field_open) */
  $handler->display->display_options['filters']['field_open_value']['id'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['table'] = 'field_data_field_open';
  $handler->display->display_options['filters']['field_open_value']['field'] = 'field_open_value';
  $handler->display->display_options['filters']['field_open_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_open_value']['group'] = 1;
  /* Filter criterion: Contenido: Tipo de establecimiento (field_shared_type) */
  $handler->display->display_options['filters']['field_shared_type_tid']['id'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid']['table'] = 'field_data_field_shared_type';
  $handler->display->display_options['filters']['field_shared_type_tid']['field'] = 'field_shared_type_tid';
  $handler->display->display_options['filters']['field_shared_type_tid']['value'] = array(
    82 => '82',
    80 => '80',
    83 => '83',
    81 => '81',
    79 => '79',
  );
  $handler->display->display_options['filters']['field_shared_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_shared_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_type_tid']['vocabulary'] = 'tipo_establecimiento';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['mapa_home'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('OpenLayers Data Overlay'),
    t('Bloque'),
    t('Mapa del home'),
    t('Bloque cabecera listado establecimientos'),
    t('OpenLayers DO Tiendas'),
    t('Bloque cabecera listado tiendas'),
  );
  $export['mapa_home'] = $view;

  return $export;
}
