<?php
/**
 * @file
 * lanzamiento_disco.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lanzamiento_disco_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'fotos';
  $view->description = 'Listados y bloques de lanzamientos de discos';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lanzamientos de discos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  /* Campo: Contenido: Portada */
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
  /* Sort criterion: Contenido: Fecha -  start date (field_shared_date) */
  $handler->display->display_options['sorts']['field_shared_date_value']['id'] = 'field_shared_date_value';
  $handler->display->display_options['sorts']['field_shared_date_value']['table'] = 'field_data_field_shared_date';
  $handler->display->display_options['sorts']['field_shared_date_value']['field'] = 'field_shared_date_value';
  $handler->display->display_options['sorts']['field_shared_date_value']['order'] = 'DESC';
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
    'lanzamiento_disco' => 'lanzamiento_disco',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: listado lanzamientos de discos */
  $handler = $view->new_display('page', 'listado lanzamientos de discos', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lanzamientos';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'lanzamiento_disco' => 'lanzamiento_disco',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
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
  /* Filter criterion: Contenido: Grupos relacionados (field_shared_rel_group) */
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['id'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['table'] = 'field_data_field_shared_rel_group';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['field'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['operator_id'] = 'field_shared_rel_group_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['label'] = 'Grupo relacionado';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['operator'] = 'field_shared_rel_group_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['identifier'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'actualidad/discos/lanzamientos';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'actualidad/discos/lanzamientos/feed';
  $translatables['fotos'] = array(
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
    t('listado lanzamientos de discos'),
    t('Lanzamientos'),
    t('Título'),
    t('Estilo'),
    t('Grupo relacionado'),
    t('Feed'),
  );
  $export['fotos'] = $view;

  return $export;
}
