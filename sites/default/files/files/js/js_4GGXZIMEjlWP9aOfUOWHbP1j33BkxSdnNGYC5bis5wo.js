(function ($) {
  $(document).ready(function(){
    $('a.service-links-google-plus-one').each(function(){
      var counter = Drupal.settings.ws_gpo.counter ? '' : 'count="false" ';
      var type = (Drupal.settings.ws_gpo.type == '') ? '' : 'size="'+ Drupal.settings.ws_gpo.type + '" ';
      var g_text = '<g:plusone ' + counter + type + 'href="' + $(this).attr('href') + '" >' + '</g:plusone>';
      $(this).replaceWith(g_text);
    });
  });
})(jQuery);
;
(function ($) {

/**
 * A progressbar object. Initialized with the given id. Must be inserted into
 * the DOM afterwards through progressBar.element.
 *
 * method is the function which will perform the HTTP request to get the
 * progress bar state. Either "GET" or "POST".
 *
 * e.g. pb = new progressBar('myProgressBar');
 *      some_element.appendChild(pb.element);
 */
Drupal.progressBar = function (id, updateCallback, method, errorCallback) {
  var pb = this;
  this.id = id;
  this.method = method || 'GET';
  this.updateCallback = updateCallback;
  this.errorCallback = errorCallback;

  // The WAI-ARIA setting aria-live="polite" will announce changes after users
  // have completed their current activity and not interrupt the screen reader.
  this.element = $('<div class="progress" aria-live="polite"></div>').attr('id', id);
  this.element.html('<div class="bar"><div class="filled"></div></div>' +
                    '<div class="percentage"></div>' +
                    '<div class="message">&nbsp;</div>');
};

/**
 * Set the percentage and status message for the progressbar.
 */
Drupal.progressBar.prototype.setProgress = function (percentage, message) {
  if (percentage >= 0 && percentage <= 100) {
    $('div.filled', this.element).css('width', percentage + '%');
    $('div.percentage', this.element).html(percentage + '%');
  }
  $('div.message', this.element).html(message);
  if (this.updateCallback) {
    this.updateCallback(percentage, message, this);
  }
};

/**
 * Start monitoring progress via Ajax.
 */
Drupal.progressBar.prototype.startMonitoring = function (uri, delay) {
  this.delay = delay;
  this.uri = uri;
  this.sendPing();
};

/**
 * Stop monitoring progress via Ajax.
 */
Drupal.progressBar.prototype.stopMonitoring = function () {
  clearTimeout(this.timer);
  // This allows monitoring to be stopped from within the callback.
  this.uri = null;
};

/**
 * Request progress data from server.
 */
Drupal.progressBar.prototype.sendPing = function () {
  if (this.timer) {
    clearTimeout(this.timer);
  }
  if (this.uri) {
    var pb = this;
    // When doing a post request, you need non-null data. Otherwise a
    // HTTP 411 or HTTP 406 (with Apache mod_security) error may result.
    $.ajax({
      type: this.method,
      url: this.uri,
      data: '',
      dataType: 'json',
      success: function (progress) {
        // Display errors.
        if (progress.status == 0) {
          pb.displayError(progress.data);
          return;
        }
        // Update display.
        pb.setProgress(progress.percentage, progress.message);
        // Schedule next timer.
        pb.timer = setTimeout(function () { pb.sendPing(); }, pb.delay);
      },
      error: function (xmlhttp) {
        pb.displayError(Drupal.ajaxError(xmlhttp, pb.uri));
      }
    });
  }
};

/**
 * Display errors on the page.
 */
Drupal.progressBar.prototype.displayError = function (string) {
  var error = $('<div class="messages error"></div>').html(string);
  $(this.element).before(error).hide();

  if (this.errorCallback) {
    this.errorCallback(this);
  }
};

})(jQuery);
;
/**
 * Create a degradeable star rating interface out of a simple form structure.
 */
(function($){ // Create local scope.

Drupal.ajax.prototype.commands.fivestarUpdate = function (ajax, response, status) {
  response.selector = $('.fivestar-form-item', ajax.element.form);
  ajax.commands.insert(ajax, response, status);
};

})(jQuery);
;
/**
 * Create a degradeable star rating interface out of a simple form structure.
 *
 * Originally based on the Star Rating jQuery plugin by Wil Stuckey:
 * http://sandbox.wilstuckey.com/jquery-ratings/
 */
(function($){ // Create local scope.

Drupal.behaviors.fivestar = {
  attach: function (context) {
    $('div.fivestar-form-item').once('fivestar', function() {
      var $this = $(this);
      var $container = $('<div class="fivestar-widget clearfix"></div>');
      var $select = $('select', $this);

      // Setup the cancel button
      var $cancel = $('option[value="0"]', $this);
      if ($cancel.length) {
        $('<div class="cancel"><a href="#0" title="' + $cancel.text() + '">' + $cancel.text() + '</a></div>')
          .appendTo($container);
      }

      // Setup the rating buttons
      var $options = $('option', $this).not('[value="-"], [value="0"]');
      var index = -1;
      $options.each(function(i, element) {
        var classes = 'star-' + (i+1);
        classes += (i + 1) % 2 == 0 ? ' even' : ' odd';
        classes += i == 0 ? ' star-first' : '';
        classes += i + 1 == $options.length ? ' star-last' : '';
        $('<div class="star"><a href="#' + element.value + '" title="' + element.text + '">' + element.text + '</a></div>')
          .addClass(classes)
          .appendTo($container);
        if (element.value == $select.val()) {
          index = i + 1;
        }
      });

      $container.find('.star:lt(' + index + ')').addClass('on');
      $container.addClass('fivestar-widget-' + ($options.length));
      $container.find('a')
        .bind('click', $this, Drupal.behaviors.fivestar.rate)
        .bind('mouseover', $this, Drupal.behaviors.fivestar.hover);

      $container.bind('mouseover mouseout', $this, Drupal.behaviors.fivestar.hover);

      // Attach the new widget and hide the existing widget.
      $select.after($container).css('display', 'none');
    });
  },
  rate: function(event) {
    var $this = $(this);
    var $widget = event.data;
    var value = this.hash.replace('#', '');
    $('select', $widget).val(value).change();
    var $this_star = $this.closest('.star');
    $this_star.prevAll('.star').andSelf().addClass('on');
    $this_star.nextAll('.star').removeClass('on');
    event.preventDefault();
  },
  hover: function(event) {
    var $this = $(this);
    var $widget = event.data;
    var $target = $(event.target);
    var $stars = $('.star', $this);

    if (event.type == 'mouseover') {
      var index = $stars.index($target.parent());
      $stars.each(function(i, element) {
        if (i <= index) {
          $(element).addClass('hover');
        } else {
          $(element).removeClass('hover');
        }
      });
    } else {
      $stars.removeClass('hover');
    }
  }
};

})(jQuery);
;
(function($){
Drupal.behaviors.contextReactionBlock = {attach: function(context) {
  $('form.context-editor:not(.context-block-processed)')
    .addClass('context-block-processed')
    .each(function() {
      var id = $(this).attr('id');
      Drupal.contextBlockEditor = Drupal.contextBlockEditor || {};
      $(this).bind('init.pageEditor', function(event) {
        Drupal.contextBlockEditor[id] = new DrupalContextBlockEditor($(this));
      });
      $(this).bind('start.pageEditor', function(event, context) {
        // Fallback to first context if param is empty.
        if (!context) {
          context = $(this).data('defaultContext');
        }
        Drupal.contextBlockEditor[id].editStart($(this), context);
      });
      $(this).bind('end.pageEditor', function(event) {
        Drupal.contextBlockEditor[id].editFinish();
      });
    });

  //
  // Admin Form =======================================================
  //
  // ContextBlockForm: Init.
  $('#context-blockform:not(.processed)').each(function() {
    $(this).addClass('processed');
    Drupal.contextBlockForm = new DrupalContextBlockForm($(this));
    Drupal.contextBlockForm.setState();
  });

  // ContextBlockForm: Attach block removal handlers.
  // Lives in behaviors as it may be required for attachment to new DOM elements.
  $('#context-blockform a.remove:not(.processed)').each(function() {
    $(this).addClass('processed');
    $(this).click(function() {
      $(this).parents('tr').eq(0).remove();
      Drupal.contextBlockForm.setState();
      return false;
    });
  });
}};

/**
 * Context block form. Default form for editing context block reactions.
 */
DrupalContextBlockForm = function(blockForm) {
  this.state = {};

  this.setState = function() {
    $('table.context-blockform-region', blockForm).each(function() {
      var region = $(this).attr('id').split('context-blockform-region-')[1];
      var blocks = [];
      $('tr', $(this)).each(function() {
        var bid = $(this).attr('id');
        var weight = $(this).find('select').val();
        blocks.push({'bid' : bid, 'weight' : weight});
      });
      Drupal.contextBlockForm.state[region] = blocks;
    });

    // Serialize here and set form element value.
    $('form input.context-blockform-state').val(JSON.stringify(this.state));

    // Hide enabled blocks from selector that are used
    $('table.context-blockform-region tr').each(function() {
      var bid = $(this).attr('id');
      $('div.context-blockform-selector input[value='+bid+']').parents('div.form-item').eq(0).hide();
    });
    // Show blocks in selector that are unused
    $('div.context-blockform-selector input').each(function() {
      var bid = $(this).val();
      if ($('table.context-blockform-region tr#'+bid).size() === 0) {
        $(this).parents('div.form-item').eq(0).show();
      }
    });
  };

  // make sure we update the state right before submits, this takes care of an
  // apparent race condition between saving the state and the weights getting set
  // by tabledrag
  $('#ctools-export-ui-edit-item-form').submit(function() { Drupal.contextBlockForm.setState(); });

  // Tabledrag
  // Add additional handlers to update our blocks.
  $.each(Drupal.settings.tableDrag, function(base) {
    var table = $('#' + base + ':not(.processed)', blockForm);
    if (table && table.is('.context-blockform-region')) {
      table.addClass('processed');
      table.bind('mouseup', function(event) {
        Drupal.contextBlockForm.setState();
        return;
      });
    }
  });

  // Add blocks to a region
  $('td.blocks a', blockForm).each(function() {
    $(this).click(function() {
      var region = $(this).attr('href').split('#')[1];
      var selected = $("div.context-blockform-selector input:checked");
      if (selected.size() > 0) {
        selected.each(function() {
          // create new block markup
          var block = document.createElement('tr');
          var text = $(this).parents('div.form-item').eq(0).hide().children('label').text();
          var select = '<div class="form-item form-type-select"><select class="tabledrag-hide form-select">';
          var i;
          for (i = -10; i < 10; ++i) {
            select += '<option>' + i + '</option>';
          }
          select += '</select></div>';
          $(block).attr('id', $(this).attr('value')).addClass('draggable');
          $(block).html("<td>"+ text + "</td><td>" + select + "</td><td><a href='' class='remove'>X</a></td>");

          // add block item to region
          var base = "context-blockform-region-"+ region;
          Drupal.tableDrag[base].makeDraggable(block);
          $('table#'+base).append(block);
          if ($.cookie('Drupal.tableDrag.showWeight') == 1) {
            $('table#'+base).find('.tabledrag-hide').css('display', '');
            $('table#'+base).find('.tabledrag-handle').css('display', 'none');
          }
          else {
            $('table#'+base).find('.tabledrag-hide').css('display', 'none');
            $('table#'+base).find('.tabledrag-handle').css('display', '');
          }
          Drupal.attachBehaviors($('table#'+base));

          Drupal.contextBlockForm.setState();
          $(this).removeAttr('checked');
        });
      }
      return false;
    });
  });
};

/**
 * Context block editor. AHAH editor for live block reaction editing.
 */
DrupalContextBlockEditor = function(editor) {
  this.editor = editor;
  this.state = {};
  this.blocks = {};
  this.regions = {};

  // Category selector handler.
  // Also set to "Choose a category" option as browsers can retain
  // form values from previous page load.
  $('select.context-block-browser-categories', editor).change(function() {
    var category = $(this).val();
    var params = {
      containment: 'document',
      revert: true,
      dropOnEmpty: true,
      placeholder: 'draggable-placeholder',
      forcePlaceholderSize: true,
      helper: 'clone',
      appendTo: 'body',
      connectWith: ($.ui.version === '1.6') ? ['.ui-sortable'] : '.ui-sortable'
    };
    $('div.category', editor).hide().sortable('destroy');
    $('div.category-'+category, editor).show().sortable(params);
  });
  $('select.context-block-browser-categories', editor).val(0).change();

  return this;
};

DrupalContextBlockEditor.prototype.initBlocks = function(blocks) {
  var self = this;
  this.blocks = blocks;
  blocks.each(function() {
    $(this).addClass('draggable');
    $(this).prepend($('<a class="context-block-handle"></a>'));
    $(this).prepend($('<a class="context-block-remove"></a>').click(function() {
      $(this).parent ('.block').eq(0).fadeOut('medium', function() {
        $(this).remove();
        self.updateBlocks();
      });
      return false;
    }));
  });
};

DrupalContextBlockEditor.prototype.initRegions = function(regions) {
  this.regions = regions;
};

/**
  * Update UI to match the current block states.
  */
DrupalContextBlockEditor.prototype.updateBlocks = function() {
  var browser = $('div.context-block-browser');

  // For all enabled blocks, mark corresponding addables as having been added.
  $('.block, .admin-block').each(function() {
    var bid = $(this).attr('id').split('block-')[1]; // Ugh.
    $('#context-block-addable-'+bid, browser).draggable('disable').addClass('context-block-added').removeClass('context-block-addable');
  });
  // For all hidden addables with no corresponding blocks, mark as addable.
  $('.context-block-item', browser).each(function() {
    var bid = $(this).attr('id').split('context-block-addable-')[1];
    if ($('#block-'+bid).size() === 0) {
      $(this).draggable('enable').removeClass('context-block-added').addClass('context-block-addable');
    }
  });

  // Mark empty regions.
  $(this.regions).each(function() {
    if ($('.block:has(a.context-block)', this).size() > 0) {
      $(this).removeClass('context-block-region-empty');
    }
    else {
      $(this).addClass('context-block-region-empty');
    }
  });
};

/**
  * Live update a region.
  */
DrupalContextBlockEditor.prototype.updateRegion = function(event, ui, region, op) {
  switch (op) {
    case 'over':
      $(region).removeClass('context-block-region-empty');
      break;
    case 'out':
      if (
        // jQuery UI 1.8
        $('.draggable-placeholder', region).size() === 1 &&
        $('.block:has(a.context-block)', region).size() == 0
        // jQuery UI 1.6
        // $('div.draggable-placeholder', region).size() === 0 &&
        // $('div.block:has(a.context-block)', region).size() == 1 &&
        // $('div.block:has(a.context-block)', region).attr('id') == ui.item.attr('id')
      ) {
        $(region).addClass('context-block-region-empty');
      }
      break;
  }
};

/**
  * Remove script elements while dragging & dropping.
  */
DrupalContextBlockEditor.prototype.scriptFix = function(event, ui, editor, context) {
  if ($('script', ui.item)) {
    var placeholder = $(Drupal.settings.contextBlockEditor.scriptPlaceholder);
    var label = $('div.handle label', ui.item).text();
    placeholder.children('strong').html(label);
    $('script', ui.item).parent().empty().append(placeholder);
  }
};

/**
  * Add a block to a region through an AHAH load of the block contents.
  */
DrupalContextBlockEditor.prototype.addBlock = function(event, ui, editor, context) {
  var self = this;
  if (ui.item.is('.context-block-addable')) {
    var bid = ui.item.attr('id').split('context-block-addable-')[1];

    // Construct query params for our AJAX block request.
    var params = Drupal.settings.contextBlockEditor.params;
    params.context_block = bid + ',' + context;

    // Replace item with loading block.
    var blockLoading = $('<div class="context-block-item context-block-loading"><span class="icon"></span></div>');
    ui.item.addClass('context-block-added');
    ui.item.after(blockLoading);
    ui.sender.append(ui.item);

    $.getJSON(Drupal.settings.contextBlockEditor.path, params, function(data) {
      if (data.status) {
        var newBlock = $(data.block);
        if ($('script', newBlock)) {
          $('script', newBlock).remove();
        }
        blockLoading.fadeOut(function() {
          $(this).replaceWith(newBlock);
          self.initBlocks(newBlock);
          self.updateBlocks();
          Drupal.attachBehaviors();
        });
      }
      else {
        blockLoading.fadeOut(function() { $(this).remove(); });
      }
    });
  }
  else if (ui.item.is(':has(a.context-block)')) {
    self.updateBlocks();
  }
};

/**
  * Update form hidden field with JSON representation of current block visibility states.
  */
DrupalContextBlockEditor.prototype.setState = function() {
  var self = this;

  $(this.regions).each(function() {
    var region = $('a.context-block-region', this).attr('id').split('context-block-region-')[1];
    var blocks = [];
    $('a.context-block', $(this)).each(function() {
      if ($(this).attr('class').indexOf('edit-') != -1) {
        var bid = $(this).attr('id').split('context-block-')[1];
        var context = $(this).attr('class').split('edit-')[1].split(' ')[0];
        context = context ? context : 0;
        var block = {'bid': bid, 'context': context};
        blocks.push(block);
      }
    });
    self.state[region] = blocks;
  });

  // Serialize here and set form element value.
  $('input.context-block-editor-state', this.editor).val(JSON.stringify(this.state));
};

/**
  * Disable text selection.
  */
DrupalContextBlockEditor.prototype.disableTextSelect = function() {
  if ($.browser.safari) {
    $('.block:has(a.context-block):not(:has(input,textarea))').css('WebkitUserSelect','none');
  }
  else if ($.browser.mozilla) {
    $('.block:has(a.context-block):not(:has(input,textarea))').css('MozUserSelect','none');
  }
  else if ($.browser.msie) {
    $('.block:has(a.context-block):not(:has(input,textarea))').bind('selectstart.contextBlockEditor', function() { return false; });
  }
  else {
    $(this).bind('mousedown.contextBlockEditor', function() { return false; });
  }
};

/**
  * Enable text selection.
  */
DrupalContextBlockEditor.prototype.enableTextSelect = function() {
  if ($.browser.safari) {
    $('*').css('WebkitUserSelect','');
  }
  else if ($.browser.mozilla) {
    $('*').css('MozUserSelect','');
  }
  else if ($.browser.msie) {
    $('*').unbind('selectstart.contextBlockEditor');
  }
  else {
    $(this).unbind('mousedown.contextBlockEditor');
  }
};

/**
  * Start editing. Attach handlers, begin draggable/sortables.
  */
DrupalContextBlockEditor.prototype.editStart = function(editor, context) {
  var self = this;

  // This is redundant to the start handler found in context_ui.js.
  // However it's necessary that we trigger this class addition before
  // we call .sortable() as the empty regions need to be visible.
  $(document.body).addClass('context-editing');
  this.editor.addClass('context-editing');

  this.disableTextSelect();
  this.initBlocks($('.block:has(a.context-block.edit-'+context+')'));
  this.initRegions($('a.context-block-region').parent());
  this.updateBlocks();

  // First pass, enable sortables on all regions.
  $(this.regions).each(function() {
    var region = $(this);
    var params = {
      containment: 'document',
      revert: true,
      dropOnEmpty: true,
      placeholder: 'draggable-placeholder',
      forcePlaceholderSize: true,
      items: '> .block:has(a.context-block.editable)',
      handle: 'a.context-block-handle',
      start: function(event, ui) { self.scriptFix(event, ui, editor, context); },
      stop: function(event, ui) { self.addBlock(event, ui, editor, context); },
      receive: function(event, ui) { self.addBlock(event, ui, editor, context); },
      over: function(event, ui) { self.updateRegion(event, ui, region, 'over'); },
      out: function(event, ui) { self.updateRegion(event, ui, region, 'out'); }
    };
    region.sortable(params);
  });

  // Second pass, hook up all regions via connectWith to each other.
  $(this.regions).each(function() {
    $(this).sortable('option', 'connectWith', ['.ui-sortable']);
  });

  // Terrible, terrible workaround for parentoffset issue in Safari.
  // The proper fix for this issue has been committed to jQuery UI, but was
  // not included in the 1.6 release. Therefore, we do a browser agent hack
  // to ensure that Safari users are covered by the offset fix found here:
  // http://dev.jqueryui.com/changeset/2073.
  if ($.ui.version === '1.6' && $.browser.safari) {
    $.browser.mozilla = true;
  }
};

/**
  * Finish editing. Remove handlers.
  */
DrupalContextBlockEditor.prototype.editFinish = function() {
  this.editor.removeClass('context-editing');
  this.enableTextSelect();

  // Remove UI elements.
  $(this.blocks).each(function() {
    $('a.context-block-handle, a.context-block-remove', this).remove();
    $(this).removeClass('draggable');
  });
  this.regions.sortable('destroy');

  this.setState();

  // Unhack the user agent.
  if ($.ui.version === '1.6' && $.browser.safari) {
    $.browser.mozilla = false;
  }
};

})(jQuery);
;
(function ($) {

/**
 * Toggle the visibility of a fieldset using smooth animations.
 */
Drupal.toggleFieldset = function (fieldset) {
  var $fieldset = $(fieldset);
  if ($fieldset.is('.collapsed')) {
    var $content = $('> .fieldset-wrapper', fieldset).hide();
    $fieldset
      .removeClass('collapsed')
      .trigger({ type: 'collapsed', value: false })
      .find('> legend span.fieldset-legend-prefix').html(Drupal.t('Hide'));
    $content.slideDown({
      duration: 'fast',
      easing: 'linear',
      complete: function () {
        Drupal.collapseScrollIntoView(fieldset);
        fieldset.animating = false;
      },
      step: function () {
        // Scroll the fieldset into view.
        Drupal.collapseScrollIntoView(fieldset);
      }
    });
  }
  else {
    $fieldset.trigger({ type: 'collapsed', value: true });
    $('> .fieldset-wrapper', fieldset).slideUp('fast', function () {
      $fieldset
        .addClass('collapsed')
        .find('> legend span.fieldset-legend-prefix').html(Drupal.t('Show'));
      fieldset.animating = false;
    });
  }
};

/**
 * Scroll a given fieldset into view as much as possible.
 */
Drupal.collapseScrollIntoView = function (node) {
  var h = document.documentElement.clientHeight || document.body.clientHeight || 0;
  var offset = document.documentElement.scrollTop || document.body.scrollTop || 0;
  var posY = $(node).offset().top;
  var fudge = 55;
  if (posY + node.offsetHeight + fudge > h + offset) {
    if (node.offsetHeight > h) {
      window.scrollTo(0, posY);
    }
    else {
      window.scrollTo(0, posY + node.offsetHeight - h + fudge);
    }
  }
};

Drupal.behaviors.collapse = {
  attach: function (context, settings) {
    $('fieldset.collapsible', context).once('collapse', function () {
      var $fieldset = $(this);
      // Expand fieldset if there are errors inside, or if it contains an
      // element that is targeted by the uri fragment identifier. 
      var anchor = location.hash && location.hash != '#' ? ', ' + location.hash : '';
      if ($('.error' + anchor, $fieldset).length) {
        $fieldset.removeClass('collapsed');
      }

      var summary = $('<span class="summary"></span>');
      $fieldset.
        bind('summaryUpdated', function () {
          var text = $.trim($fieldset.drupalGetSummary());
          summary.html(text ? ' (' + text + ')' : '');
        })
        .trigger('summaryUpdated');

      // Turn the legend into a clickable link, but retain span.fieldset-legend
      // for CSS positioning.
      var $legend = $('> legend .fieldset-legend', this);

      $('<span class="fieldset-legend-prefix element-invisible"></span>')
        .append($fieldset.hasClass('collapsed') ? Drupal.t('Show') : Drupal.t('Hide'))
        .prependTo($legend)
        .after(' ');

      // .wrapInner() does not retain bound events.
      var $link = $('<a class="fieldset-title" href="#"></a>')
        .prepend($legend.contents())
        .appendTo($legend)
        .click(function () {
          var fieldset = $fieldset.get(0);
          // Don't animate multiple times.
          if (!fieldset.animating) {
            fieldset.animating = true;
            Drupal.toggleFieldset(fieldset);
          }
          return false;
        });

      $legend.append(summary);
    });
  }
};

})(jQuery);
;
(function ($) {

Drupal.toolbar = Drupal.toolbar || {};

/**
 * Attach toggling behavior and notify the overlay of the toolbar.
 */
Drupal.behaviors.toolbar = {
  attach: function(context) {

    // Set the initial state of the toolbar.
    $('#toolbar', context).once('toolbar', Drupal.toolbar.init);

    // Toggling toolbar drawer.
    $('#toolbar a.toggle', context).once('toolbar-toggle').click(function(e) {
      Drupal.toolbar.toggle();
      // Allow resize event handlers to recalculate sizes/positions.
      $(window).triggerHandler('resize');
      return false;
    });
  }
};

/**
 * Retrieve last saved cookie settings and set up the initial toolbar state.
 */
Drupal.toolbar.init = function() {
  // Retrieve the collapsed status from a stored cookie.
  var collapsed = $.cookie('Drupal.toolbar.collapsed');

  // Expand or collapse the toolbar based on the cookie value.
  if (collapsed == 1) {
    Drupal.toolbar.collapse();
  }
  else {
    Drupal.toolbar.expand();
  }
};

/**
 * Collapse the toolbar.
 */
Drupal.toolbar.collapse = function() {
  var toggle_text = Drupal.t('Show shortcuts');
  $('#toolbar div.toolbar-drawer').addClass('collapsed');
  $('#toolbar a.toggle')
    .removeClass('toggle-active')
    .attr('title',  toggle_text)
    .html(toggle_text);
  $('body').removeClass('toolbar-drawer').css('paddingTop', Drupal.toolbar.height());
  $.cookie(
    'Drupal.toolbar.collapsed',
    1,
    {
      path: Drupal.settings.basePath,
      // The cookie should "never" expire.
      expires: 36500
    }
  );
};

/**
 * Expand the toolbar.
 */
Drupal.toolbar.expand = function() {
  var toggle_text = Drupal.t('Hide shortcuts');
  $('#toolbar div.toolbar-drawer').removeClass('collapsed');
  $('#toolbar a.toggle')
    .addClass('toggle-active')
    .attr('title',  toggle_text)
    .html(toggle_text);
  $('body').addClass('toolbar-drawer').css('paddingTop', Drupal.toolbar.height());
  $.cookie(
    'Drupal.toolbar.collapsed',
    0,
    {
      path: Drupal.settings.basePath,
      // The cookie should "never" expire.
      expires: 36500
    }
  );
};

/**
 * Toggle the toolbar.
 */
Drupal.toolbar.toggle = function() {
  if ($('#toolbar div.toolbar-drawer').hasClass('collapsed')) {
    Drupal.toolbar.expand();
  }
  else {
    Drupal.toolbar.collapse();
  }
};

Drupal.toolbar.height = function() {
  var height = $('#toolbar').outerHeight();
  // In IE, Shadow filter adds some extra height, so we need to remove it from
  // the returned height.
  if ($('#toolbar').css('filter').match(/DXImageTransform\.Microsoft\.Shadow/)) {
    height -= $('#toolbar').get(0).filters.item("DXImageTransform.Microsoft.Shadow").strength;
  }
  return height;
};

})(jQuery);
;
