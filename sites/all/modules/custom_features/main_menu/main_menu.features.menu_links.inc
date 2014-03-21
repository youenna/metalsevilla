<?php
/**
 * @file
 * main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:actualidad/cronicas
  $menu_links['main-menu:actualidad/cronicas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'actualidad/cronicas',
    'router_path' => 'actualidad/cronicas',
    'link_title' => 'Crónicas',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:actualidad/entrevistas
  $menu_links['main-menu:actualidad/entrevistas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'actualidad/entrevistas',
    'router_path' => 'actualidad/entrevistas',
    'link_title' => 'Entrevistas',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:grupos-artistas
  $menu_links['main-menu:grupos-artistas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'grupos-artistas',
    'router_path' => 'grupos-artistas',
    'link_title' => 'Grupos y Artistas',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Crónicas');
  t('Entrevistas');
  t('Grupos y Artistas');


  return $menu_links;
}
