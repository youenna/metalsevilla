<?php
/**
 * @file
 * banner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function banner_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'banners_right';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Banners-right';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['field_shared_description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_description']['alter']['trim'] = 0;
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
    'banner' => 'banner',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Tamaño (field_banner_size) */
  $handler->display->display_options['filters']['field_banner_size_value']['id'] = 'field_banner_size_value';
  $handler->display->display_options['filters']['field_banner_size_value']['table'] = 'field_data_field_banner_size';
  $handler->display->display_options['filters']['field_banner_size_value']['field'] = 'field_banner_size_value';
  $handler->display->display_options['filters']['field_banner_size_value']['value'] = array(
    '2 ' => '2 ',
  );
  $handler->display->display_options['filters']['field_banner_size_value']['group'] = 1;
  /* Filter criterion: Contenido: Peso (field_banner_weight) */
  $handler->display->display_options['filters']['field_banner_weight_value']['id'] = 'field_banner_weight_value';
  $handler->display->display_options['filters']['field_banner_weight_value']['table'] = 'field_data_field_banner_weight';
  $handler->display->display_options['filters']['field_banner_weight_value']['field'] = 'field_banner_weight_value';
  $handler->display->display_options['filters']['field_banner_weight_value']['value'] = array(
    '0 ' => '0 ',
  );
  $handler->display->display_options['filters']['field_banner_weight_value']['group'] = 1;
  /* Filter criterion: Contenido: Publicación -  start date (field_public_dates) */
  $handler->display->display_options['filters']['field_public_dates_value']['id'] = 'field_public_dates_value';
  $handler->display->display_options['filters']['field_public_dates_value']['table'] = 'field_data_field_public_dates';
  $handler->display->display_options['filters']['field_public_dates_value']['field'] = 'field_public_dates_value';
  $handler->display->display_options['filters']['field_public_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_public_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_public_dates_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_public_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_public_dates_value']['default_date'] = 'now';
  /* Filter criterion: Contenido: Publicación - end date (field_public_dates:value2) */
  $handler->display->display_options['filters']['field_public_dates_value2']['id'] = 'field_public_dates_value2';
  $handler->display->display_options['filters']['field_public_dates_value2']['table'] = 'field_data_field_public_dates';
  $handler->display->display_options['filters']['field_public_dates_value2']['field'] = 'field_public_dates_value2';
  $handler->display->display_options['filters']['field_public_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_public_dates_value2']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_public_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_public_dates_value2']['default_date'] = 'now';

  /* Display: Banner right 1 */
  $handler = $view->new_display('block', 'Banner right 1', 'block');
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
    'banner' => 'banner',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Tamaño (field_banner_size) */
  $handler->display->display_options['filters']['field_banner_size_value']['id'] = 'field_banner_size_value';
  $handler->display->display_options['filters']['field_banner_size_value']['table'] = 'field_data_field_banner_size';
  $handler->display->display_options['filters']['field_banner_size_value']['field'] = 'field_banner_size_value';
  $handler->display->display_options['filters']['field_banner_size_value']['value'] = array(
    '0 ' => '0 ',
    '1 ' => '1 ',
  );
  $handler->display->display_options['filters']['field_banner_size_value']['group'] = 1;
  /* Filter criterion: Contenido: Peso (field_banner_weight) */
  $handler->display->display_options['filters']['field_banner_weight_value']['id'] = 'field_banner_weight_value';
  $handler->display->display_options['filters']['field_banner_weight_value']['table'] = 'field_data_field_banner_weight';
  $handler->display->display_options['filters']['field_banner_weight_value']['field'] = 'field_banner_weight_value';
  $handler->display->display_options['filters']['field_banner_weight_value']['value'] = array(
    '0 ' => '0 ',
  );
  $handler->display->display_options['filters']['field_banner_weight_value']['group'] = 1;
  /* Filter criterion: Contenido: Publicación -  start date (field_public_dates) */
  $handler->display->display_options['filters']['field_public_dates_value']['id'] = 'field_public_dates_value';
  $handler->display->display_options['filters']['field_public_dates_value']['table'] = 'field_data_field_public_dates';
  $handler->display->display_options['filters']['field_public_dates_value']['field'] = 'field_public_dates_value';
  $handler->display->display_options['filters']['field_public_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_public_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_public_dates_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_public_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_public_dates_value']['default_date'] = 'now';
  /* Filter criterion: Contenido: Publicación - end date (field_public_dates:value2) */
  $handler->display->display_options['filters']['field_public_dates_value2']['id'] = 'field_public_dates_value2';
  $handler->display->display_options['filters']['field_public_dates_value2']['table'] = 'field_data_field_public_dates';
  $handler->display->display_options['filters']['field_public_dates_value2']['field'] = 'field_public_dates_value2';
  $handler->display->display_options['filters']['field_public_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_public_dates_value2']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_public_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_public_dates_value2']['default_date'] = 'now';

  /* Display: Banner top 720x90 */
  $handler = $view->new_display('block', 'Banner top 720x90', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Banner right 2 */
  $handler = $view->new_display('block', 'Banner right 2', 'block_2');
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
    'banner' => 'banner',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Tamaño (field_banner_size) */
  $handler->display->display_options['filters']['field_banner_size_value']['id'] = 'field_banner_size_value';
  $handler->display->display_options['filters']['field_banner_size_value']['table'] = 'field_data_field_banner_size';
  $handler->display->display_options['filters']['field_banner_size_value']['field'] = 'field_banner_size_value';
  $handler->display->display_options['filters']['field_banner_size_value']['value'] = array(
    '0 ' => '0 ',
    '1 ' => '1 ',
  );
  $handler->display->display_options['filters']['field_banner_size_value']['group'] = 1;
  /* Filter criterion: Contenido: Peso (field_banner_weight) */
  $handler->display->display_options['filters']['field_banner_weight_value']['id'] = 'field_banner_weight_value';
  $handler->display->display_options['filters']['field_banner_weight_value']['table'] = 'field_data_field_banner_weight';
  $handler->display->display_options['filters']['field_banner_weight_value']['field'] = 'field_banner_weight_value';
  $handler->display->display_options['filters']['field_banner_weight_value']['value'] = array(
    '1 ' => '1 ',
  );
  $handler->display->display_options['filters']['field_banner_weight_value']['group'] = 1;
  /* Filter criterion: Contenido: Publicación -  start date (field_public_dates) */
  $handler->display->display_options['filters']['field_public_dates_value']['id'] = 'field_public_dates_value';
  $handler->display->display_options['filters']['field_public_dates_value']['table'] = 'field_data_field_public_dates';
  $handler->display->display_options['filters']['field_public_dates_value']['field'] = 'field_public_dates_value';
  $handler->display->display_options['filters']['field_public_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_public_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_public_dates_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_public_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_public_dates_value']['default_date'] = 'now';
  /* Filter criterion: Contenido: Publicación - end date (field_public_dates:value2) */
  $handler->display->display_options['filters']['field_public_dates_value2']['id'] = 'field_public_dates_value2';
  $handler->display->display_options['filters']['field_public_dates_value2']['table'] = 'field_data_field_public_dates';
  $handler->display->display_options['filters']['field_public_dates_value2']['field'] = 'field_public_dates_value2';
  $handler->display->display_options['filters']['field_public_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_public_dates_value2']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_public_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_public_dates_value2']['default_date'] = 'now';
  $translatables['banners_right'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Banner right 1'),
    t('Banner top 720x90'),
    t('Banner right 2'),
  );
  $export['banners_right'] = $view;

  return $export;
}
