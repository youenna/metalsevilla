<?php
/**
 * @file
 * evento.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function evento_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'eventos';
  $view->description = 'Listados y bloques de entrevistas';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Eventos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Anuncios';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'ver más';
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
  /* Campo: Campo: Imagen */
  $handler->display->display_options['fields']['field_shared_image']['id'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['table'] = 'field_data_field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['field'] = 'field_shared_image';
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
  $handler->display->display_options['fields']['field_shared_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_image']['settings'] = array(
    'image_style' => 'imagen_listado',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_image']['field_api_classes'] = 0;
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
  /* Campo: Contenido: Fechas */
  $handler->display->display_options['fields']['field_shared_rep_date']['id'] = 'field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['table'] = 'field_data_field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['field'] = 'field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_shared_rep_date']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['field_api_classes'] = 0;
  /* Campo: Contenido: Precio anticipada */
  $handler->display->display_options['fields']['field_price1']['id'] = 'field_price1';
  $handler->display->display_options['fields']['field_price1']['table'] = 'field_data_field_price1';
  $handler->display->display_options['fields']['field_price1']['field'] = 'field_price1';
  $handler->display->display_options['fields']['field_price1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_price1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_price1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_price1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_price1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_price1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_price1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_price1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_price1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_price1']['field_api_classes'] = 0;
  /* Campo: Contenido: Precio en taquilla */
  $handler->display->display_options['fields']['field_price2']['id'] = 'field_price2';
  $handler->display->display_options['fields']['field_price2']['table'] = 'field_data_field_price2';
  $handler->display->display_options['fields']['field_price2']['field'] = 'field_price2';
  $handler->display->display_options['fields']['field_price2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_price2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_price2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_price2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_price2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_price2']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_price2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_price2']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_price2']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_price2']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_shared_description']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['fields']['field_shared_description']['field_api_classes'] = 0;
  /* Sort criterion: Contenido: Fechas -  start date (field_shared_rep_date) */
  $handler->display->display_options['sorts']['field_shared_rep_date_value']['id'] = 'field_shared_rep_date_value';
  $handler->display->display_options['sorts']['field_shared_rep_date_value']['table'] = 'field_data_field_shared_rep_date';
  $handler->display->display_options['sorts']['field_shared_rep_date_value']['field'] = 'field_shared_rep_date_value';
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
  /* Filter criterion: Contenido: Fechas -  start date (field_shared_rep_date) */
  $handler->display->display_options['filters']['field_shared_rep_date_value']['id'] = 'field_shared_rep_date_value';
  $handler->display->display_options['filters']['field_shared_rep_date_value']['table'] = 'field_data_field_shared_rep_date';
  $handler->display->display_options['filters']['field_shared_rep_date_value']['field'] = 'field_shared_rep_date_value';
  $handler->display->display_options['filters']['field_shared_rep_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_shared_rep_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_shared_rep_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Eventos';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['path'] = 'actualidad/eventos';

  /* Display: Bloque */
  $handler = $view->new_display('block', 'Bloque', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Campo: Imagen */
  $handler->display->display_options['fields']['field_shared_image']['id'] = 'field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['table'] = 'field_data_field_shared_image';
  $handler->display->display_options['fields']['field_shared_image']['field'] = 'field_shared_image';
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
  $handler->display->display_options['fields']['field_shared_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_image']['type'] = 'lightbox2__lightshow__image_250h__original';
  $handler->display->display_options['fields']['field_shared_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_shared_image']['field_api_classes'] = 0;
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
  /* Campo: Contenido: Fechas */
  $handler->display->display_options['fields']['field_shared_rep_date']['id'] = 'field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['table'] = 'field_data_field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['field'] = 'field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['label'] = '';
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_shared_rep_date']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['field_api_classes'] = 0;
  /* Campo: Contenido: Precio anticipada */
  $handler->display->display_options['fields']['field_price1']['id'] = 'field_price1';
  $handler->display->display_options['fields']['field_price1']['table'] = 'field_data_field_price1';
  $handler->display->display_options['fields']['field_price1']['field'] = 'field_price1';
  $handler->display->display_options['fields']['field_price1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_price1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_price1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_price1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_price1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_price1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_price1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_price1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_price1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_price1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_price1']['field_api_classes'] = 0;
  /* Campo: Campo: Provincia */
  $handler->display->display_options['fields']['field_shared_state']['id'] = 'field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['table'] = 'field_data_field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['field'] = 'field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['label'] = '';
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
  $handler->display->display_options['fields']['field_shared_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_state']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_state']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_shared_state']['field_api_classes'] = 0;
  /* Campo: Contenido: Precio en taquilla */
  $handler->display->display_options['fields']['field_price2']['id'] = 'field_price2';
  $handler->display->display_options['fields']['field_price2']['table'] = 'field_data_field_price2';
  $handler->display->display_options['fields']['field_price2']['field'] = 'field_price2';
  $handler->display->display_options['fields']['field_price2']['label'] = '';
  $handler->display->display_options['fields']['field_price2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_price2']['alter']['text'] = '[field_price1] / [field_price2]';
  $handler->display->display_options['fields']['field_price2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_price2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_price2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_price2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_price2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_price2']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_price2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_price2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_price2']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_price2']['field_api_classes'] = 0;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="guionnoticias"></span>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenido: Fechas -  start date (field_shared_rep_date) */
  $handler->display->display_options['sorts']['field_shared_rep_date_value']['id'] = 'field_shared_rep_date_value';
  $handler->display->display_options['sorts']['field_shared_rep_date_value']['table'] = 'field_data_field_shared_rep_date';
  $handler->display->display_options['sorts']['field_shared_rep_date_value']['field'] = 'field_shared_rep_date_value';
  $handler->display->display_options['block_description'] = 'Agenda (home)';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Histórico de Eventos';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenido: Fechas -  start date (field_shared_rep_date) */
  $handler->display->display_options['sorts']['field_shared_rep_date_value']['id'] = 'field_shared_rep_date_value';
  $handler->display->display_options['sorts']['field_shared_rep_date_value']['table'] = 'field_data_field_shared_rep_date';
  $handler->display->display_options['sorts']['field_shared_rep_date_value']['field'] = 'field_shared_rep_date_value';
  $handler->display->display_options['sorts']['field_shared_rep_date_value']['order'] = 'DESC';
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
  /* Filter criterion: Contenido: Fechas -  start date (field_shared_rep_date) */
  $handler->display->display_options['filters']['field_shared_rep_date_value']['id'] = 'field_shared_rep_date_value';
  $handler->display->display_options['filters']['field_shared_rep_date_value']['table'] = 'field_data_field_shared_rep_date';
  $handler->display->display_options['filters']['field_shared_rep_date_value']['field'] = 'field_shared_rep_date_value';
  $handler->display->display_options['filters']['field_shared_rep_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_shared_rep_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_rep_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_shared_rep_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'actualidad/eventos/historico';
  $translatables['eventos'] = array(
    t('Master'),
    t('Anuncios'),
    t('ver más'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Fechas'),
    t('Precio anticipada'),
    t('Precio en taquilla'),
    t('Page'),
    t('Eventos'),
    t('more'),
    t('Bloque'),
    t('[field_price1] / [field_price2]'),
    t('<span class="guionnoticias"></span>'),
    t('Agenda (home)'),
    t('Histórico de Eventos'),
  );
  $export['eventos'] = $view;

  return $export;
}
