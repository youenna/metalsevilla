<?php
/**
 * @file
 * permisos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function permisos_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access devel information
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: access rules debug
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: access service links
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'service_links',
  );

  // Exported permission: access site in maintenance mode
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site map
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site-wide contact form
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: access statistics
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      0 => 'Moderador',
      1 => 'Redactor/a',
      2 => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: access toolbar
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user contact forms
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: administer CAPTCHA settings
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: administer EU Cookie Compliance popup
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: administer Terms and Conditions
  $permissions['administer Terms and Conditions'] = array(
    'name' => 'administer Terms and Conditions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'legal',
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer all signups
  $permissions['administer all signups'] = array(
    'name' => 'administer all signups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer ckeditor
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer contact forms
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer custom breadcrumbs
  $permissions['administer custom breadcrumbs'] = array(
    'name' => 'administer custom breadcrumbs',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer field collections
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: administer fieldgroups
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer google authorship
  $permissions['administer google authorship'] = array(
    'name' => 'administer google authorship',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'google_authorship',
  );

  // Exported permission: administer honeypot
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer imce
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: administer languages
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer lightbox2
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: administer masquerade
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer meta tags
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer modules
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nivo slider
  $permissions['administer nivo slider'] = array(
    'name' => 'administer nivo slider',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'nivo_slider',
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'Moderador',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer openlayers
  $permissions['administer openlayers'] = array(
    'name' => 'administer openlayers',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'openlayers_ui',
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer profile types
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer quicktabs
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: administer recaptcha
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: administer rules
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer signups for own content
  $permissions['administer signups for own content'] = array(
    'name' => 'administer signups for own content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer statistics
  $permissions['administer statistics'] = array(
    'name' => 'administer statistics',
    'roles' => array(
      0 => 'Moderador',
      1 => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer video styles
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: administer workflow
  $permissions['administer workflow'] = array(
    'name' => 'administer workflow',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'workflow_admin_ui',
  );

  // Exported permission: allow plupload
  $permissions['allow plupload'] = array(
    'name' => 'allow plupload',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'plup',
  );

  // Exported permission: block IP addresses
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass honeypot protection
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: bypass node access
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: cancel account
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: cancel own signups
  $permissions['cancel own signups'] = array(
    'name' => 'cancel own signups',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'signup',
  );

  // Exported permission: cancel signups
  $permissions['cancel signups'] = array(
    'name' => 'cancel signups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create banner content
  $permissions['create banner content'] = array(
    'name' => 'create banner content',
    'roles' => array(),
  );

  // Exported permission: create critica_disco content
  $permissions['create critica_disco content'] = array(
    'name' => 'create critica_disco content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create cronica content
  $permissions['create cronica content'] = array(
    'name' => 'create cronica content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create disco content
  $permissions['create disco content'] = array(
    'name' => 'create disco content',
    'roles' => array(
      0 => 'Moderador',
      1 => 'Mánager',
      2 => 'Músico',
      3 => 'Redactor/a',
      4 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create entrevista content
  $permissions['create entrevista content'] = array(
    'name' => 'create entrevista content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create establecimiento content
  $permissions['create establecimiento content'] = array(
    'name' => 'create establecimiento content',
    'roles' => array(
      0 => 'Gestor de establecimiento',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create evento content
  $permissions['create evento content'] = array(
    'name' => 'create evento content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create grupo_artista content
  $permissions['create grupo_artista content'] = array(
    'name' => 'create grupo_artista content',
    'roles' => array(
      0 => 'Mánager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create lanzamiento_disco content
  $permissions['create lanzamiento_disco content'] = array(
    'name' => 'create lanzamiento_disco content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create noticia content
  $permissions['create noticia content'] = array(
    'name' => 'create noticia content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: customize ckeditor
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: customize shortcut links
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any banner content
  $permissions['delete any banner content'] = array(
    'name' => 'delete any banner content',
    'roles' => array(),
  );

  // Exported permission: delete any critica_disco content
  $permissions['delete any critica_disco content'] = array(
    'name' => 'delete any critica_disco content',
    'roles' => array(),
  );

  // Exported permission: delete any cronica content
  $permissions['delete any cronica content'] = array(
    'name' => 'delete any cronica content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any disco content
  $permissions['delete any disco content'] = array(
    'name' => 'delete any disco content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any entrevista content
  $permissions['delete any entrevista content'] = array(
    'name' => 'delete any entrevista content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any establecimiento content
  $permissions['delete any establecimiento content'] = array(
    'name' => 'delete any establecimiento content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any evento content
  $permissions['delete any evento content'] = array(
    'name' => 'delete any evento content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any grupo_artista content
  $permissions['delete any grupo_artista content'] = array(
    'name' => 'delete any grupo_artista content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any lanzamiento_disco content
  $permissions['delete any lanzamiento_disco content'] = array(
    'name' => 'delete any lanzamiento_disco content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any noticia content
  $permissions['delete any noticia content'] = array(
    'name' => 'delete any noticia content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own banner content
  $permissions['delete own banner content'] = array(
    'name' => 'delete own banner content',
    'roles' => array(),
  );

  // Exported permission: delete own critica_disco content
  $permissions['delete own critica_disco content'] = array(
    'name' => 'delete own critica_disco content',
    'roles' => array(),
  );

  // Exported permission: delete own cronica content
  $permissions['delete own cronica content'] = array(
    'name' => 'delete own cronica content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own disco content
  $permissions['delete own disco content'] = array(
    'name' => 'delete own disco content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own entrevista content
  $permissions['delete own entrevista content'] = array(
    'name' => 'delete own entrevista content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own establecimiento content
  $permissions['delete own establecimiento content'] = array(
    'name' => 'delete own establecimiento content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own evento content
  $permissions['delete own evento content'] = array(
    'name' => 'delete own evento content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own grupo_artista content
  $permissions['delete own grupo_artista content'] = array(
    'name' => 'delete own grupo_artista content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own lanzamiento_disco content
  $permissions['delete own lanzamiento_disco content'] = array(
    'name' => 'delete own lanzamiento_disco content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own noticia content
  $permissions['delete own noticia content'] = array(
    'name' => 'delete own noticia content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 7
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: display EU Cookie Compliance popup
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: download original image
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: edit any banner content
  $permissions['edit any banner content'] = array(
    'name' => 'edit any banner content',
    'roles' => array(),
  );

  // Exported permission: edit any critica_disco content
  $permissions['edit any critica_disco content'] = array(
    'name' => 'edit any critica_disco content',
    'roles' => array(
      0 => 'Moderador',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any cronica content
  $permissions['edit any cronica content'] = array(
    'name' => 'edit any cronica content',
    'roles' => array(
      0 => 'Moderador',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any disco content
  $permissions['edit any disco content'] = array(
    'name' => 'edit any disco content',
    'roles' => array(
      0 => 'Moderador',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any entrevista content
  $permissions['edit any entrevista content'] = array(
    'name' => 'edit any entrevista content',
    'roles' => array(
      0 => 'Moderador',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any establecimiento content
  $permissions['edit any establecimiento content'] = array(
    'name' => 'edit any establecimiento content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any evento content
  $permissions['edit any evento content'] = array(
    'name' => 'edit any evento content',
    'roles' => array(
      0 => 'Moderador',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any gestor profile
  $permissions['edit any gestor profile'] = array(
    'name' => 'edit any gestor profile',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any grupo_artista content
  $permissions['edit any grupo_artista content'] = array(
    'name' => 'edit any grupo_artista content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any lanzamiento_disco content
  $permissions['edit any lanzamiento_disco content'] = array(
    'name' => 'edit any lanzamiento_disco content',
    'roles' => array(
      0 => 'Moderador',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any main profile
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any manager profile
  $permissions['edit any manager profile'] = array(
    'name' => 'edit any manager profile',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any musico profile
  $permissions['edit any musico profile'] = array(
    'name' => 'edit any musico profile',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any noticia content
  $permissions['edit any noticia content'] = array(
    'name' => 'edit any noticia content',
    'roles' => array(
      0 => 'Moderador',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit meta tags
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit own banner content
  $permissions['edit own banner content'] = array(
    'name' => 'edit own banner content',
    'roles' => array(),
  );

  // Exported permission: edit own comments
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own critica_disco content
  $permissions['edit own critica_disco content'] = array(
    'name' => 'edit own critica_disco content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own cronica content
  $permissions['edit own cronica content'] = array(
    'name' => 'edit own cronica content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own disco content
  $permissions['edit own disco content'] = array(
    'name' => 'edit own disco content',
    'roles' => array(
      0 => 'Moderador',
      1 => 'Mánager',
      2 => 'Músico',
      3 => 'Redactor/a',
      4 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own entrevista content
  $permissions['edit own entrevista content'] = array(
    'name' => 'edit own entrevista content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own establecimiento content
  $permissions['edit own establecimiento content'] = array(
    'name' => 'edit own establecimiento content',
    'roles' => array(
      0 => 'Gestor de establecimiento',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own evento content
  $permissions['edit own evento content'] = array(
    'name' => 'edit own evento content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own gestor profile
  $permissions['edit own gestor profile'] = array(
    'name' => 'edit own gestor profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own grupo_artista content
  $permissions['edit own grupo_artista content'] = array(
    'name' => 'edit own grupo_artista content',
    'roles' => array(
      0 => 'Mánager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own lanzamiento_disco content
  $permissions['edit own lanzamiento_disco content'] = array(
    'name' => 'edit own lanzamiento_disco content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own main profile
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own manager profile
  $permissions['edit own manager profile'] = array(
    'name' => 'edit own manager profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own musico profile
  $permissions['edit own musico profile'] = array(
    'name' => 'edit own musico profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own noticia content
  $permissions['edit own noticia content'] = array(
    'name' => 'edit own noticia content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own signups
  $permissions['edit own signups'] = array(
    'name' => 'edit own signups',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'signup',
  );

  // Exported permission: edit terms in 1
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 7
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: email all signed up users
  $permissions['email all signed up users'] = array(
    'name' => 'email all signed up users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  // Exported permission: email users signed up for own content
  $permissions['email users signed up for own content'] = array(
    'name' => 'email users signed up for own content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'signup',
  );

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: manage Shorten URLs API keys
  $permissions['manage Shorten URLs API keys'] = array(
    'name' => 'manage Shorten URLs API keys',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shorten',
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: masquerade as admin
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: masquerade as any user
  $permissions['masquerade as any user'] = array(
    'name' => 'masquerade as any user',
    'roles' => array(),
  );

  // Exported permission: masquerade as user
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Moderador',
      1 => 'Redactor/a',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: schedule workflow transitions
  $permissions['schedule workflow transitions'] = array(
    'name' => 'schedule workflow transitions',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'workflow',
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: sign up for content
  $permissions['sign up for content'] = array(
    'name' => 'sign up for content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'signup',
  );

  // Exported permission: skip CAPTCHA
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: skip comment approval
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: switch shortcut sets
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: translate interface
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: use PHP for service visibility
  $permissions['use PHP for service visibility'] = array(
    'name' => 'use PHP for service visibility',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'service_links',
  );

  // Exported permission: use PHP for settings
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: use Shorten URLs page
  $permissions['use Shorten URLs page'] = array(
    'name' => 'use Shorten URLs page',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'shorten',
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: use php in custom breadcrumbs
  $permissions['use php in custom breadcrumbs'] = array(
    'name' => 'use php in custom breadcrumbs',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: use text format filtered_html
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'Community Manager',
      1 => 'Gestor de establecimiento',
      2 => 'Moderador',
      3 => 'Mánager',
      4 => 'Músico',
      5 => 'Redactor/a',
      6 => 'administrator',
      7 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format php_code
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
  );

  // Exported permission: use text format plain_text
  $permissions['use text format plain_text'] = array(
    'name' => 'use text format plain_text',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: view Terms and Conditions
  $permissions['view Terms and Conditions'] = array(
    'name' => 'view Terms and Conditions',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'legal',
  );

  // Exported permission: view all signups
  $permissions['view all signups'] = array(
    'name' => 'view all signups',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'signup',
  );

  // Exported permission: view any gestor profile
  $permissions['view any gestor profile'] = array(
    'name' => 'view any gestor profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any main profile
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any manager profile
  $permissions['view any manager profile'] = array(
    'name' => 'view any manager profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any musico profile
  $permissions['view any musico profile'] = array(
    'name' => 'view any musico profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own gestor profile
  $permissions['view own gestor profile'] = array(
    'name' => 'view own gestor profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own main profile
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own manager profile
  $permissions['view own manager profile'] = array(
    'name' => 'view own manager profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own musico profile
  $permissions['view own musico profile'] = array(
    'name' => 'view own musico profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view post access counter
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      0 => 'Moderador',
      1 => 'Redactor/a',
      2 => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'Moderador',
      1 => 'Redactor/a',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
