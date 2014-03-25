<?php
/**
 * @file
 * agenda.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agenda_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'agenda';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Agenda';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
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
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
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
    'format_type' => '24horas',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_shared_rep_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_shared_style_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_shared_style_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_shared_style_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_style_tid']['vocabulary'] = 'estilo';
  $handler->display->display_options['filters']['field_shared_style_tid']['error_message'] = 0;
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
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_shared_state_tid']['error_message'] = 0;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_shared_rep_date.field_shared_rep_date_value' => 'field_data_field_shared_rep_date.field_shared_rep_date_value',
  );
  $handler->display->display_options['path'] = 'agenda';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_shared_rep_date.field_shared_rep_date_value' => 'field_data_field_shared_rep_date.field_shared_rep_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-shared-rep-date/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_shared_rep_date.field_shared_rep_date_value' => 'field_data_field_shared_rep_date.field_shared_rep_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-shared-rep-date/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
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
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_shared_rep_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_date']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_shared_rep_date.field_shared_rep_date_value' => 'field_data_field_shared_rep_date.field_shared_rep_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-shared-rep-date/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_shared_rep_date.field_shared_rep_date_value' => 'field_data_field_shared_rep_date.field_shared_rep_date_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Fecha: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_shared_rep_date.field_shared_rep_date_value' => 'field_data_field_shared_rep_date.field_shared_rep_date_value',
  );
  $translatables['agenda'] = array(
    t('Master'),
    t('Agenda'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Estilo'),
    t('Grupo relacionado'),
    t('Provincia'),
    t('Month'),
    t('Todo(s)'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block'),
    t('Upcoming'),
    t('Upcoming events block'),
  );
  $export['agenda'] = $view;

  return $export;
}
