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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
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
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [service_links] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
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
  /* Campo: Contenido: Fechas */
  $handler->display->display_options['fields']['field_shared_rep_date']['id'] = 'field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['table'] = 'field_data_field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['field'] = 'field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['label'] = '';
  $handler->display->display_options['fields']['field_shared_rep_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_shared_rep_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_date']['settings'] = array(
    'format_type' => '24horas',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_shared_rep_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_offset'] = '0';
  /* Campo: Contenido: Precio anticipada */
  $handler->display->display_options['fields']['field_price1']['id'] = 'field_price1';
  $handler->display->display_options['fields']['field_price1']['table'] = 'field_data_field_price1';
  $handler->display->display_options['fields']['field_price1']['field'] = 'field_price1';
  $handler->display->display_options['fields']['field_price1']['label'] = '';
  $handler->display->display_options['fields']['field_price1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Precio en taquilla */
  $handler->display->display_options['fields']['field_price2']['id'] = 'field_price2';
  $handler->display->display_options['fields']['field_price2']['table'] = 'field_data_field_price2';
  $handler->display->display_options['fields']['field_price2']['field'] = 'field_price2';
  $handler->display->display_options['fields']['field_price2']['label'] = '';
  $handler->display->display_options['fields']['field_price2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_price2']['alter']['text'] = 'Hora: [field_shared_rep_date], Precio: [field_price1] / [field_price2] ';
  $handler->display->display_options['fields']['field_price2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price2']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Campo: Provincia */
  $handler->display->display_options['fields']['field_shared_state']['id'] = 'field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['table'] = 'field_data_field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['field'] = 'field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['label'] = '';
  $handler->display->display_options['fields']['field_shared_state']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shared_state']['alter']['text'] = 'Provincia: [field_shared_state] ';
  $handler->display->display_options['fields']['field_shared_state']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Service links */
  $handler->display->display_options['fields']['service_links']['id'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['table'] = 'node';
  $handler->display->display_options['fields']['service_links']['field'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['label'] = '';
  $handler->display->display_options['fields']['service_links']['element_label_colon'] = FALSE;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="guionnoticias"></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['field_shared_style_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_shared_style_tid']['vocabulary'] = 'estilo';
  $handler->display->display_options['filters']['field_shared_style_tid']['error_message'] = FALSE;
  /* Filter criterion: Contenido: Grupos relacionados (field_shared_rel_group) */
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['id'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['table'] = 'field_data_field_shared_rel_group';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['field'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['operator_id'] = 'field_shared_rel_group_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['label'] = 'Grupo';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['operator'] = 'field_shared_rel_group_nid_op';
  $handler->display->display_options['filters']['field_shared_rel_group_nid']['expose']['identifier'] = 'field_shared_rel_group_nid';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_shared_rep_date.field_shared_rep_date_value' => 'field_data_field_shared_rep_date.field_shared_rep_date_value',
  );
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => 'Agenda con todos los conciertos y festivales de heavy metal y rock | www.metalsevilla.com',
    ),
    'description' => array(
      'value' => '¿Buscas un concierto? En nuestra agenda los encontrarás todos. ¿Falta tu grupo? ¡Regístrate en un minuto como usuario y publica todos los conciertos que des!',
    ),
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
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
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
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Campo: Contenido: Fechas */
  $handler->display->display_options['fields']['field_shared_rep_date']['id'] = 'field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['table'] = 'field_data_field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['field'] = 'field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['label'] = '';
  $handler->display->display_options['fields']['field_shared_rep_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_shared_rep_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
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
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    t('Filtrar'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('author'),
    t('[title] [service_links] '),
    t('<div class="list-submitted">ENVIADO POR [name] EL [created]</div>'),
    t('Hora: [field_shared_rep_date], Precio: [field_price1] / [field_price2] '),
    t('Provincia: [field_shared_state] '),
    t('<span class="guionnoticias"></span>'),
    t('Estilo'),
    t('Grupo'),
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
