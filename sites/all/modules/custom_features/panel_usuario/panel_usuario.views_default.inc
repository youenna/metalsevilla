<?php
/**
 * @file
 * panel_usuario.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function panel_usuario_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bloques_de_perfil_de_usuario';
  $view->description = 'Bloques de agenda de usuario';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bloques de agenda de usuario';
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
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar';
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
    'lanzamiento_disco' => 'lanzamiento_disco',
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Agenda perfil de usuario */
  $handler = $view->new_display('block', 'Agenda perfil de usuario', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
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
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'banner' => '#ffffff',
    'critica_disco' => '#ffffff',
    'cronica' => '#ffffff',
    'disco' => '#ffffff',
    'entrevista' => '#ffffff',
    'establecimiento' => '#ffffff',
    'evento' => '#ffffff',
    'faq' => '#ffffff',
    'foto' => '#ffffff',
    'grupo_artista' => '#ffffff',
    'lanzamiento_disco' => '#ffffff',
    'noticia' => '#ffffff',
    'page' => '#ffffff',
    'video' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No hay resultados';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Signup: Usuario */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'signup_log';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Relationship: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="submitted">ENVIADO POR [name] EN [created]</div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid_1';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Agenda de %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  /* Contextual filter: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_shared_rep_date.field_shared_rep_date_value' => 'field_data_field_shared_rep_date.field_shared_rep_date_value',
  );
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
    'evento' => 'evento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Perfil: Privacidad (field_privacidad) */
  $handler->display->display_options['filters']['field_privacidad_value']['id'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['table'] = 'field_data_field_privacidad';
  $handler->display->display_options['filters']['field_privacidad_value']['field'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_privacidad_value']['value'] = array(
    '0 ' => '0 ',
  );
  $handler->display->display_options['block_description'] = 'Agenda perfil de usuario ';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Agenda perfil de usuario */
  $handler = $view->new_display('block', 'Agenda perfil de usuario', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
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
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'banner' => '#ffffff',
    'critica_disco' => '#ffffff',
    'cronica' => '#ffffff',
    'disco' => '#ffffff',
    'entrevista' => '#ffffff',
    'establecimiento' => '#ffffff',
    'evento' => '#ffffff',
    'faq' => '#ffffff',
    'foto' => '#ffffff',
    'grupo_artista' => '#ffffff',
    'lanzamiento_disco' => '#ffffff',
    'noticia' => '#ffffff',
    'page' => '#ffffff',
    'video' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Signup: Usuario */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'signup_log';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="submitted">ENVIADO POR [name] EN [created]</div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Campo: Contenido: Fechas */
  $handler->display->display_options['fields']['field_shared_rep_date']['id'] = 'field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['table'] = 'field_data_field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['field'] = 'field_shared_rep_date';
  $handler->display->display_options['fields']['field_shared_rep_date']['label'] = '';
  $handler->display->display_options['fields']['field_shared_rep_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_shared_rep_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_rep_date']['settings'] = array(
    'format_type' => '24horas',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid_1';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Mi agenda';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  /* Contextual filter: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_shared_rep_date.field_shared_rep_date_value' => 'field_data_field_shared_rep_date.field_shared_rep_date_value',
  );
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
    'evento' => 'evento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Agenda perfil de usuario (mi contenido) ';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Agenda perfil de usuario */
  $handler = $view->new_display('block', 'Agenda perfil de usuario', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
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
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'banner' => '#ffffff',
    'critica_disco' => '#ffffff',
    'cronica' => '#ffffff',
    'disco' => '#ffffff',
    'entrevista' => '#ffffff',
    'establecimiento' => '#ffffff',
    'evento' => '#ffffff',
    'faq' => '#ffffff',
    'foto' => '#ffffff',
    'grupo_artista' => '#ffffff',
    'lanzamiento_disco' => '#ffffff',
    'noticia' => '#ffffff',
    'page' => '#ffffff',
    'video' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Signup: Usuario */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'signup_log';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Relationship: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="submitted">ENVIADO POR [name] EN [created]</div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid_1';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Agenda de %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  /* Contextual filter: Fecha: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_shared_rep_date.field_shared_rep_date_value' => 'field_data_field_shared_rep_date.field_shared_rep_date_value',
  );
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
    'evento' => 'evento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Perfil: Privacidad (field_privacidad) */
  $handler->display->display_options['filters']['field_privacidad_value']['id'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['table'] = 'field_data_field_privacidad';
  $handler->display->display_options['filters']['field_privacidad_value']['field'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_privacidad_value']['value'] = array(
    '1 ' => '1 ',
  );
  $handler->display->display_options['block_description'] = 'Agenda perfil de usuario (registrados)';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['bloques_de_perfil_de_usuario'] = array(
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
    t('Agenda perfil de usuario'),
    t('Agenda'),
    t('more'),
    t('No hay resultados'),
    t('author'),
    t('Signup user'),
    t('Perfil'),
    t('<div class="submitted">ENVIADO POR [name] EN [created]</div>'),
    t('Provincia: [field_shared_state] '),
    t('<span class="guionnoticias"></span>'),
    t('Todo(s)'),
    t('Agenda de %1'),
    t('Agenda perfil de usuario '),
    t('Hora: [field_shared_rep_date], Precio: [field_price1] / [field_price2] '),
    t('Mi agenda'),
    t('Agenda perfil de usuario (mi contenido) '),
    t('Agenda perfil de usuario (registrados)'),
  );
  $export['bloques_de_perfil_de_usuario'] = $view;

  $view = new view();
  $view->name = 'gestion_de_contenido';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gestion de contenido';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gestion de mi contenido';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '5';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'created' => 'created',
    'status' => 'status',
    'totalcount' => 'totalcount',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'totalcount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenido: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Contenido publicado por %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
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
    'disco' => 'disco',
    'entrevista' => 'entrevista',
    'establecimiento' => 'establecimiento',
    'evento' => 'evento',
    'grupo_artista' => 'grupo_artista',
    'noticia' => 'noticia',
  );
  /* Filter criterion: Perfil: Privacidad (field_privacidad) */
  $handler->display->display_options['filters']['field_privacidad_value']['id'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['table'] = 'field_data_field_privacidad';
  $handler->display->display_options['filters']['field_privacidad_value']['field'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_privacidad_value']['value'] = array(
    '0 ' => '0 ',
  );

  /* Display: Gestion de mi contenido */
  $handler = $view->new_display('block', 'Gestion de mi contenido', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Tipo */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Campo: Contenido: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Fecha de envío';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Campo: Contenido: Publicado */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'Visitas';
  /* Campo: Contenido: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operaciones';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = 'Editar';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Mi contenido creado';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['block_description'] = 'Mi contenido publicado';

  /* Display: Contenido */
  $handler = $view->new_display('block', 'Contenido', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contenido';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Tipo */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Campo: Contenido: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Fecha de envío';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Campo: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'Visitas';
  $handler->display->display_options['block_description'] = 'Contenido publicado';

  /* Display: Contenido */
  $handler = $view->new_display('block', 'Contenido', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contenido';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Tipo */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Campo: Contenido: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Fecha de envío';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Campo: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'Visitas';
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
    'disco' => 'disco',
    'entrevista' => 'entrevista',
    'establecimiento' => 'establecimiento',
    'evento' => 'evento',
    'grupo_artista' => 'grupo_artista',
    'noticia' => 'noticia',
  );
  /* Filter criterion: Perfil: Privacidad (field_privacidad) */
  $handler->display->display_options['filters']['field_privacidad_value']['id'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['table'] = 'field_data_field_privacidad';
  $handler->display->display_options['filters']['field_privacidad_value']['field'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_privacidad_value']['value'] = array(
    '1 ' => '1 ',
  );
  $handler->display->display_options['block_description'] = 'Contenido publicado (registrados)';
  $translatables['gestion_de_contenido'] = array(
    t('Master'),
    t('Gestion de mi contenido'),
    t('more'),
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
    t('author'),
    t('Perfil'),
    t('Todo(s)'),
    t('Contenido publicado por %1'),
    t('Título'),
    t('Tipo'),
    t('Fecha de envío'),
    t('Publicado'),
    t('Visitas'),
    t('.'),
    t(','),
    t('Operaciones'),
    t('Editar'),
    t('Mi contenido creado'),
    t('Mi contenido publicado'),
    t('Contenido'),
    t('Contenido publicado'),
    t('Contenido publicado (registrados)'),
  );
  $export['gestion_de_contenido'] = $view;

  $view = new view();
  $view->name = 'perfiles_de_usuario';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Perfiles de usuario';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Información';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Perfil: Usuario uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'musico' => 'musico',
  );
  /* Campo: Perfil: Apellidos */
  $handler->display->display_options['fields']['field_user_surname']['id'] = 'field_user_surname';
  $handler->display->display_options['fields']['field_user_surname']['table'] = 'field_data_field_user_surname';
  $handler->display->display_options['fields']['field_user_surname']['field'] = 'field_user_surname';
  $handler->display->display_options['fields']['field_user_surname']['label'] = '';
  $handler->display->display_options['fields']['field_user_surname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_surname']['element_label_colon'] = FALSE;
  /* Campo: Perfil: Nombre */
  $handler->display->display_options['fields']['field_user_name']['id'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name']['table'] = 'field_data_field_user_name';
  $handler->display->display_options['fields']['field_user_name']['field'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_name']['alter']['text'] = '<strong>Nombre: </strong>[field_user_name] [field_user_surname]';
  $handler->display->display_options['fields']['field_user_name']['element_label_colon'] = FALSE;
  /* Campo: Campo: Provincia */
  $handler->display->display_options['fields']['field_shared_state']['id'] = 'field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['table'] = 'field_data_field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['field'] = 'field_shared_state';
  $handler->display->display_options['fields']['field_shared_state']['label'] = '';
  $handler->display->display_options['fields']['field_shared_state']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shared_state']['alter']['text'] = '<strong>Provincia: [field_shared_state]</strong>';
  $handler->display->display_options['fields']['field_shared_state']['element_label_colon'] = FALSE;
  /* Campo: Campo: Facebook */
  $handler->display->display_options['fields']['field_shared_facebook']['id'] = 'field_shared_facebook';
  $handler->display->display_options['fields']['field_shared_facebook']['table'] = 'field_data_field_shared_facebook';
  $handler->display->display_options['fields']['field_shared_facebook']['field'] = 'field_shared_facebook';
  $handler->display->display_options['fields']['field_shared_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shared_facebook']['alter']['text'] = '<div class="social-group"><a href="[field_shared_facebook-value]"><img src="/sites/default/files/ms-social-share/fb.png" ></a></div>';
  $handler->display->display_options['fields']['field_shared_facebook']['element_label_colon'] = FALSE;
  /* Campo: Campo: Twitter */
  $handler->display->display_options['fields']['field_shared_twitter']['id'] = 'field_shared_twitter';
  $handler->display->display_options['fields']['field_shared_twitter']['table'] = 'field_data_field_shared_twitter';
  $handler->display->display_options['fields']['field_shared_twitter']['field'] = 'field_shared_twitter';
  $handler->display->display_options['fields']['field_shared_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shared_twitter']['alter']['text'] = '<div class="social-group"><a href="[field_shared_twitter-value]"><img src="/sites/default/files/ms-social-share/tw.png" ></a></div>';
  $handler->display->display_options['fields']['field_shared_twitter']['element_label_colon'] = FALSE;
  /* Campo: Campo: Google+ */
  $handler->display->display_options['fields']['field_shared_googleplus']['id'] = 'field_shared_googleplus';
  $handler->display->display_options['fields']['field_shared_googleplus']['table'] = 'field_data_field_shared_googleplus';
  $handler->display->display_options['fields']['field_shared_googleplus']['field'] = 'field_shared_googleplus';
  $handler->display->display_options['fields']['field_shared_googleplus']['label'] = '';
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shared_googleplus']['alter']['text'] = '<div class="social-group"><a href="[field_shared_googleplus-value]"><img src="/sites/default/files/ms-social-share/gp.png" ></a></div>';
  $handler->display->display_options['fields']['field_shared_googleplus']['element_label_colon'] = FALSE;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Perfil: Grupos */
  $handler->display->display_options['fields']['field_musician_activity']['id'] = 'field_musician_activity';
  $handler->display->display_options['fields']['field_musician_activity']['table'] = 'field_data_field_musician_activity';
  $handler->display->display_options['fields']['field_musician_activity']['field'] = 'field_musician_activity';
  $handler->display->display_options['fields']['field_musician_activity']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_musician_activity']['label'] = '';
  $handler->display->display_options['fields']['field_musician_activity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_musician_activity']['alter']['text'] = '<h2>Músico en:</h2>
[field_musician_activity]';
  $handler->display->display_options['fields']['field_musician_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_musician_activity']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_musician_activity']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_musician_activity']['delta_offset'] = '0';
  /* Campo: Perfil: Biografía */
  $handler->display->display_options['fields']['field_musician_bio']['id'] = 'field_musician_bio';
  $handler->display->display_options['fields']['field_musician_bio']['table'] = 'field_data_field_musician_bio';
  $handler->display->display_options['fields']['field_musician_bio']['field'] = 'field_musician_bio';
  $handler->display->display_options['fields']['field_musician_bio']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_musician_bio']['label'] = '';
  $handler->display->display_options['fields']['field_musician_bio']['element_label_colon'] = FALSE;
  /* Contextual filter: Perfil: Usuario uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['user']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['user']['title'] = 'Mi información';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'user';
  /* Filter criterion: Perfil: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main' => 'main',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Perfil: Usuario uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['user']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['user']['title'] = 'Información de %1';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['user']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Perfil: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main' => 'main',
  );
  /* Filter criterion: Perfil: Privacidad (field_privacidad) */
  $handler->display->display_options['filters']['field_privacidad_value']['id'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['table'] = 'field_data_field_privacidad';
  $handler->display->display_options['filters']['field_privacidad_value']['field'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['value'] = array(
    '0 ' => '0 ',
  );
  $handler->display->display_options['block_description'] = 'Información Perfil de usuario';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Información Perfil de usuario (mi informacion)';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Perfil: Usuario uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['user']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['user']['title'] = 'Información de %1';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['user']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Perfil: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main' => 'main',
  );
  /* Filter criterion: Perfil: Privacidad (field_privacidad) */
  $handler->display->display_options['filters']['field_privacidad_value']['id'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['table'] = 'field_data_field_privacidad';
  $handler->display->display_options['filters']['field_privacidad_value']['field'] = 'field_privacidad_value';
  $handler->display->display_options['filters']['field_privacidad_value']['value'] = array(
    '1 ' => '1 ',
  );
  $handler->display->display_options['block_description'] = 'Información Perfil de usuario (registrados)';
  $translatables['perfiles_de_usuario'] = array(
    t('Master'),
    t('Información'),
    t('more'),
    t('Filtrar'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Usuario'),
    t('Perfil'),
    t('<strong>Nombre: </strong>[field_user_name] [field_user_surname]'),
    t('<strong>Provincia: [field_shared_state]</strong>'),
    t('<div class="social-group"><a href="[field_shared_facebook-value]"><img src="/sites/default/files/ms-social-share/fb.png" ></a></div>'),
    t('<div class="social-group"><a href="[field_shared_twitter-value]"><img src="/sites/default/files/ms-social-share/tw.png" ></a></div>'),
    t('<div class="social-group"><a href="[field_shared_googleplus-value]"><img src="/sites/default/files/ms-social-share/gp.png" ></a></div>'),
    t('<div class="clear"></div>'),
    t('<h2>Músico en:</h2>
[field_musician_activity]'),
    t('Todo(s)'),
    t('Mi información'),
    t('Block'),
    t('Información de %1'),
    t('Información Perfil de usuario'),
    t('Información Perfil de usuario (mi informacion)'),
    t('Información Perfil de usuario (registrados)'),
  );
  $export['perfiles_de_usuario'] = $view;

  $view = new view();
  $view->name = 'usuarios';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Usuarios';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Usuarios';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'rid' => 'rid',
    'field_shared_state_1' => 'field_shared_state_1',
    'field_musician_activity' => 'field_musician_activity',
    'field_manager_group' => 'field_manager_group',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shared_state_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_musician_activity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_manager_group' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Usuario: Perfil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
    'musico' => 'musico',
    'manager' => 'manager',
    'gestor' => 'gestor',
  );
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Usuario';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Campo: Usuario: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['empty'] = '-';
  /* Campo: Campo: Provincia */
  $handler->display->display_options['fields']['field_shared_state_1']['id'] = 'field_shared_state_1';
  $handler->display->display_options['fields']['field_shared_state_1']['table'] = 'field_data_field_shared_state';
  $handler->display->display_options['fields']['field_shared_state_1']['field'] = 'field_shared_state';
  $handler->display->display_options['fields']['field_shared_state_1']['relationship'] = 'profile';
  /* Campo: Perfil: Grupos */
  $handler->display->display_options['fields']['field_musician_activity']['id'] = 'field_musician_activity';
  $handler->display->display_options['fields']['field_musician_activity']['table'] = 'field_data_field_musician_activity';
  $handler->display->display_options['fields']['field_musician_activity']['field'] = 'field_musician_activity';
  $handler->display->display_options['fields']['field_musician_activity']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_musician_activity']['label'] = 'Grupo, estilo e instrumento';
  $handler->display->display_options['fields']['field_musician_activity']['settings'] = array(
    'edit' => 'Editar',
    'delete' => 'Eliminar',
    'add' => 'Agregar',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_musician_activity']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_musician_activity']['delta_offset'] = '0';
  /* Campo: Perfil: Grupo al que representa */
  $handler->display->display_options['fields']['field_manager_group']['id'] = 'field_manager_group';
  $handler->display->display_options['fields']['field_manager_group']['table'] = 'field_data_field_manager_group';
  $handler->display->display_options['fields']['field_manager_group']['field'] = 'field_manager_group';
  $handler->display->display_options['fields']['field_manager_group']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_manager_group']['delta_offset'] = '0';
  /* Sort criterion: Usuario: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Usuario: Activo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Usuario';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Campo: Usuario: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['empty'] = '-';
  /* Campo: Campo: Provincia */
  $handler->display->display_options['fields']['field_shared_state_1']['id'] = 'field_shared_state_1';
  $handler->display->display_options['fields']['field_shared_state_1']['table'] = 'field_data_field_shared_state';
  $handler->display->display_options['fields']['field_shared_state_1']['field'] = 'field_shared_state';
  $handler->display->display_options['fields']['field_shared_state_1']['relationship'] = 'profile';
  /* Campo: Perfil: Grupos */
  $handler->display->display_options['fields']['field_musician_activity']['id'] = 'field_musician_activity';
  $handler->display->display_options['fields']['field_musician_activity']['table'] = 'field_data_field_musician_activity';
  $handler->display->display_options['fields']['field_musician_activity']['field'] = 'field_musician_activity';
  $handler->display->display_options['fields']['field_musician_activity']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_musician_activity']['label'] = 'Grupo y estilo';
  $handler->display->display_options['fields']['field_musician_activity']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_musician_activity']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_musician_activity']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_musician_activity']['delta_offset'] = '0';
  /* Campo: Perfil: Grupo al que representa */
  $handler->display->display_options['fields']['field_manager_group']['id'] = 'field_manager_group';
  $handler->display->display_options['fields']['field_manager_group']['table'] = 'field_data_field_manager_group';
  $handler->display->display_options['fields']['field_manager_group']['field'] = 'field_manager_group';
  $handler->display->display_options['fields']['field_manager_group']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_manager_group']['label'] = 'Representa a';
  $handler->display->display_options['fields']['field_manager_group']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'usuarios';
  $translatables['usuarios'] = array(
    t('Master'),
    t('Usuarios'),
    t('more'),
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
    t('Perfil'),
    t('Usuario'),
    t('Roles'),
    t('-'),
    t('Provincia'),
    t('Grupo, estilo e instrumento'),
    t('Grupo al que representa'),
    t('Page'),
    t('Grupo y estilo'),
    t('Representa a'),
  );
  $export['usuarios'] = $view;

  return $export;
}
