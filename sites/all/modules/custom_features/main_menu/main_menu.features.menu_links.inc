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

  // Exported menu link: main-menu:actualidad
  $menu_links['main-menu:actualidad'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'actualidad',
    'router_path' => 'actualidad',
    'link_title' => 'Actualidad',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
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
    'weight' => '-49',
    'parent_path' => 'actualidad',
  );
  // Exported menu link: main-menu:actualidad/discos/criticas
  $menu_links['main-menu:actualidad/discos/criticas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'actualidad/discos/criticas',
    'router_path' => 'actualidad',
    'link_title' => 'Críticas',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'actualidad',
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
    'weight' => '-47',
    'parent_path' => 'actualidad',
  );
  // Exported menu link: main-menu:actualidad/noticias
  $menu_links['main-menu:actualidad/noticias'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'actualidad/noticias',
    'router_path' => 'actualidad/noticias',
    'link_title' => 'Noticias',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'actualidad',
  );
  // Exported menu link: main-menu:agenda
  $menu_links['main-menu:agenda'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'agenda',
    'router_path' => 'agenda',
    'link_title' => 'Agenda',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:grupos-artistas
  $menu_links['main-menu:grupos-artistas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'grupos-artistas',
    'router_path' => 'grupos-artistas',
    'link_title' => 'Grupos/Artistas',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:guia
  $menu_links['main-menu:guia'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'guia',
    'router_path' => 'guia',
    'link_title' => 'Guia Metalera',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:guia/bares
  $menu_links['main-menu:guia/bares'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'guia/bares',
    'router_path' => 'guia/bares',
    'link_title' => 'Bares',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'guia',
  );
  // Exported menu link: main-menu:guia/salas
  $menu_links['main-menu:guia/salas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'guia/salas',
    'router_path' => 'guia/salas',
    'link_title' => 'Salas',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'guia',
  );
  // Exported menu link: main-menu:guia/tiendas
  $menu_links['main-menu:guia/tiendas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'guia/tiendas',
    'router_path' => 'guia/tiendas',
    'link_title' => 'Tiendas',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'guia',
  );
  // Exported menu link: menu-enlaces-footer:contact
  $menu_links['menu-enlaces-footer:contact'] = array(
    'menu_name' => 'menu-enlaces-footer',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contacto',
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
  // Exported menu link: menu-enlaces-footer:node/8109
  $menu_links['menu-enlaces-footer:node/8109'] = array(
    'menu_name' => 'menu-enlaces-footer',
    'link_path' => 'node/8109',
    'router_path' => 'node/%',
    'link_title' => 'Aviso Legal',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-enlaces-footer:node/8110
  $menu_links['menu-enlaces-footer:node/8110'] = array(
    'menu_name' => 'menu-enlaces-footer',
    'link_path' => 'node/8110',
    'router_path' => 'node/%',
    'link_title' => 'Equipo',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-enlaces-footer:sitemap
  $menu_links['menu-enlaces-footer:sitemap'] = array(
    'menu_name' => 'menu-enlaces-footer',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Mapa web',
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
  // Exported menu link: menu-menu-cabecera:<front>
  $menu_links['menu-menu-cabecera:<front>'] = array(
    'menu_name' => 'menu-menu-cabecera',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-menu-cabecera:contact
  $menu_links['menu-menu-cabecera:contact'] = array(
    'menu_name' => 'menu-menu-cabecera',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contacto',
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
  // Exported menu link: menu-menu-cabecera:node/8189
  $menu_links['menu-menu-cabecera:node/8189'] = array(
    'menu_name' => 'menu-menu-cabecera',
    'link_path' => 'node/8189',
    'router_path' => 'node/%',
    'link_title' => 'Galería',
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
  // Exported menu link: menu-menu-cabecera:node/add
  $menu_links['menu-menu-cabecera:node/add'] = array(
    'menu_name' => 'menu-menu-cabecera',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Crear contenido',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-menu-cabecera:user
  $menu_links['menu-menu-cabecera:user'] = array(
    'menu_name' => 'menu-menu-cabecera',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-menu-cabecera:user/login
  $menu_links['menu-menu-cabecera:user/login'] = array(
    'menu_name' => 'menu-menu-cabecera',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Acceso / Login',
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
  // Exported menu link: menu-menu-cabecera:user/logout
  $menu_links['menu-menu-cabecera:user/logout'] = array(
    'menu_name' => 'menu-menu-cabecera',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Cerrar Sesión',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-redes-sociales-footer:actualidad/feed
  $menu_links['menu-redes-sociales-footer:actualidad/feed'] = array(
    'menu_name' => 'menu-redes-sociales-footer',
    'link_path' => 'actualidad/feed',
    'router_path' => 'actualidad/feed',
    'link_title' => 'RSS',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-redes-sociales-footer:https://plus.google.com/100472111073090247940
  $menu_links['menu-redes-sociales-footer:https://plus.google.com/100472111073090247940'] = array(
    'menu_name' => 'menu-redes-sociales-footer',
    'link_path' => 'https://plus.google.com/100472111073090247940',
    'router_path' => '',
    'link_title' => 'Google+',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-redes-sociales-footer:https://twitter.com/#!/metalsevilla
  $menu_links['menu-redes-sociales-footer:https://twitter.com/#!/metalsevilla'] = array(
    'menu_name' => 'menu-redes-sociales-footer',
    'link_path' => 'https://twitter.com/#!/metalsevilla',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-redes-sociales-footer:https://www.facebook.com/metalsevilla
  $menu_links['menu-redes-sociales-footer:https://www.facebook.com/metalsevilla'] = array(
    'menu_name' => 'menu-redes-sociales-footer',
    'link_path' => 'https://www.facebook.com/metalsevilla',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-redes-sociales:actualidad/feed
  $menu_links['menu-redes-sociales:actualidad/feed'] = array(
    'menu_name' => 'menu-redes-sociales',
    'link_path' => 'actualidad/feed',
    'router_path' => 'actualidad/feed',
    'link_title' => 'RSS',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-rss',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-redes-sociales:https://plus.google.com/100472111073090247940
  $menu_links['menu-redes-sociales:https://plus.google.com/100472111073090247940'] = array(
    'menu_name' => 'menu-redes-sociales',
    'link_path' => 'https://plus.google.com/100472111073090247940',
    'router_path' => '',
    'link_title' => 'Google+',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-gp',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-redes-sociales:https://twitter.com/#!/metalsevilla
  $menu_links['menu-redes-sociales:https://twitter.com/#!/metalsevilla'] = array(
    'menu_name' => 'menu-redes-sociales',
    'link_path' => 'https://twitter.com/#!/metalsevilla',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-tw',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-redes-sociales:https://www.facebook.com/metalsevilla
  $menu_links['menu-redes-sociales:https://www.facebook.com/metalsevilla'] = array(
    'menu_name' => 'menu-redes-sociales',
    'link_path' => 'https://www.facebook.com/metalsevilla',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-fb',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Acceso / Login');
  t('Actualidad');
  t('Agenda');
  t('Aviso Legal');
  t('Bares');
  t('Cerrar Sesión');
  t('Contacto');
  t('Crear contenido');
  t('Críticas');
  t('Crónicas');
  t('Entrevistas');
  t('Equipo');
  t('Facebook');
  t('Galería');
  t('Google+');
  t('Grupos/Artistas');
  t('Guia Metalera');
  t('Inicio');
  t('Mapa web');
  t('Noticias');
  t('RSS');
  t('Salas');
  t('Tiendas');
  t('Twitter');
  t('User account');


  return $menu_links;
}
