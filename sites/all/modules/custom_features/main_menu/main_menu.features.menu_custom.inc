<?php
/**
 * @file
 * main_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function main_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-enlaces-footer
  $menus['menu-enlaces-footer'] = array(
    'menu_name' => 'menu-enlaces-footer',
    'title' => 'Menú inferior',
    'description' => '',
  );
  // Exported menu: menu-menu-cabecera
  $menus['menu-menu-cabecera'] = array(
    'menu_name' => 'menu-menu-cabecera',
    'title' => 'Menú superior',
    'description' => 'Menú de navegación de la cabecera.',
  );
  // Exported menu: menu-redes-sociales
  $menus['menu-redes-sociales'] = array(
    'menu_name' => 'menu-redes-sociales',
    'title' => 'redes_sociales',
    'description' => 'Menú de redes sociales de Metal Sevilla.',
  );
  // Exported menu: menu-redes-sociales-footer
  $menus['menu-redes-sociales-footer'] = array(
    'menu_name' => 'menu-redes-sociales-footer',
    'title' => 'redes_sociales_footer',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Menú de navegación de la cabecera.');
  t('Menú de redes sociales de Metal Sevilla.');
  t('Menú inferior');
  t('Menú superior');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('redes_sociales');
  t('redes_sociales_footer');


  return $menus;
}
