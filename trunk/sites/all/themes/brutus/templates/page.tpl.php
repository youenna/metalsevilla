<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content_top']: Items for the header region.
 * - $page['content']: The main content of the current page.
 * - $page['content_bottom']: Items for the header region.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
   
 <!-- HEADER TOP -->
    <?php if ($page['header_top']): ?>
	    <div id="header-top">
	    		<div id="header-top-wrapper">
		    		<div id="header-top-inner">
		    			<?php print render($page['header_top']); ?>
		    		</div><!-- /header-inner -->
		    	</div><!-- /header-top-wapper -->
	    </div><!-- /header-top (full screen) -->
    <?php endif; ?>
    
    <div id="page">

    <!-- HEADER -->

    <div id="header">

      <div id="logo-title">
	
       <?php if (!empty($logo)): ?>
        <a href="<?php print $front_page; ?>" title="<?php print $site_name; ?>" rel="home" id="logo">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
          </a>
        <?php endif; ?>

        <div id="name-and-slogan">
          <?php if (!empty($site_name)): ?>
            <h1 id="site-name">
              <a href="<?php print $front_page ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>
          <?php if (!empty($site_slogan)): ?>
            <div id="site-slogan"><?php print $site_slogan; ?></div>
          <?php endif; ?>
        </div> <!-- /name-and-slogan -->

      </div> <!-- /logo-title -->

      <?php if ($page['header']): ?>
        <div id="header-region">
          <?php print render($page['header']); ?>
        </div>
      <?php endif; ?>

	<script type="text/javascript">
       
        var _gaq = _gaq || [];
        _gaq.push(['_setAccount', 'UA-3612616-2']);
        _gaq.push(['_trackPageview']);
       
        (function() {
          var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
          ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
          var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
        })();
       </script>

    </div> <!-- /header -->

    <?php if (!empty($main_menu) || !empty($secondary_menu)): ?>
      <div id="navigation" class="menu <?php if (!empty($main_menu)) : print "with-main-menu"; endif; if (!empty($secondary_menu)) : print " with-sub-menu"; endif; ?>">
        <?php if (!empty($main_menu)): print theme('links', $main_menu, array('id' => 'primary', 'class' => 'links main-menu')); endif; ?>
        <?php if (!empty($secondary_menu)): print theme('links', $secondary_menu, array('id' => 'secondary', 'class' => 'links sub-menu')); endif; ?>
      </div> <!-- /navigation -->
    <?php endif; ?>


    <!-- MAIN -->

    <div id="main" class="clearfix">
      <div id="main-breadcrumb">
      	<?php print $breadcrumb; ?>
      </div><!-- /#main-breadcrumb -->
      <div id="content">
        <div id="content-inner" class="inner column center">

          <?php if ($page['content_top']): ?>
            <div id="content-top">
              <?php print render($page['content_top']); ?>
            </div> <!-- /#content-top -->
          <?php endif; ?>

          <?php if ($title || $messages || $action_links || $tabs): ?>
            <div id="content-header">


              <?php if ($title): ?>
                <h2 class="title"><?php print $title; ?></h2>
              <?php endif; ?>

              <?php print $messages; ?>

              <?php if ($action_links): ?>
                <ul class="action-links"><?php print render($action_links); ?></ul>
              <?php endif; ?>

              <?php if ($tabs): ?>
                <div class="tabs"><?php print render($tabs); ?></div>
              <?php endif; ?>

            </div> <!-- /#content-header -->
          <?php endif; ?>

          <div id="content-area">
            <?php print render($page['content']); ?>
          </div> <!-- /#content-area -->

          <?php print $feed_icons; ?>

          <?php if ($page['content_bottom']): ?>
            <div id="content-bottom">
              <?php print render($page['content_bottom']); ?>
            </div><!-- /#content-bottom -->
          <?php endif; ?>

          </div>
        </div> <!-- /content-inner /content -->

        <?php if ($page['left']): ?>
          <div id="sidebar-first" class="column sidebar first">
            <div id="sidebar-first-inner" class="inner">
              <?php print render($page['left']); ?>
            </div>
          </div>
        <?php endif; ?> <!-- /sidebar-left -->

        <?php if ($page['right']): ?>
          <div id="sidebar-second" class="column sidebar second last">
            <div id="sidebar-second-inner" class="inner">
              <?php print render($page['right']); ?>
            </div>
          </div>
        <?php endif; ?> <!-- /sidebar-second -->

      </div> <!-- /main -->

      <!-- FOOTER -->

      <?php if(!empty($footer_message) || !empty($footer)): ?>
        <div id="footer">
          <?php print render($page['footer']); ?>
        </div> <!-- /footer -->
      <?php endif; ?>

    </div> <!-- /page -->
          
      <!-- FOOTER BOTTOM -->
    <?php if ($page['footer_bottom']): ?>
	    <div id="footer-bottom">
	    		<div id="footer-bottom-wrapper">
		    		<div id="footer-bottom-inner">
              <?php print render($page['footer_bottom']); ?>
		    		</div><!-- /footer-bottom-inner -->
		    	</div><!-- /footer-bottom-wapper -->
	    </div><!-- /footer-bottom (full screen) -->
    <?php endif; ?>
