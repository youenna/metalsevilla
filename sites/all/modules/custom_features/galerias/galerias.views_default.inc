<?php
/**
 * @file
 * galerias.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function galerias_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'galeria_cronica_entrevista';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Galeria cronica/entrevista';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_galleria';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default (This option is for views slideshow cycle, it is not used for views_slideshow ddblock)',
    'module' => 'views_slideshow_ddblock',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_shared_rep_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_shared_rep_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '250';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'default',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => '',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => 'field_shared_rep_image',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => '',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => '',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => '',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => '',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => '',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'default',
    'template_size_wrapper' => array(
      'template_size' => 'default',
    ),
    'content_container' => array(
      'container' => 'div.slide',
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '250',
      'timeout' => '5000',
      'order' => 'desc',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 0,
      'pager_settings' => array(
        'pager' => 'custom-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'left',
        'pager_event' => 'click',
        'pager_disable_click' => 1,
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 0,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 'slide',
          'pager' => 0,
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'bottom',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
    'template_submit' => 'get template sizes',
  );
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay_ms'] = '6000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['clicknext'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_crop'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_double_tap'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['height'] = '500';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_mode'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_time'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_crop'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_margin'] = '';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan_smoothness'] = '12';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['initial_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['layer_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_fade_speed'] = '';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_transition_speed'] = '';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['overlay_opacity'] = '0.85';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['pause_on_interaction'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['popup_links'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['preload'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['queue'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_counter'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_imagenav'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['swipe'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_crop'] = 'width';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_fit'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_margin'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_quality'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumbnails'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['touch_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['transition_speed'] = '400';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['width'] = '500';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['avoid_flash_of_content'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['debug'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['keep_source'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['strip_images'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Campo: Contenido: Fotos */
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
  $handler->display->display_options['fields']['field_shared_rep_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_rep_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_shared_rep_image']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_shared_rep_image']['field_api_classes'] = 0;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Fotos (field_shared_rep_image:fid) */
  $handler->display->display_options['filters']['field_shared_rep_image_fid']['id'] = 'field_shared_rep_image_fid';
  $handler->display->display_options['filters']['field_shared_rep_image_fid']['table'] = 'field_data_field_shared_rep_image';
  $handler->display->display_options['filters']['field_shared_rep_image_fid']['field'] = 'field_shared_rep_image_fid';
  $handler->display->display_options['filters']['field_shared_rep_image_fid']['operator'] = '!=';

  /* Display: Galeria cronica/entrevista */
  $handler = $view->new_display('block', 'Galeria cronica/entrevista', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Galeria cronica/entrevista';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Galeria fotos */
  $handler = $view->new_display('block', 'Galeria fotos', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Fotos */
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
  $handler->display->display_options['fields']['field_shared_rep_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_rep_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_rep_image']['type'] = 'lightbox2__lightshow__img_logo_220__original';
  $handler->display->display_options['fields']['field_shared_rep_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_shared_rep_image']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_shared_rep_image']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_shared_rep_image']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Fotos (field_shared_rep_image:fid) */
  $handler->display->display_options['filters']['field_shared_rep_image_fid']['id'] = 'field_shared_rep_image_fid';
  $handler->display->display_options['filters']['field_shared_rep_image_fid']['table'] = 'field_data_field_shared_rep_image';
  $handler->display->display_options['filters']['field_shared_rep_image_fid']['field'] = 'field_shared_rep_image_fid';
  $handler->display->display_options['filters']['field_shared_rep_image_fid']['operator'] = '!=';
  $handler->display->display_options['filters']['field_shared_rep_image_fid']['group'] = 1;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cronica' => 'cronica',
    'entrevista' => 'entrevista',
    'foto' => 'foto',
  );
  $handler->display->display_options['block_description'] = 'Galeria fotos';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Galeria vídeos */
  $handler = $view->new_display('block', 'Galeria vídeos', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Vídeo */
  $handler->display->display_options['fields']['field_shared_video']['id'] = 'field_shared_video';
  $handler->display->display_options['fields']['field_shared_video']['table'] = 'field_data_field_shared_video';
  $handler->display->display_options['fields']['field_shared_video']['field'] = 'field_shared_video';
  $handler->display->display_options['fields']['field_shared_video']['label'] = '';
  $handler->display->display_options['fields']['field_shared_video']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_shared_video']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_shared_video']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_video']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_shared_video']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_shared_video']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_shared_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_shared_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_shared_video']['settings'] = array(
    'image_style' => 'img_logo_220',
    'image_link' => 'node',
  );
  $handler->display->display_options['fields']['field_shared_video']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'entrevista' => 'entrevista',
    'video' => 'video',
  );
  $handler->display->display_options['block_description'] = 'Galeria vídeos';
  $handler->display->display_options['block_caching'] = '4';
  $translatables['galeria_cronica_entrevista'] = array(
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
    t('Todo(s)'),
    t('Galeria cronica/entrevista'),
    t('Galeria fotos'),
    t('Galeria vídeos'),
  );
  $export['galeria_cronica_entrevista'] = $view;

  return $export;
}
