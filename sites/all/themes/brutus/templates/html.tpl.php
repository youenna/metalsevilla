<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE tag.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 */
?>
<?php print $doctype; ?>
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php print $styles; ?>
    <!--[if lte IE 6]><style type="text/css" media="all">@import "<?php drupal_get_path('theme', 'brutus'); ?>/css/ie/ie6.css"</style><![endif]-->
    <!--[if IE 7]><style type="text/css" media="all">@import "<?php print drupal_get_path('theme', 'brutus'); ?>/css/ie/ie7.css"</style><![endif]-->
    <!--[if IE 8]><style type="text/css" media="all">@import "<?php drupal_get_path('theme', 'brutus'); ?>/css/ie/ie8.css"</style><![endif]-->
    <!--[if IE 9]><style type="text/css" media="all">@import "<?php drupal_get_path('theme', 'brutus'); ?>/css/ie/ie9.css"</style><![endif]-->
    <?php print $scripts; ?>
    <script src="//ajax.googleapis.com/ajax/libs/jquery/2.0.0/jquery.min.js"></script>
    <script src="//ajax.googleapis.com/ajax/libs/jqueryui/1.10.3/jquery-ui.min.js"></script>
    <script src="<?php print drupal_get_path('theme', 'brutus') ?>/js/custom.js"></script>
  </head>
  <body id="<?php print $body_id; ?>" class="<?php print $classes; ?>" <?php print $attributes;?>>
    <div id="skip">
      <a href="#main-content-area"><?php print t('Skip to main content area'); ?></a>
    </div>
    <img src="<?php print drupal_get_path('theme', 'brutus') ?>/images/amplificador-cabecera.png" alt="MetalSpain amplificador" class="img-ampli" />
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </body>
</html>    

