<?php
/**
 * @file
 * cronica.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cronica_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'cronicas_de_conciertos';
  $view->description = 'Listados y bloques de crónicas de conciertos';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Crónicas de conciertos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Anuncios';
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
  /* Campo: Campo: Fotos */
  $handler->display->display_options['fields']['field_shared_rep_image']['id'] = 'field_shared_rep_image';
  $handler->display->display_options['fields']['field_shared_rep_image']['table'] = 'field_data_field_shared_rep_image';
  $handler->display->display_options['fields']['field_shared_rep_image']['field'] = 'field_shared_rep_image';
  $handler->display->display_options['fields']['field_shared_rep_image']['label'] = '';
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_rep_image']['settings'] = array(
    'image_style' => 'img_logo_220',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_rep_image']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_rep_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_shared_rep_image']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cronica' => 'cronica',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Título';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Crónicas de conciertos';
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Título';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Contenido: Grupos relacionados (field_shared_rel_group) */
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['id'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['table'] = 'field_data_field_shared_rel_group';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['field'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['operator_id'] = 'field_shared_rel_group_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['label'] = 'Grupo relacionado';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['operator'] = 'field_shared_rel_group_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['identifier'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['reduce'] = 0;
  /* Filter criterion: Contenido: Valoración (field_shared_score2) */
  $handler->display->display_options['filters']['field_shared_score2_value']['id'] = 'field_shared_score2_value';
  $handler->display->display_options['filters']['field_shared_score2_value']['table'] = 'field_data_field_shared_score2';
  $handler->display->display_options['filters']['field_shared_score2_value']['field'] = 'field_shared_score2_value';
  $handler->display->display_options['filters']['field_shared_score2_value']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_score2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_score2_value']['expose']['operator_id'] = 'field_shared_score2_value_op';
  $handler->display->display_options['filters']['field_shared_score2_value']['expose']['label'] = 'Valoración';
  $handler->display->display_options['filters']['field_shared_score2_value']['expose']['operator'] = 'field_shared_score2_value_op';
  $handler->display->display_options['filters']['field_shared_score2_value']['expose']['identifier'] = 'field_shared_score2_value';
  $handler->display->display_options['filters']['field_shared_score2_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_shared_style_tid']['error_message'] = 0;
  /* Filter criterion: Contenido: Establecimiento relacionado (field_shared_rel_local) */
  $handler->display->display_options['filters']['field_shared_rel_local_nid']['id'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['filters']['field_shared_rel_local_nid']['table'] = 'field_data_field_shared_rel_local';
  $handler->display->display_options['filters']['field_shared_rel_local_nid']['field'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['filters']['field_shared_rel_local_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_rel_local_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_rel_local_nid']['expose']['operator_id'] = 'field_shared_rel_local_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_local_nid']['expose']['label'] = 'Establecimiento relacionado';
  $handler->display->display_options['filters']['field_shared_rel_local_nid']['expose']['operator'] = 'field_shared_rel_local_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_local_nid']['expose']['identifier'] = 'field_shared_rel_local_nid';
  $handler->display->display_options['filters']['field_shared_rel_local_nid']['expose']['reduce'] = 0;
  /* Filter criterion: Contenido: Evento relacionado (field_shared_rel_event) */
  $handler->display->display_options['filters']['field_shared_rel_event_nid']['id'] = 'field_shared_rel_event_nid';
  $handler->display->display_options['filters']['field_shared_rel_event_nid']['table'] = 'field_data_field_shared_rel_event';
  $handler->display->display_options['filters']['field_shared_rel_event_nid']['field'] = 'field_shared_rel_event_nid';
  $handler->display->display_options['filters']['field_shared_rel_event_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_rel_event_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_rel_event_nid']['expose']['operator_id'] = 'field_shared_rel_event_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_event_nid']['expose']['label'] = 'Evento relacionado';
  $handler->display->display_options['filters']['field_shared_rel_event_nid']['expose']['operator'] = 'field_shared_rel_event_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_event_nid']['expose']['identifier'] = 'field_shared_rel_event_nid';
  $handler->display->display_options['filters']['field_shared_rel_event_nid']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'actualidad/cronicas';

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
    'cronica' => 'cronica',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'actualidad/cronicas/feed';
  $translatables['cronicas_de_conciertos'] = array(
    t('Master'),
    t('Anuncios'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<span class="guionnoticias"></span>'),
    t('Título'),
    t('Page'),
    t('Crónicas de conciertos'),
    t('Grupo relacionado'),
    t('Valoración'),
    t('Estilo'),
    t('Establecimiento relacionado'),
    t('Evento relacionado'),
    t('Feed'),
  );
  $export['cronicas_de_conciertos'] = $view;

  return $export;
}
