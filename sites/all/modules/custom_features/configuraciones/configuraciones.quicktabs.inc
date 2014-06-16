<?php
/**
 * @file
 * configuraciones.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function configuraciones_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'galeria_multimedia';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Galería Multimedia';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_43d5aea46d7dce57ead51c4cb9736d93',
      'hide_title' => 1,
      'title' => 'Imágenes',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_d3b120b7e832306e04db7c474277f286',
      'hide_title' => 1,
      'title' => 'Vídeos',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Galería Multimedia');
  t('Imágenes');
  t('Vídeos');

  $export['galeria_multimedia'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'tabcomentarios';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'TabComentarios ';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'facebook_comments_box_delta_facebook_comments_box',
      'hide_title' => 1,
      'title' => 'Facebook',
      'weight' => '-100',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Phylactere';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook');
  t('TabComentarios ');

  $export['tabcomentarios'] = $quicktabs;

  return $export;
}
