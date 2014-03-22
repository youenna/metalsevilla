<?php
/**
 * @file
 * grupo_artista.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function grupo_artista_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'bloque_jamendo';
  $view->description = 'Bloque donde se muestra el reproductor de Jamendo';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bloque Jamendo';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Broken/missing handler */
  $handler->display->display_options['fields']['field_shared_disc']['id'] = 'field_shared_disc';
  $handler->display->display_options['fields']['field_shared_disc']['table'] = 'field_data_field_shared_disc';
  $handler->display->display_options['fields']['field_shared_disc']['field'] = 'field_shared_disc';
  $handler->display->display_options['fields']['field_shared_disc']['label'] = '';
  $handler->display->display_options['fields']['field_shared_disc']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['text'] = '<div style="text-align:center;"><object width="200" height="300" classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000" codebase="http://fpdownload.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=7,0,0,0" align="middle"><param name="allowScriptAccess" value="always" /><param name="wmode" value="transparent" /><param name="movie" value="http://widgets.jamendo.com/es/album/?album_id=105308&playertype=2008" /><param name="quality" value="high" /><param name="bgcolor" value="#FFFFFF" /><embed src="http://widgets.jamendo.com/es/album/?album_id=105308&playertype=2008" quality="high" wmode="transparent" bgcolor="#FFFFFF" width="200" height="300" align="middle" allowScriptAccess="always" type="application/x-shockwave-flash" pluginspage="http://www.macromedia.com/go/getflashplayer">&nbsp;</embed>&nbsp;</object><a href="http://pro.jamendo.com/" style="display:block;font-size:8px !important;">Catálogo de música libre</a></div>';
  $handler->display->display_options['fields']['field_shared_disc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_disc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_disc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['hide_alter_empty'] = 1;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Broken/missing handler */
  $handler->display->display_options['fields']['field_shared_disc']['id'] = 'field_shared_disc';
  $handler->display->display_options['fields']['field_shared_disc']['table'] = 'field_data_field_shared_disc';
  $handler->display->display_options['fields']['field_shared_disc']['field'] = 'field_shared_disc';
  $handler->display->display_options['fields']['field_shared_disc']['label'] = '';
  $handler->display->display_options['fields']['field_shared_disc']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['text'] = '<div style="text-align:center;"><object width="200" height="300" classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000" codebase="http://fpdownload.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=7,0,0,0" align="middle"><param name="allowScriptAccess" value="always" /><param name="wmode" value="transparent" /><param name="movie" value="http://widgets.jamendo.com/es/album/?album_id=105308&playertype=2008" /><param name="quality" value="high" /><param name="bgcolor" value="#FFFFFF" /><embed src="http://widgets.jamendo.com/es/album/?album_id=105308&playertype=2008" quality="high" wmode="transparent" bgcolor="#FFFFFF" width="200" height="300" align="middle" allowScriptAccess="always" type="application/x-shockwave-flash" pluginspage="http://www.macromedia.com/go/getflashplayer">&nbsp;</embed>&nbsp;</object><a href="http://pro.jamendo.com/" style="display:block;font-size:8px !important;">Catálogo de música libre</a></div>';
  $handler->display->display_options['fields']['field_shared_disc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_disc']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_disc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'grupo_artista' => 'grupo_artista',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['block_description'] = 'Jamendo Player';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Broken/missing handler */
  $handler->display->display_options['fields']['field_shared_disc']['id'] = 'field_shared_disc';
  $handler->display->display_options['fields']['field_shared_disc']['table'] = 'field_data_field_shared_disc';
  $handler->display->display_options['fields']['field_shared_disc']['field'] = 'field_shared_disc';
  $handler->display->display_options['fields']['field_shared_disc']['label'] = '';
  $handler->display->display_options['fields']['field_shared_disc']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['text'] = '<div style="text-align:center;"><object width="200" height="300" classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000" codebase="http://fpdownload.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=7,0,0,0" align="middle"><param name="allowScriptAccess" value="always" /><param name="wmode" value="transparent" /><param name="movie" value="http://widgets.jamendo.com/es/album/?album_id=105308&playertype=2008" /><param name="quality" value="high" /><param name="bgcolor" value="#FFFFFF" /><embed src="http://widgets.jamendo.com/es/album/?album_id=105308&playertype=2008" quality="high" wmode="transparent" bgcolor="#FFFFFF" width="200" height="300" align="middle" allowScriptAccess="always" type="application/x-shockwave-flash" pluginspage="http://www.macromedia.com/go/getflashplayer">&nbsp;</embed>&nbsp;</object><a href="http://pro.jamendo.com/" style="display:block;font-size:8px !important;">Catálogo de música libre</a></div>';
  $handler->display->display_options['fields']['field_shared_disc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_disc']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_disc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_disc']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Título */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['title']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['glossary'] = 0;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['title']['transform_dash'] = 1;
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['block_description'] = 'Jamendo Player 2';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['bloque_jamendo'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div style="text-align:center;"><object width="200" height="300" classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000" codebase="http://fpdownload.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=7,0,0,0" align="middle"><param name="allowScriptAccess" value="always" /><param name="wmode" value="transparent" /><param name="movie" value="http://widgets.jamendo.com/es/album/?album_id=105308&playertype=2008" /><param name="quality" value="high" /><param name="bgcolor" value="#FFFFFF" /><embed src="http://widgets.jamendo.com/es/album/?album_id=105308&playertype=2008" quality="high" wmode="transparent" bgcolor="#FFFFFF" width="200" height="300" align="middle" allowScriptAccess="always" type="application/x-shockwave-flash" pluginspage="http://www.macromedia.com/go/getflashplayer">&nbsp;</embed>&nbsp;</object><a href="http://pro.jamendo.com/" style="display:block;font-size:8px !important;">Catálogo de música libre</a></div>'),
    t('Block'),
    t('Todo(s)'),
    t('Jamendo Player'),
    t('Jamendo Player 2'),
  );
  $export['bloque_jamendo'] = $view;

  $view = new view;
  $view->name = 'bloques_de_un_grupo';
  $view->description = 'Listado de los discos de cada grupo';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bloques de un grupo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Contenido: Grupos relacionados (field_shared_rel_group) */
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['id'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['table'] = 'field_data_field_shared_rel_group';
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['field'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_shared_rel_group_nid']['delta'] = '-1';
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
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['fields']['field_shared_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_logo']['field_api_classes'] = 0;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenido: Título */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['title']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['glossary'] = 0;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['title']['transform_dash'] = 1;
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Discografía';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Título */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['relationship'] = 'field_shared_rel_group_nid';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['title']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['glossary'] = 0;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['path_case'] = 'upper';
  $handler->display->display_options['arguments']['title']['transform_dash'] = 1;
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['path'] = 'discografia/%';

  /* Display: Bloque logo del grupo */
  $handler = $view->new_display('block', 'Bloque logo del grupo', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'img_logo_220',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_logo']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'grupo_artista' => 'grupo_artista',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
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
  $handler->display->display_options['block_description'] = 'Logo del grupo';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Bloque Menu del grupo */
  $handler = $view->new_display('block', 'Bloque Menu del grupo', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Biografía';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = 0;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Discografía';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'discografia/[title]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path_case'] = 'lower';
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
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Componentes';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'componentes/[title]';
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'grupo_artista' => 'grupo_artista',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
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
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Página */
  $handler = $view->new_display('page', 'Página', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['field_member']['field_api_classes'] = 0;
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
  $handler->display->display_options['path'] = 'componentes/%';

  /* Display: Bloque logo del grupo 2 */
  $handler = $view->new_display('block', 'Bloque logo del grupo 2', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'img_logo_220',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_logo']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Título */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['title']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['glossary'] = 0;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['title']['transform_dash'] = 1;
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
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
  $handler->display->display_options['block_description'] = 'Logo del grupo 2';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Bloque Menu del grupo 2 */
  $handler = $view->new_display('block', 'Bloque Menu del grupo 2', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Biografía';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = 0;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Discografía';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'discografia/[title]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path_case'] = 'lower';
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
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Componentes';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'componentes/[title]';
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Título */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['title']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['glossary'] = 0;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['title']['transform_dash'] = 1;
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
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
  $handler->display->display_options['block_description'] = 'Bloque Menu del grupo 2';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Grupos Relacionados */
  $handler = $view->new_display('block', 'Grupos Relacionados', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Grupos Relacionados';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['fields']['field_shared_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_logo']['settings'] = array(
    'image_style' => 'logo_grid_9',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_logo']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Campo: Estilo (field_shared_style) */
  $handler->display->display_options['arguments']['field_shared_style_tid']['id'] = 'field_shared_style_tid';
  $handler->display->display_options['arguments']['field_shared_style_tid']['table'] = 'field_data_field_shared_style';
  $handler->display->display_options['arguments']['field_shared_style_tid']['field'] = 'field_shared_style_tid';
  $handler->display->display_options['arguments']['field_shared_style_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_shared_style_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_shared_style_tid']['default_argument_options']['argument'] = '73+74';
  $handler->display->display_options['arguments']['field_shared_style_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_shared_style_tid']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['field_shared_style_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_shared_style_tid']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_shared_style_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_shared_style_tid']['summary_options']['inline'] = 0;
  $handler->display->display_options['arguments']['field_shared_style_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_shared_style_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_shared_style_tid']['validate_options']['vocabularies'] = array(
    'estilo' => 'estilo',
  );
  $handler->display->display_options['arguments']['field_shared_style_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_shared_style_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_shared_style_tid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['field_shared_style_tid']['not'] = 0;
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
  $handler->display->display_options['block_caching'] = '8';
  $translatables['bloques_de_un_grupo'] = array(
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
    t('field_shared_rel_group'),
    t('Todo(s)'),
    t('Page'),
    t('Discografía'),
    t('Bloque logo del grupo'),
    t('Logo del grupo'),
    t('Bloque Menu del grupo'),
    t('Biografía'),
    t('[title]'),
    t('discografia/[title]'),
    t('Componentes'),
    t('componentes/[title]'),
    t('Página'),
    t('Bloque logo del grupo 2'),
    t('Logo del grupo 2'),
    t('Bloque Menu del grupo 2'),
    t('Grupos Relacionados'),
  );
  $export['bloques_de_un_grupo'] = $view;

  $view = new view;
  $view->name = 'grupos';
  $view->description = 'Listados y bloques de grupos y artistas';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Grupos';
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
  $translatables['grupos'] = array(
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
  $export['grupos'] = $view;

  return $export;
}
