<?php
/**
 * @file
 * menu_usuario.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_usuario_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu_usuario:user
  $menu_links['menu_usuario:user'] = array(
    'menu_name' => 'menu_usuario',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Mi cuenta',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Mi cuenta');


  return $menu_links;
}
