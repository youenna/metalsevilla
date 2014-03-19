
/*!
 * jQuery UI 1.8.7
 *
 * Copyright 2010, AUTHORS.txt (http://jqueryui.com/about)
 * Dual licensed under the MIT or GPL Version 2 licenses.
 * http://jquery.org/license
 *
 * http://docs.jquery.com/UI
 */
(function(c,j){function k(a){return!c(a).parents().andSelf().filter(function(){return c.curCSS(this,"visibility")==="hidden"||c.expr.filters.hidden(this)}).length}c.ui=c.ui||{};if(!c.ui.version){c.extend(c.ui,{version:"1.8.7",keyCode:{ALT:18,BACKSPACE:8,CAPS_LOCK:20,COMMA:188,COMMAND:91,COMMAND_LEFT:91,COMMAND_RIGHT:93,CONTROL:17,DELETE:46,DOWN:40,END:35,ENTER:13,ESCAPE:27,HOME:36,INSERT:45,LEFT:37,MENU:93,NUMPAD_ADD:107,NUMPAD_DECIMAL:110,NUMPAD_DIVIDE:111,NUMPAD_ENTER:108,NUMPAD_MULTIPLY:106,
NUMPAD_SUBTRACT:109,PAGE_DOWN:34,PAGE_UP:33,PERIOD:190,RIGHT:39,SHIFT:16,SPACE:32,TAB:9,UP:38,WINDOWS:91}});c.fn.extend({_focus:c.fn.focus,focus:function(a,b){return typeof a==="number"?this.each(function(){var d=this;setTimeout(function(){c(d).focus();b&&b.call(d)},a)}):this._focus.apply(this,arguments)},scrollParent:function(){var a;a=c.browser.msie&&/(static|relative)/.test(this.css("position"))||/absolute/.test(this.css("position"))?this.parents().filter(function(){return/(relative|absolute|fixed)/.test(c.curCSS(this,
"position",1))&&/(auto|scroll)/.test(c.curCSS(this,"overflow",1)+c.curCSS(this,"overflow-y",1)+c.curCSS(this,"overflow-x",1))}).eq(0):this.parents().filter(function(){return/(auto|scroll)/.test(c.curCSS(this,"overflow",1)+c.curCSS(this,"overflow-y",1)+c.curCSS(this,"overflow-x",1))}).eq(0);return/fixed/.test(this.css("position"))||!a.length?c(document):a},zIndex:function(a){if(a!==j)return this.css("zIndex",a);if(this.length){a=c(this[0]);for(var b;a.length&&a[0]!==document;){b=a.css("position");
if(b==="absolute"||b==="relative"||b==="fixed"){b=parseInt(a.css("zIndex"),10);if(!isNaN(b)&&b!==0)return b}a=a.parent()}}return 0},disableSelection:function(){return this.bind((c.support.selectstart?"selectstart":"mousedown")+".ui-disableSelection",function(a){a.preventDefault()})},enableSelection:function(){return this.unbind(".ui-disableSelection")}});c.each(["Width","Height"],function(a,b){function d(f,g,l,m){c.each(e,function(){g-=parseFloat(c.curCSS(f,"padding"+this,true))||0;if(l)g-=parseFloat(c.curCSS(f,
"border"+this+"Width",true))||0;if(m)g-=parseFloat(c.curCSS(f,"margin"+this,true))||0});return g}var e=b==="Width"?["Left","Right"]:["Top","Bottom"],h=b.toLowerCase(),i={innerWidth:c.fn.innerWidth,innerHeight:c.fn.innerHeight,outerWidth:c.fn.outerWidth,outerHeight:c.fn.outerHeight};c.fn["inner"+b]=function(f){if(f===j)return i["inner"+b].call(this);return this.each(function(){c(this).css(h,d(this,f)+"px")})};c.fn["outer"+b]=function(f,g){if(typeof f!=="number")return i["outer"+b].call(this,f);return this.each(function(){c(this).css(h,
d(this,f,true,g)+"px")})}});c.extend(c.expr[":"],{data:function(a,b,d){return!!c.data(a,d[3])},focusable:function(a){var b=a.nodeName.toLowerCase(),d=c.attr(a,"tabindex");if("area"===b){b=a.parentNode;d=b.name;if(!a.href||!d||b.nodeName.toLowerCase()!=="map")return false;a=c("img[usemap=#"+d+"]")[0];return!!a&&k(a)}return(/input|select|textarea|button|object/.test(b)?!a.disabled:"a"==b?a.href||!isNaN(d):!isNaN(d))&&k(a)},tabbable:function(a){var b=c.attr(a,"tabindex");return(isNaN(b)||b>=0)&&c(a).is(":focusable")}});
c(function(){var a=document.body,b=a.appendChild(b=document.createElement("div"));c.extend(b.style,{minHeight:"100px",height:"auto",padding:0,borderWidth:0});c.support.minHeight=b.offsetHeight===100;c.support.selectstart="onselectstart"in b;a.removeChild(b).style.display="none"});c.extend(c.ui,{plugin:{add:function(a,b,d){a=c.ui[a].prototype;for(var e in d){a.plugins[e]=a.plugins[e]||[];a.plugins[e].push([b,d[e]])}},call:function(a,b,d){if((b=a.plugins[b])&&a.element[0].parentNode)for(var e=0;e<b.length;e++)a.options[b[e][0]]&&
b[e][1].apply(a.element,d)}},contains:function(a,b){return document.compareDocumentPosition?a.compareDocumentPosition(b)&16:a!==b&&a.contains(b)},hasScroll:function(a,b){if(c(a).css("overflow")==="hidden")return false;b=b&&b==="left"?"scrollLeft":"scrollTop";var d=false;if(a[b]>0)return true;a[b]=1;d=a[b]>0;a[b]=0;return d},isOverAxis:function(a,b,d){return a>b&&a<b+d},isOver:function(a,b,d,e,h,i){return c.ui.isOverAxis(a,d,h)&&c.ui.isOverAxis(b,e,i)}})}})(jQuery);
;

/*!
 * jQuery UI Widget 1.8.7
 *
 * Copyright 2010, AUTHORS.txt (http://jqueryui.com/about)
 * Dual licensed under the MIT or GPL Version 2 licenses.
 * http://jquery.org/license
 *
 * http://docs.jquery.com/UI/Widget
 */
(function(b,j){if(b.cleanData){var k=b.cleanData;b.cleanData=function(a){for(var c=0,d;(d=a[c])!=null;c++)b(d).triggerHandler("remove");k(a)}}else{var l=b.fn.remove;b.fn.remove=function(a,c){return this.each(function(){if(!c)if(!a||b.filter(a,[this]).length)b("*",this).add([this]).each(function(){b(this).triggerHandler("remove")});return l.call(b(this),a,c)})}}b.widget=function(a,c,d){var e=a.split(".")[0],f;a=a.split(".")[1];f=e+"-"+a;if(!d){d=c;c=b.Widget}b.expr[":"][f]=function(h){return!!b.data(h,
a)};b[e]=b[e]||{};b[e][a]=function(h,g){arguments.length&&this._createWidget(h,g)};c=new c;c.options=b.extend(true,{},c.options);b[e][a].prototype=b.extend(true,c,{namespace:e,widgetName:a,widgetEventPrefix:b[e][a].prototype.widgetEventPrefix||a,widgetBaseClass:f},d);b.widget.bridge(a,b[e][a])};b.widget.bridge=function(a,c){b.fn[a]=function(d){var e=typeof d==="string",f=Array.prototype.slice.call(arguments,1),h=this;d=!e&&f.length?b.extend.apply(null,[true,d].concat(f)):d;if(e&&d.charAt(0)==="_")return h;
e?this.each(function(){var g=b.data(this,a),i=g&&b.isFunction(g[d])?g[d].apply(g,f):g;if(i!==g&&i!==j){h=i;return false}}):this.each(function(){var g=b.data(this,a);g?g.option(d||{})._init():b.data(this,a,new c(d,this))});return h}};b.Widget=function(a,c){arguments.length&&this._createWidget(a,c)};b.Widget.prototype={widgetName:"widget",widgetEventPrefix:"",options:{disabled:false},_createWidget:function(a,c){b.data(c,this.widgetName,this);this.element=b(c);this.options=b.extend(true,{},this.options,
this._getCreateOptions(),a);var d=this;this.element.bind("remove."+this.widgetName,function(){d.destroy()});this._create();this._trigger("create");this._init()},_getCreateOptions:function(){return b.metadata&&b.metadata.get(this.element[0])[this.widgetName]},_create:function(){},_init:function(){},destroy:function(){this.element.unbind("."+this.widgetName).removeData(this.widgetName);this.widget().unbind("."+this.widgetName).removeAttr("aria-disabled").removeClass(this.widgetBaseClass+"-disabled ui-state-disabled")},
widget:function(){return this.element},option:function(a,c){var d=a;if(arguments.length===0)return b.extend({},this.options);if(typeof a==="string"){if(c===j)return this.options[a];d={};d[a]=c}this._setOptions(d);return this},_setOptions:function(a){var c=this;b.each(a,function(d,e){c._setOption(d,e)});return this},_setOption:function(a,c){this.options[a]=c;if(a==="disabled")this.widget()[c?"addClass":"removeClass"](this.widgetBaseClass+"-disabled ui-state-disabled").attr("aria-disabled",c);return this},
enable:function(){return this._setOption("disabled",false)},disable:function(){return this._setOption("disabled",true)},_trigger:function(a,c,d){var e=this.options[a];c=b.Event(c);c.type=(a===this.widgetEventPrefix?a:this.widgetEventPrefix+a).toLowerCase();d=d||{};if(c.originalEvent){a=b.event.props.length;for(var f;a;){f=b.event.props[--a];c[f]=c.originalEvent[f]}}this.element.trigger(c,d);return!(b.isFunction(e)&&e.call(this.element[0],c,d)===false||c.isDefaultPrevented())}}})(jQuery);
;

/*!
 * jQuery UI Mouse 1.8.7
 *
 * Copyright 2010, AUTHORS.txt (http://jqueryui.com/about)
 * Dual licensed under the MIT or GPL Version 2 licenses.
 * http://jquery.org/license
 *
 * http://docs.jquery.com/UI/Mouse
 *
 * Depends:
 *	jquery.ui.widget.js
 */
(function(c){c.widget("ui.mouse",{options:{cancel:":input,option",distance:1,delay:0},_mouseInit:function(){var a=this;this.element.bind("mousedown."+this.widgetName,function(b){return a._mouseDown(b)}).bind("click."+this.widgetName,function(b){if(true===c.data(b.target,a.widgetName+".preventClickEvent")){c.removeData(b.target,a.widgetName+".preventClickEvent");b.stopImmediatePropagation();return false}});this.started=false},_mouseDestroy:function(){this.element.unbind("."+this.widgetName)},_mouseDown:function(a){a.originalEvent=
a.originalEvent||{};if(!a.originalEvent.mouseHandled){this._mouseStarted&&this._mouseUp(a);this._mouseDownEvent=a;var b=this,e=a.which==1,f=typeof this.options.cancel=="string"?c(a.target).parents().add(a.target).filter(this.options.cancel).length:false;if(!e||f||!this._mouseCapture(a))return true;this.mouseDelayMet=!this.options.delay;if(!this.mouseDelayMet)this._mouseDelayTimer=setTimeout(function(){b.mouseDelayMet=true},this.options.delay);if(this._mouseDistanceMet(a)&&this._mouseDelayMet(a)){this._mouseStarted=
this._mouseStart(a)!==false;if(!this._mouseStarted){a.preventDefault();return true}}this._mouseMoveDelegate=function(d){return b._mouseMove(d)};this._mouseUpDelegate=function(d){return b._mouseUp(d)};c(document).bind("mousemove."+this.widgetName,this._mouseMoveDelegate).bind("mouseup."+this.widgetName,this._mouseUpDelegate);a.preventDefault();return a.originalEvent.mouseHandled=true}},_mouseMove:function(a){if(c.browser.msie&&!(document.documentMode>=9)&&!a.button)return this._mouseUp(a);if(this._mouseStarted){this._mouseDrag(a);
return a.preventDefault()}if(this._mouseDistanceMet(a)&&this._mouseDelayMet(a))(this._mouseStarted=this._mouseStart(this._mouseDownEvent,a)!==false)?this._mouseDrag(a):this._mouseUp(a);return!this._mouseStarted},_mouseUp:function(a){c(document).unbind("mousemove."+this.widgetName,this._mouseMoveDelegate).unbind("mouseup."+this.widgetName,this._mouseUpDelegate);if(this._mouseStarted){this._mouseStarted=false;a.target==this._mouseDownEvent.target&&c.data(a.target,this.widgetName+".preventClickEvent",
true);this._mouseStop(a)}return false},_mouseDistanceMet:function(a){return Math.max(Math.abs(this._mouseDownEvent.pageX-a.pageX),Math.abs(this._mouseDownEvent.pageY-a.pageY))>=this.options.distance},_mouseDelayMet:function(){return this.mouseDelayMet},_mouseStart:function(){},_mouseDrag:function(){},_mouseStop:function(){},_mouseCapture:function(){return true}})})(jQuery);
;

/*
 * jQuery UI Draggable 1.8.7
 *
 * Copyright 2010, AUTHORS.txt (http://jqueryui.com/about)
 * Dual licensed under the MIT or GPL Version 2 licenses.
 * http://jquery.org/license
 *
 * http://docs.jquery.com/UI/Draggables
 *
 * Depends:
 *	jquery.ui.core.js
 *	jquery.ui.mouse.js
 *	jquery.ui.widget.js
 */
(function(d){d.widget("ui.draggable",d.ui.mouse,{widgetEventPrefix:"drag",options:{addClasses:true,appendTo:"parent",axis:false,connectToSortable:false,containment:false,cursor:"auto",cursorAt:false,grid:false,handle:false,helper:"original",iframeFix:false,opacity:false,refreshPositions:false,revert:false,revertDuration:500,scope:"default",scroll:true,scrollSensitivity:20,scrollSpeed:20,snap:false,snapMode:"both",snapTolerance:20,stack:false,zIndex:false},_create:function(){if(this.options.helper==
"original"&&!/^(?:r|a|f)/.test(this.element.css("position")))this.element[0].style.position="relative";this.options.addClasses&&this.element.addClass("ui-draggable");this.options.disabled&&this.element.addClass("ui-draggable-disabled");this._mouseInit()},destroy:function(){if(this.element.data("draggable")){this.element.removeData("draggable").unbind(".draggable").removeClass("ui-draggable ui-draggable-dragging ui-draggable-disabled");this._mouseDestroy();return this}},_mouseCapture:function(a){var b=
this.options;if(this.helper||b.disabled||d(a.target).is(".ui-resizable-handle"))return false;this.handle=this._getHandle(a);if(!this.handle)return false;return true},_mouseStart:function(a){var b=this.options;this.helper=this._createHelper(a);this._cacheHelperProportions();if(d.ui.ddmanager)d.ui.ddmanager.current=this;this._cacheMargins();this.cssPosition=this.helper.css("position");this.scrollParent=this.helper.scrollParent();this.offset=this.positionAbs=this.element.offset();this.offset={top:this.offset.top-
this.margins.top,left:this.offset.left-this.margins.left};d.extend(this.offset,{click:{left:a.pageX-this.offset.left,top:a.pageY-this.offset.top},parent:this._getParentOffset(),relative:this._getRelativeOffset()});this.originalPosition=this.position=this._generatePosition(a);this.originalPageX=a.pageX;this.originalPageY=a.pageY;b.cursorAt&&this._adjustOffsetFromHelper(b.cursorAt);b.containment&&this._setContainment();if(this._trigger("start",a)===false){this._clear();return false}this._cacheHelperProportions();
d.ui.ddmanager&&!b.dropBehaviour&&d.ui.ddmanager.prepareOffsets(this,a);this.helper.addClass("ui-draggable-dragging");this._mouseDrag(a,true);return true},_mouseDrag:function(a,b){this.position=this._generatePosition(a);this.positionAbs=this._convertPositionTo("absolute");if(!b){b=this._uiHash();if(this._trigger("drag",a,b)===false){this._mouseUp({});return false}this.position=b.position}if(!this.options.axis||this.options.axis!="y")this.helper[0].style.left=this.position.left+"px";if(!this.options.axis||
this.options.axis!="x")this.helper[0].style.top=this.position.top+"px";d.ui.ddmanager&&d.ui.ddmanager.drag(this,a);return false},_mouseStop:function(a){var b=false;if(d.ui.ddmanager&&!this.options.dropBehaviour)b=d.ui.ddmanager.drop(this,a);if(this.dropped){b=this.dropped;this.dropped=false}if(!this.element[0]||!this.element[0].parentNode)return false;if(this.options.revert=="invalid"&&!b||this.options.revert=="valid"&&b||this.options.revert===true||d.isFunction(this.options.revert)&&this.options.revert.call(this.element,
b)){var c=this;d(this.helper).animate(this.originalPosition,parseInt(this.options.revertDuration,10),function(){c._trigger("stop",a)!==false&&c._clear()})}else this._trigger("stop",a)!==false&&this._clear();return false},cancel:function(){this.helper.is(".ui-draggable-dragging")?this._mouseUp({}):this._clear();return this},_getHandle:function(a){var b=!this.options.handle||!d(this.options.handle,this.element).length?true:false;d(this.options.handle,this.element).find("*").andSelf().each(function(){if(this==
a.target)b=true});return b},_createHelper:function(a){var b=this.options;a=d.isFunction(b.helper)?d(b.helper.apply(this.element[0],[a])):b.helper=="clone"?this.element.clone():this.element;a.parents("body").length||a.appendTo(b.appendTo=="parent"?this.element[0].parentNode:b.appendTo);a[0]!=this.element[0]&&!/(fixed|absolute)/.test(a.css("position"))&&a.css("position","absolute");return a},_adjustOffsetFromHelper:function(a){if(typeof a=="string")a=a.split(" ");if(d.isArray(a))a={left:+a[0],top:+a[1]||
0};if("left"in a)this.offset.click.left=a.left+this.margins.left;if("right"in a)this.offset.click.left=this.helperProportions.width-a.right+this.margins.left;if("top"in a)this.offset.click.top=a.top+this.margins.top;if("bottom"in a)this.offset.click.top=this.helperProportions.height-a.bottom+this.margins.top},_getParentOffset:function(){this.offsetParent=this.helper.offsetParent();var a=this.offsetParent.offset();if(this.cssPosition=="absolute"&&this.scrollParent[0]!=document&&d.ui.contains(this.scrollParent[0],
this.offsetParent[0])){a.left+=this.scrollParent.scrollLeft();a.top+=this.scrollParent.scrollTop()}if(this.offsetParent[0]==document.body||this.offsetParent[0].tagName&&this.offsetParent[0].tagName.toLowerCase()=="html"&&d.browser.msie)a={top:0,left:0};return{top:a.top+(parseInt(this.offsetParent.css("borderTopWidth"),10)||0),left:a.left+(parseInt(this.offsetParent.css("borderLeftWidth"),10)||0)}},_getRelativeOffset:function(){if(this.cssPosition=="relative"){var a=this.element.position();return{top:a.top-
(parseInt(this.helper.css("top"),10)||0)+this.scrollParent.scrollTop(),left:a.left-(parseInt(this.helper.css("left"),10)||0)+this.scrollParent.scrollLeft()}}else return{top:0,left:0}},_cacheMargins:function(){this.margins={left:parseInt(this.element.css("marginLeft"),10)||0,top:parseInt(this.element.css("marginTop"),10)||0}},_cacheHelperProportions:function(){this.helperProportions={width:this.helper.outerWidth(),height:this.helper.outerHeight()}},_setContainment:function(){var a=this.options;if(a.containment==
"parent")a.containment=this.helper[0].parentNode;if(a.containment=="document"||a.containment=="window")this.containment=[(a.containment=="document"?0:d(window).scrollLeft())-this.offset.relative.left-this.offset.parent.left,(a.containment=="document"?0:d(window).scrollTop())-this.offset.relative.top-this.offset.parent.top,(a.containment=="document"?0:d(window).scrollLeft())+d(a.containment=="document"?document:window).width()-this.helperProportions.width-this.margins.left,(a.containment=="document"?
0:d(window).scrollTop())+(d(a.containment=="document"?document:window).height()||document.body.parentNode.scrollHeight)-this.helperProportions.height-this.margins.top];if(!/^(document|window|parent)$/.test(a.containment)&&a.containment.constructor!=Array){var b=d(a.containment)[0];if(b){a=d(a.containment).offset();var c=d(b).css("overflow")!="hidden";this.containment=[a.left+(parseInt(d(b).css("borderLeftWidth"),10)||0)+(parseInt(d(b).css("paddingLeft"),10)||0)-this.margins.left,a.top+(parseInt(d(b).css("borderTopWidth"),
10)||0)+(parseInt(d(b).css("paddingTop"),10)||0)-this.margins.top,a.left+(c?Math.max(b.scrollWidth,b.offsetWidth):b.offsetWidth)-(parseInt(d(b).css("borderLeftWidth"),10)||0)-(parseInt(d(b).css("paddingRight"),10)||0)-this.helperProportions.width-this.margins.left,a.top+(c?Math.max(b.scrollHeight,b.offsetHeight):b.offsetHeight)-(parseInt(d(b).css("borderTopWidth"),10)||0)-(parseInt(d(b).css("paddingBottom"),10)||0)-this.helperProportions.height-this.margins.top]}}else if(a.containment.constructor==
Array)this.containment=a.containment},_convertPositionTo:function(a,b){if(!b)b=this.position;a=a=="absolute"?1:-1;var c=this.cssPosition=="absolute"&&!(this.scrollParent[0]!=document&&d.ui.contains(this.scrollParent[0],this.offsetParent[0]))?this.offsetParent:this.scrollParent,f=/(html|body)/i.test(c[0].tagName);return{top:b.top+this.offset.relative.top*a+this.offset.parent.top*a-(d.browser.safari&&d.browser.version<526&&this.cssPosition=="fixed"?0:(this.cssPosition=="fixed"?-this.scrollParent.scrollTop():
f?0:c.scrollTop())*a),left:b.left+this.offset.relative.left*a+this.offset.parent.left*a-(d.browser.safari&&d.browser.version<526&&this.cssPosition=="fixed"?0:(this.cssPosition=="fixed"?-this.scrollParent.scrollLeft():f?0:c.scrollLeft())*a)}},_generatePosition:function(a){var b=this.options,c=this.cssPosition=="absolute"&&!(this.scrollParent[0]!=document&&d.ui.contains(this.scrollParent[0],this.offsetParent[0]))?this.offsetParent:this.scrollParent,f=/(html|body)/i.test(c[0].tagName),e=a.pageX,g=a.pageY;
if(this.originalPosition){if(this.containment){if(a.pageX-this.offset.click.left<this.containment[0])e=this.containment[0]+this.offset.click.left;if(a.pageY-this.offset.click.top<this.containment[1])g=this.containment[1]+this.offset.click.top;if(a.pageX-this.offset.click.left>this.containment[2])e=this.containment[2]+this.offset.click.left;if(a.pageY-this.offset.click.top>this.containment[3])g=this.containment[3]+this.offset.click.top}if(b.grid){g=this.originalPageY+Math.round((g-this.originalPageY)/
b.grid[1])*b.grid[1];g=this.containment?!(g-this.offset.click.top<this.containment[1]||g-this.offset.click.top>this.containment[3])?g:!(g-this.offset.click.top<this.containment[1])?g-b.grid[1]:g+b.grid[1]:g;e=this.originalPageX+Math.round((e-this.originalPageX)/b.grid[0])*b.grid[0];e=this.containment?!(e-this.offset.click.left<this.containment[0]||e-this.offset.click.left>this.containment[2])?e:!(e-this.offset.click.left<this.containment[0])?e-b.grid[0]:e+b.grid[0]:e}}return{top:g-this.offset.click.top-
this.offset.relative.top-this.offset.parent.top+(d.browser.safari&&d.browser.version<526&&this.cssPosition=="fixed"?0:this.cssPosition=="fixed"?-this.scrollParent.scrollTop():f?0:c.scrollTop()),left:e-this.offset.click.left-this.offset.relative.left-this.offset.parent.left+(d.browser.safari&&d.browser.version<526&&this.cssPosition=="fixed"?0:this.cssPosition=="fixed"?-this.scrollParent.scrollLeft():f?0:c.scrollLeft())}},_clear:function(){this.helper.removeClass("ui-draggable-dragging");this.helper[0]!=
this.element[0]&&!this.cancelHelperRemoval&&this.helper.remove();this.helper=null;this.cancelHelperRemoval=false},_trigger:function(a,b,c){c=c||this._uiHash();d.ui.plugin.call(this,a,[b,c]);if(a=="drag")this.positionAbs=this._convertPositionTo("absolute");return d.Widget.prototype._trigger.call(this,a,b,c)},plugins:{},_uiHash:function(){return{helper:this.helper,position:this.position,originalPosition:this.originalPosition,offset:this.positionAbs}}});d.extend(d.ui.draggable,{version:"1.8.7"});
d.ui.plugin.add("draggable","connectToSortable",{start:function(a,b){var c=d(this).data("draggable"),f=c.options,e=d.extend({},b,{item:c.element});c.sortables=[];d(f.connectToSortable).each(function(){var g=d.data(this,"sortable");if(g&&!g.options.disabled){c.sortables.push({instance:g,shouldRevert:g.options.revert});g._refreshItems();g._trigger("activate",a,e)}})},stop:function(a,b){var c=d(this).data("draggable"),f=d.extend({},b,{item:c.element});d.each(c.sortables,function(){if(this.instance.isOver){this.instance.isOver=
0;c.cancelHelperRemoval=true;this.instance.cancelHelperRemoval=false;if(this.shouldRevert)this.instance.options.revert=true;this.instance._mouseStop(a);this.instance.options.helper=this.instance.options._helper;c.options.helper=="original"&&this.instance.currentItem.css({top:"auto",left:"auto"})}else{this.instance.cancelHelperRemoval=false;this.instance._trigger("deactivate",a,f)}})},drag:function(a,b){var c=d(this).data("draggable"),f=this;d.each(c.sortables,function(){this.instance.positionAbs=
c.positionAbs;this.instance.helperProportions=c.helperProportions;this.instance.offset.click=c.offset.click;if(this.instance._intersectsWith(this.instance.containerCache)){if(!this.instance.isOver){this.instance.isOver=1;this.instance.currentItem=d(f).clone().appendTo(this.instance.element).data("sortable-item",true);this.instance.options._helper=this.instance.options.helper;this.instance.options.helper=function(){return b.helper[0]};a.target=this.instance.currentItem[0];this.instance._mouseCapture(a,
true);this.instance._mouseStart(a,true,true);this.instance.offset.click.top=c.offset.click.top;this.instance.offset.click.left=c.offset.click.left;this.instance.offset.parent.left-=c.offset.parent.left-this.instance.offset.parent.left;this.instance.offset.parent.top-=c.offset.parent.top-this.instance.offset.parent.top;c._trigger("toSortable",a);c.dropped=this.instance.element;c.currentItem=c.element;this.instance.fromOutside=c}this.instance.currentItem&&this.instance._mouseDrag(a)}else if(this.instance.isOver){this.instance.isOver=
0;this.instance.cancelHelperRemoval=true;this.instance.options.revert=false;this.instance._trigger("out",a,this.instance._uiHash(this.instance));this.instance._mouseStop(a,true);this.instance.options.helper=this.instance.options._helper;this.instance.currentItem.remove();this.instance.placeholder&&this.instance.placeholder.remove();c._trigger("fromSortable",a);c.dropped=false}})}});d.ui.plugin.add("draggable","cursor",{start:function(){var a=d("body"),b=d(this).data("draggable").options;if(a.css("cursor"))b._cursor=
a.css("cursor");a.css("cursor",b.cursor)},stop:function(){var a=d(this).data("draggable").options;a._cursor&&d("body").css("cursor",a._cursor)}});d.ui.plugin.add("draggable","iframeFix",{start:function(){var a=d(this).data("draggable").options;d(a.iframeFix===true?"iframe":a.iframeFix).each(function(){d('<div class="ui-draggable-iframeFix" style="background: #fff;"></div>').css({width:this.offsetWidth+"px",height:this.offsetHeight+"px",position:"absolute",opacity:"0.001",zIndex:1E3}).css(d(this).offset()).appendTo("body")})},
stop:function(){d("div.ui-draggable-iframeFix").each(function(){this.parentNode.removeChild(this)})}});d.ui.plugin.add("draggable","opacity",{start:function(a,b){a=d(b.helper);b=d(this).data("draggable").options;if(a.css("opacity"))b._opacity=a.css("opacity");a.css("opacity",b.opacity)},stop:function(a,b){a=d(this).data("draggable").options;a._opacity&&d(b.helper).css("opacity",a._opacity)}});d.ui.plugin.add("draggable","scroll",{start:function(){var a=d(this).data("draggable");if(a.scrollParent[0]!=
document&&a.scrollParent[0].tagName!="HTML")a.overflowOffset=a.scrollParent.offset()},drag:function(a){var b=d(this).data("draggable"),c=b.options,f=false;if(b.scrollParent[0]!=document&&b.scrollParent[0].tagName!="HTML"){if(!c.axis||c.axis!="x")if(b.overflowOffset.top+b.scrollParent[0].offsetHeight-a.pageY<c.scrollSensitivity)b.scrollParent[0].scrollTop=f=b.scrollParent[0].scrollTop+c.scrollSpeed;else if(a.pageY-b.overflowOffset.top<c.scrollSensitivity)b.scrollParent[0].scrollTop=f=b.scrollParent[0].scrollTop-
c.scrollSpeed;if(!c.axis||c.axis!="y")if(b.overflowOffset.left+b.scrollParent[0].offsetWidth-a.pageX<c.scrollSensitivity)b.scrollParent[0].scrollLeft=f=b.scrollParent[0].scrollLeft+c.scrollSpeed;else if(a.pageX-b.overflowOffset.left<c.scrollSensitivity)b.scrollParent[0].scrollLeft=f=b.scrollParent[0].scrollLeft-c.scrollSpeed}else{if(!c.axis||c.axis!="x")if(a.pageY-d(document).scrollTop()<c.scrollSensitivity)f=d(document).scrollTop(d(document).scrollTop()-c.scrollSpeed);else if(d(window).height()-
(a.pageY-d(document).scrollTop())<c.scrollSensitivity)f=d(document).scrollTop(d(document).scrollTop()+c.scrollSpeed);if(!c.axis||c.axis!="y")if(a.pageX-d(document).scrollLeft()<c.scrollSensitivity)f=d(document).scrollLeft(d(document).scrollLeft()-c.scrollSpeed);else if(d(window).width()-(a.pageX-d(document).scrollLeft())<c.scrollSensitivity)f=d(document).scrollLeft(d(document).scrollLeft()+c.scrollSpeed)}f!==false&&d.ui.ddmanager&&!c.dropBehaviour&&d.ui.ddmanager.prepareOffsets(b,a)}});d.ui.plugin.add("draggable",
"snap",{start:function(){var a=d(this).data("draggable"),b=a.options;a.snapElements=[];d(b.snap.constructor!=String?b.snap.items||":data(draggable)":b.snap).each(function(){var c=d(this),f=c.offset();this!=a.element[0]&&a.snapElements.push({item:this,width:c.outerWidth(),height:c.outerHeight(),top:f.top,left:f.left})})},drag:function(a,b){for(var c=d(this).data("draggable"),f=c.options,e=f.snapTolerance,g=b.offset.left,n=g+c.helperProportions.width,m=b.offset.top,o=m+c.helperProportions.height,h=
c.snapElements.length-1;h>=0;h--){var i=c.snapElements[h].left,k=i+c.snapElements[h].width,j=c.snapElements[h].top,l=j+c.snapElements[h].height;if(i-e<g&&g<k+e&&j-e<m&&m<l+e||i-e<g&&g<k+e&&j-e<o&&o<l+e||i-e<n&&n<k+e&&j-e<m&&m<l+e||i-e<n&&n<k+e&&j-e<o&&o<l+e){if(f.snapMode!="inner"){var p=Math.abs(j-o)<=e,q=Math.abs(l-m)<=e,r=Math.abs(i-n)<=e,s=Math.abs(k-g)<=e;if(p)b.position.top=c._convertPositionTo("relative",{top:j-c.helperProportions.height,left:0}).top-c.margins.top;if(q)b.position.top=c._convertPositionTo("relative",
{top:l,left:0}).top-c.margins.top;if(r)b.position.left=c._convertPositionTo("relative",{top:0,left:i-c.helperProportions.width}).left-c.margins.left;if(s)b.position.left=c._convertPositionTo("relative",{top:0,left:k}).left-c.margins.left}var t=p||q||r||s;if(f.snapMode!="outer"){p=Math.abs(j-m)<=e;q=Math.abs(l-o)<=e;r=Math.abs(i-g)<=e;s=Math.abs(k-n)<=e;if(p)b.position.top=c._convertPositionTo("relative",{top:j,left:0}).top-c.margins.top;if(q)b.position.top=c._convertPositionTo("relative",{top:l-c.helperProportions.height,
left:0}).top-c.margins.top;if(r)b.position.left=c._convertPositionTo("relative",{top:0,left:i}).left-c.margins.left;if(s)b.position.left=c._convertPositionTo("relative",{top:0,left:k-c.helperProportions.width}).left-c.margins.left}if(!c.snapElements[h].snapping&&(p||q||r||s||t))c.options.snap.snap&&c.options.snap.snap.call(c.element,a,d.extend(c._uiHash(),{snapItem:c.snapElements[h].item}));c.snapElements[h].snapping=p||q||r||s||t}else{c.snapElements[h].snapping&&c.options.snap.release&&c.options.snap.release.call(c.element,
a,d.extend(c._uiHash(),{snapItem:c.snapElements[h].item}));c.snapElements[h].snapping=false}}}});d.ui.plugin.add("draggable","stack",{start:function(){var a=d(this).data("draggable").options;a=d.makeArray(d(a.stack)).sort(function(c,f){return(parseInt(d(c).css("zIndex"),10)||0)-(parseInt(d(f).css("zIndex"),10)||0)});if(a.length){var b=parseInt(a[0].style.zIndex)||0;d(a).each(function(c){this.style.zIndex=b+c});this[0].style.zIndex=b+a.length}}});d.ui.plugin.add("draggable","zIndex",{start:function(a,
b){a=d(b.helper);b=d(this).data("draggable").options;if(a.css("zIndex"))b._zIndex=a.css("zIndex");a.css("zIndex",b.zIndex)},stop:function(a,b){a=d(this).data("draggable").options;a._zIndex&&d(b.helper).css("zIndex",a._zIndex)}})})(jQuery);
;

/*
 * jQuery UI Droppable 1.8.7
 *
 * Copyright 2010, AUTHORS.txt (http://jqueryui.com/about)
 * Dual licensed under the MIT or GPL Version 2 licenses.
 * http://jquery.org/license
 *
 * http://docs.jquery.com/UI/Droppables
 *
 * Depends:
 *	jquery.ui.core.js
 *	jquery.ui.widget.js
 *	jquery.ui.mouse.js
 *	jquery.ui.draggable.js
 */
(function(d){d.widget("ui.droppable",{widgetEventPrefix:"drop",options:{accept:"*",activeClass:false,addClasses:true,greedy:false,hoverClass:false,scope:"default",tolerance:"intersect"},_create:function(){var a=this.options,b=a.accept;this.isover=0;this.isout=1;this.accept=d.isFunction(b)?b:function(c){return c.is(b)};this.proportions={width:this.element[0].offsetWidth,height:this.element[0].offsetHeight};d.ui.ddmanager.droppables[a.scope]=d.ui.ddmanager.droppables[a.scope]||[];d.ui.ddmanager.droppables[a.scope].push(this);
a.addClasses&&this.element.addClass("ui-droppable")},destroy:function(){for(var a=d.ui.ddmanager.droppables[this.options.scope],b=0;b<a.length;b++)a[b]==this&&a.splice(b,1);this.element.removeClass("ui-droppable ui-droppable-disabled").removeData("droppable").unbind(".droppable");return this},_setOption:function(a,b){if(a=="accept")this.accept=d.isFunction(b)?b:function(c){return c.is(b)};d.Widget.prototype._setOption.apply(this,arguments)},_activate:function(a){var b=d.ui.ddmanager.current;this.options.activeClass&&
this.element.addClass(this.options.activeClass);b&&this._trigger("activate",a,this.ui(b))},_deactivate:function(a){var b=d.ui.ddmanager.current;this.options.activeClass&&this.element.removeClass(this.options.activeClass);b&&this._trigger("deactivate",a,this.ui(b))},_over:function(a){var b=d.ui.ddmanager.current;if(!(!b||(b.currentItem||b.element)[0]==this.element[0]))if(this.accept.call(this.element[0],b.currentItem||b.element)){this.options.hoverClass&&this.element.addClass(this.options.hoverClass);
this._trigger("over",a,this.ui(b))}},_out:function(a){var b=d.ui.ddmanager.current;if(!(!b||(b.currentItem||b.element)[0]==this.element[0]))if(this.accept.call(this.element[0],b.currentItem||b.element)){this.options.hoverClass&&this.element.removeClass(this.options.hoverClass);this._trigger("out",a,this.ui(b))}},_drop:function(a,b){var c=b||d.ui.ddmanager.current;if(!c||(c.currentItem||c.element)[0]==this.element[0])return false;var e=false;this.element.find(":data(droppable)").not(".ui-draggable-dragging").each(function(){var g=
d.data(this,"droppable");if(g.options.greedy&&!g.options.disabled&&g.options.scope==c.options.scope&&g.accept.call(g.element[0],c.currentItem||c.element)&&d.ui.intersect(c,d.extend(g,{offset:g.element.offset()}),g.options.tolerance)){e=true;return false}});if(e)return false;if(this.accept.call(this.element[0],c.currentItem||c.element)){this.options.activeClass&&this.element.removeClass(this.options.activeClass);this.options.hoverClass&&this.element.removeClass(this.options.hoverClass);this._trigger("drop",
a,this.ui(c));return this.element}return false},ui:function(a){return{draggable:a.currentItem||a.element,helper:a.helper,position:a.position,offset:a.positionAbs}}});d.extend(d.ui.droppable,{version:"1.8.7"});d.ui.intersect=function(a,b,c){if(!b.offset)return false;var e=(a.positionAbs||a.position.absolute).left,g=e+a.helperProportions.width,f=(a.positionAbs||a.position.absolute).top,h=f+a.helperProportions.height,i=b.offset.left,k=i+b.proportions.width,j=b.offset.top,l=j+b.proportions.height;
switch(c){case "fit":return i<=e&&g<=k&&j<=f&&h<=l;case "intersect":return i<e+a.helperProportions.width/2&&g-a.helperProportions.width/2<k&&j<f+a.helperProportions.height/2&&h-a.helperProportions.height/2<l;case "pointer":return d.ui.isOver((a.positionAbs||a.position.absolute).top+(a.clickOffset||a.offset.click).top,(a.positionAbs||a.position.absolute).left+(a.clickOffset||a.offset.click).left,j,i,b.proportions.height,b.proportions.width);case "touch":return(f>=j&&f<=l||h>=j&&h<=l||f<j&&h>l)&&(e>=
i&&e<=k||g>=i&&g<=k||e<i&&g>k);default:return false}};d.ui.ddmanager={current:null,droppables:{"default":[]},prepareOffsets:function(a,b){var c=d.ui.ddmanager.droppables[a.options.scope]||[],e=b?b.type:null,g=(a.currentItem||a.element).find(":data(droppable)").andSelf(),f=0;a:for(;f<c.length;f++)if(!(c[f].options.disabled||a&&!c[f].accept.call(c[f].element[0],a.currentItem||a.element))){for(var h=0;h<g.length;h++)if(g[h]==c[f].element[0]){c[f].proportions.height=0;continue a}c[f].visible=c[f].element.css("display")!=
"none";if(c[f].visible){c[f].offset=c[f].element.offset();c[f].proportions={width:c[f].element[0].offsetWidth,height:c[f].element[0].offsetHeight};e=="mousedown"&&c[f]._activate.call(c[f],b)}}},drop:function(a,b){var c=false;d.each(d.ui.ddmanager.droppables[a.options.scope]||[],function(){if(this.options){if(!this.options.disabled&&this.visible&&d.ui.intersect(a,this,this.options.tolerance))c=c||this._drop.call(this,b);if(!this.options.disabled&&this.visible&&this.accept.call(this.element[0],a.currentItem||
a.element)){this.isout=1;this.isover=0;this._deactivate.call(this,b)}}});return c},drag:function(a,b){a.options.refreshPositions&&d.ui.ddmanager.prepareOffsets(a,b);d.each(d.ui.ddmanager.droppables[a.options.scope]||[],function(){if(!(this.options.disabled||this.greedyChild||!this.visible)){var c=d.ui.intersect(a,this,this.options.tolerance);if(c=!c&&this.isover==1?"isout":c&&this.isover==0?"isover":null){var e;if(this.options.greedy){var g=this.element.parents(":data(droppable):eq(0)");if(g.length){e=
d.data(g[0],"droppable");e.greedyChild=c=="isover"?1:0}}if(e&&c=="isover"){e.isover=0;e.isout=1;e._out.call(e,b)}this[c]=1;this[c=="isout"?"isover":"isout"]=0;this[c=="isover"?"_over":"_out"].call(this,b);if(e&&c=="isout"){e.isout=0;e.isover=1;e._over.call(e,b)}}}})}}})(jQuery);
;

/*
 * jQuery UI Sortable 1.8.7
 *
 * Copyright 2010, AUTHORS.txt (http://jqueryui.com/about)
 * Dual licensed under the MIT or GPL Version 2 licenses.
 * http://jquery.org/license
 *
 * http://docs.jquery.com/UI/Sortables
 *
 * Depends:
 *	jquery.ui.core.js
 *	jquery.ui.mouse.js
 *	jquery.ui.widget.js
 */
(function(d){d.widget("ui.sortable",d.ui.mouse,{widgetEventPrefix:"sort",options:{appendTo:"parent",axis:false,connectWith:false,containment:false,cursor:"auto",cursorAt:false,dropOnEmpty:true,forcePlaceholderSize:false,forceHelperSize:false,grid:false,handle:false,helper:"original",items:"> *",opacity:false,placeholder:false,revert:false,scroll:true,scrollSensitivity:20,scrollSpeed:20,scope:"default",tolerance:"intersect",zIndex:1E3},_create:function(){this.containerCache={};this.element.addClass("ui-sortable");
this.refresh();this.floating=this.items.length?/left|right/.test(this.items[0].item.css("float")):false;this.offset=this.element.offset();this._mouseInit()},destroy:function(){this.element.removeClass("ui-sortable ui-sortable-disabled").removeData("sortable").unbind(".sortable");this._mouseDestroy();for(var a=this.items.length-1;a>=0;a--)this.items[a].item.removeData("sortable-item");return this},_setOption:function(a,b){if(a==="disabled"){this.options[a]=b;this.widget()[b?"addClass":"removeClass"]("ui-sortable-disabled")}else d.Widget.prototype._setOption.apply(this,
arguments)},_mouseCapture:function(a,b){if(this.reverting)return false;if(this.options.disabled||this.options.type=="static")return false;this._refreshItems(a);var c=null,e=this;d(a.target).parents().each(function(){if(d.data(this,"sortable-item")==e){c=d(this);return false}});if(d.data(a.target,"sortable-item")==e)c=d(a.target);if(!c)return false;if(this.options.handle&&!b){var f=false;d(this.options.handle,c).find("*").andSelf().each(function(){if(this==a.target)f=true});if(!f)return false}this.currentItem=
c;this._removeCurrentsFromItems();return true},_mouseStart:function(a,b,c){b=this.options;var e=this;this.currentContainer=this;this.refreshPositions();this.helper=this._createHelper(a);this._cacheHelperProportions();this._cacheMargins();this.scrollParent=this.helper.scrollParent();this.offset=this.currentItem.offset();this.offset={top:this.offset.top-this.margins.top,left:this.offset.left-this.margins.left};this.helper.css("position","absolute");this.cssPosition=this.helper.css("position");d.extend(this.offset,
{click:{left:a.pageX-this.offset.left,top:a.pageY-this.offset.top},parent:this._getParentOffset(),relative:this._getRelativeOffset()});this.originalPosition=this._generatePosition(a);this.originalPageX=a.pageX;this.originalPageY=a.pageY;b.cursorAt&&this._adjustOffsetFromHelper(b.cursorAt);this.domPosition={prev:this.currentItem.prev()[0],parent:this.currentItem.parent()[0]};this.helper[0]!=this.currentItem[0]&&this.currentItem.hide();this._createPlaceholder();b.containment&&this._setContainment();
if(b.cursor){if(d("body").css("cursor"))this._storedCursor=d("body").css("cursor");d("body").css("cursor",b.cursor)}if(b.opacity){if(this.helper.css("opacity"))this._storedOpacity=this.helper.css("opacity");this.helper.css("opacity",b.opacity)}if(b.zIndex){if(this.helper.css("zIndex"))this._storedZIndex=this.helper.css("zIndex");this.helper.css("zIndex",b.zIndex)}if(this.scrollParent[0]!=document&&this.scrollParent[0].tagName!="HTML")this.overflowOffset=this.scrollParent.offset();this._trigger("start",
a,this._uiHash());this._preserveHelperProportions||this._cacheHelperProportions();if(!c)for(c=this.containers.length-1;c>=0;c--)this.containers[c]._trigger("activate",a,e._uiHash(this));if(d.ui.ddmanager)d.ui.ddmanager.current=this;d.ui.ddmanager&&!b.dropBehaviour&&d.ui.ddmanager.prepareOffsets(this,a);this.dragging=true;this.helper.addClass("ui-sortable-helper");this._mouseDrag(a);return true},_mouseDrag:function(a){this.position=this._generatePosition(a);this.positionAbs=this._convertPositionTo("absolute");
if(!this.lastPositionAbs)this.lastPositionAbs=this.positionAbs;if(this.options.scroll){var b=this.options,c=false;if(this.scrollParent[0]!=document&&this.scrollParent[0].tagName!="HTML"){if(this.overflowOffset.top+this.scrollParent[0].offsetHeight-a.pageY<b.scrollSensitivity)this.scrollParent[0].scrollTop=c=this.scrollParent[0].scrollTop+b.scrollSpeed;else if(a.pageY-this.overflowOffset.top<b.scrollSensitivity)this.scrollParent[0].scrollTop=c=this.scrollParent[0].scrollTop-b.scrollSpeed;if(this.overflowOffset.left+
this.scrollParent[0].offsetWidth-a.pageX<b.scrollSensitivity)this.scrollParent[0].scrollLeft=c=this.scrollParent[0].scrollLeft+b.scrollSpeed;else if(a.pageX-this.overflowOffset.left<b.scrollSensitivity)this.scrollParent[0].scrollLeft=c=this.scrollParent[0].scrollLeft-b.scrollSpeed}else{if(a.pageY-d(document).scrollTop()<b.scrollSensitivity)c=d(document).scrollTop(d(document).scrollTop()-b.scrollSpeed);else if(d(window).height()-(a.pageY-d(document).scrollTop())<b.scrollSensitivity)c=d(document).scrollTop(d(document).scrollTop()+
b.scrollSpeed);if(a.pageX-d(document).scrollLeft()<b.scrollSensitivity)c=d(document).scrollLeft(d(document).scrollLeft()-b.scrollSpeed);else if(d(window).width()-(a.pageX-d(document).scrollLeft())<b.scrollSensitivity)c=d(document).scrollLeft(d(document).scrollLeft()+b.scrollSpeed)}c!==false&&d.ui.ddmanager&&!b.dropBehaviour&&d.ui.ddmanager.prepareOffsets(this,a)}this.positionAbs=this._convertPositionTo("absolute");if(!this.options.axis||this.options.axis!="y")this.helper[0].style.left=this.position.left+
"px";if(!this.options.axis||this.options.axis!="x")this.helper[0].style.top=this.position.top+"px";for(b=this.items.length-1;b>=0;b--){c=this.items[b];var e=c.item[0],f=this._intersectsWithPointer(c);if(f)if(e!=this.currentItem[0]&&this.placeholder[f==1?"next":"prev"]()[0]!=e&&!d.ui.contains(this.placeholder[0],e)&&(this.options.type=="semi-dynamic"?!d.ui.contains(this.element[0],e):true)){this.direction=f==1?"down":"up";if(this.options.tolerance=="pointer"||this._intersectsWithSides(c))this._rearrange(a,
c);else break;this._trigger("change",a,this._uiHash());break}}this._contactContainers(a);d.ui.ddmanager&&d.ui.ddmanager.drag(this,a);this._trigger("sort",a,this._uiHash());this.lastPositionAbs=this.positionAbs;return false},_mouseStop:function(a,b){if(a){d.ui.ddmanager&&!this.options.dropBehaviour&&d.ui.ddmanager.drop(this,a);if(this.options.revert){var c=this;b=c.placeholder.offset();c.reverting=true;d(this.helper).animate({left:b.left-this.offset.parent.left-c.margins.left+(this.offsetParent[0]==
document.body?0:this.offsetParent[0].scrollLeft),top:b.top-this.offset.parent.top-c.margins.top+(this.offsetParent[0]==document.body?0:this.offsetParent[0].scrollTop)},parseInt(this.options.revert,10)||500,function(){c._clear(a)})}else this._clear(a,b);return false}},cancel:function(){var a=this;if(this.dragging){this._mouseUp();this.options.helper=="original"?this.currentItem.css(this._storedCSS).removeClass("ui-sortable-helper"):this.currentItem.show();for(var b=this.containers.length-1;b>=0;b--){this.containers[b]._trigger("deactivate",
null,a._uiHash(this));if(this.containers[b].containerCache.over){this.containers[b]._trigger("out",null,a._uiHash(this));this.containers[b].containerCache.over=0}}}this.placeholder[0].parentNode&&this.placeholder[0].parentNode.removeChild(this.placeholder[0]);this.options.helper!="original"&&this.helper&&this.helper[0].parentNode&&this.helper.remove();d.extend(this,{helper:null,dragging:false,reverting:false,_noFinalSort:null});this.domPosition.prev?d(this.domPosition.prev).after(this.currentItem):
d(this.domPosition.parent).prepend(this.currentItem);return this},serialize:function(a){var b=this._getItemsAsjQuery(a&&a.connected),c=[];a=a||{};d(b).each(function(){var e=(d(a.item||this).attr(a.attribute||"id")||"").match(a.expression||/(.+)[-=_](.+)/);if(e)c.push((a.key||e[1]+"[]")+"="+(a.key&&a.expression?e[1]:e[2]))});!c.length&&a.key&&c.push(a.key+"=");return c.join("&")},toArray:function(a){var b=this._getItemsAsjQuery(a&&a.connected),c=[];a=a||{};b.each(function(){c.push(d(a.item||this).attr(a.attribute||
"id")||"")});return c},_intersectsWith:function(a){var b=this.positionAbs.left,c=b+this.helperProportions.width,e=this.positionAbs.top,f=e+this.helperProportions.height,g=a.left,h=g+a.width,i=a.top,k=i+a.height,j=this.offset.click.top,l=this.offset.click.left;j=e+j>i&&e+j<k&&b+l>g&&b+l<h;return this.options.tolerance=="pointer"||this.options.forcePointerForContainers||this.options.tolerance!="pointer"&&this.helperProportions[this.floating?"width":"height"]>a[this.floating?"width":"height"]?j:g<b+
this.helperProportions.width/2&&c-this.helperProportions.width/2<h&&i<e+this.helperProportions.height/2&&f-this.helperProportions.height/2<k},_intersectsWithPointer:function(a){var b=d.ui.isOverAxis(this.positionAbs.top+this.offset.click.top,a.top,a.height);a=d.ui.isOverAxis(this.positionAbs.left+this.offset.click.left,a.left,a.width);b=b&&a;a=this._getDragVerticalDirection();var c=this._getDragHorizontalDirection();if(!b)return false;return this.floating?c&&c=="right"||a=="down"?2:1:a&&(a=="down"?
2:1)},_intersectsWithSides:function(a){var b=d.ui.isOverAxis(this.positionAbs.top+this.offset.click.top,a.top+a.height/2,a.height);a=d.ui.isOverAxis(this.positionAbs.left+this.offset.click.left,a.left+a.width/2,a.width);var c=this._getDragVerticalDirection(),e=this._getDragHorizontalDirection();return this.floating&&e?e=="right"&&a||e=="left"&&!a:c&&(c=="down"&&b||c=="up"&&!b)},_getDragVerticalDirection:function(){var a=this.positionAbs.top-this.lastPositionAbs.top;return a!=0&&(a>0?"down":"up")},
_getDragHorizontalDirection:function(){var a=this.positionAbs.left-this.lastPositionAbs.left;return a!=0&&(a>0?"right":"left")},refresh:function(a){this._refreshItems(a);this.refreshPositions();return this},_connectWith:function(){var a=this.options;return a.connectWith.constructor==String?[a.connectWith]:a.connectWith},_getItemsAsjQuery:function(a){var b=[],c=[],e=this._connectWith();if(e&&a)for(a=e.length-1;a>=0;a--)for(var f=d(e[a]),g=f.length-1;g>=0;g--){var h=d.data(f[g],"sortable");if(h&&h!=
this&&!h.options.disabled)c.push([d.isFunction(h.options.items)?h.options.items.call(h.element):d(h.options.items,h.element).not(".ui-sortable-helper").not(".ui-sortable-placeholder"),h])}c.push([d.isFunction(this.options.items)?this.options.items.call(this.element,null,{options:this.options,item:this.currentItem}):d(this.options.items,this.element).not(".ui-sortable-helper").not(".ui-sortable-placeholder"),this]);for(a=c.length-1;a>=0;a--)c[a][0].each(function(){b.push(this)});return d(b)},_removeCurrentsFromItems:function(){for(var a=
this.currentItem.find(":data(sortable-item)"),b=0;b<this.items.length;b++)for(var c=0;c<a.length;c++)a[c]==this.items[b].item[0]&&this.items.splice(b,1)},_refreshItems:function(a){this.items=[];this.containers=[this];var b=this.items,c=[[d.isFunction(this.options.items)?this.options.items.call(this.element[0],a,{item:this.currentItem}):d(this.options.items,this.element),this]],e=this._connectWith();if(e)for(var f=e.length-1;f>=0;f--)for(var g=d(e[f]),h=g.length-1;h>=0;h--){var i=d.data(g[h],"sortable");
if(i&&i!=this&&!i.options.disabled){c.push([d.isFunction(i.options.items)?i.options.items.call(i.element[0],a,{item:this.currentItem}):d(i.options.items,i.element),i]);this.containers.push(i)}}for(f=c.length-1;f>=0;f--){a=c[f][1];e=c[f][0];h=0;for(g=e.length;h<g;h++){i=d(e[h]);i.data("sortable-item",a);b.push({item:i,instance:a,width:0,height:0,left:0,top:0})}}},refreshPositions:function(a){if(this.offsetParent&&this.helper)this.offset.parent=this._getParentOffset();for(var b=this.items.length-1;b>=
0;b--){var c=this.items[b],e=this.options.toleranceElement?d(this.options.toleranceElement,c.item):c.item;if(!a){c.width=e.outerWidth();c.height=e.outerHeight()}e=e.offset();c.left=e.left;c.top=e.top}if(this.options.custom&&this.options.custom.refreshContainers)this.options.custom.refreshContainers.call(this);else for(b=this.containers.length-1;b>=0;b--){e=this.containers[b].element.offset();this.containers[b].containerCache.left=e.left;this.containers[b].containerCache.top=e.top;this.containers[b].containerCache.width=
this.containers[b].element.outerWidth();this.containers[b].containerCache.height=this.containers[b].element.outerHeight()}return this},_createPlaceholder:function(a){var b=a||this,c=b.options;if(!c.placeholder||c.placeholder.constructor==String){var e=c.placeholder;c.placeholder={element:function(){var f=d(document.createElement(b.currentItem[0].nodeName)).addClass(e||b.currentItem[0].className+" ui-sortable-placeholder").removeClass("ui-sortable-helper")[0];if(!e)f.style.visibility="hidden";return f},
update:function(f,g){if(!(e&&!c.forcePlaceholderSize)){g.height()||g.height(b.currentItem.innerHeight()-parseInt(b.currentItem.css("paddingTop")||0,10)-parseInt(b.currentItem.css("paddingBottom")||0,10));g.width()||g.width(b.currentItem.innerWidth()-parseInt(b.currentItem.css("paddingLeft")||0,10)-parseInt(b.currentItem.css("paddingRight")||0,10))}}}}b.placeholder=d(c.placeholder.element.call(b.element,b.currentItem));b.currentItem.after(b.placeholder);c.placeholder.update(b,b.placeholder)},_contactContainers:function(a){for(var b=
null,c=null,e=this.containers.length-1;e>=0;e--)if(!d.ui.contains(this.currentItem[0],this.containers[e].element[0]))if(this._intersectsWith(this.containers[e].containerCache)){if(!(b&&d.ui.contains(this.containers[e].element[0],b.element[0]))){b=this.containers[e];c=e}}else if(this.containers[e].containerCache.over){this.containers[e]._trigger("out",a,this._uiHash(this));this.containers[e].containerCache.over=0}if(b)if(this.containers.length===1){this.containers[c]._trigger("over",a,this._uiHash(this));
this.containers[c].containerCache.over=1}else if(this.currentContainer!=this.containers[c]){b=1E4;e=null;for(var f=this.positionAbs[this.containers[c].floating?"left":"top"],g=this.items.length-1;g>=0;g--)if(d.ui.contains(this.containers[c].element[0],this.items[g].item[0])){var h=this.items[g][this.containers[c].floating?"left":"top"];if(Math.abs(h-f)<b){b=Math.abs(h-f);e=this.items[g]}}if(e||this.options.dropOnEmpty){this.currentContainer=this.containers[c];e?this._rearrange(a,e,null,true):this._rearrange(a,
null,this.containers[c].element,true);this._trigger("change",a,this._uiHash());this.containers[c]._trigger("change",a,this._uiHash(this));this.options.placeholder.update(this.currentContainer,this.placeholder);this.containers[c]._trigger("over",a,this._uiHash(this));this.containers[c].containerCache.over=1}}},_createHelper:function(a){var b=this.options;a=d.isFunction(b.helper)?d(b.helper.apply(this.element[0],[a,this.currentItem])):b.helper=="clone"?this.currentItem.clone():this.currentItem;a.parents("body").length||
d(b.appendTo!="parent"?b.appendTo:this.currentItem[0].parentNode)[0].appendChild(a[0]);if(a[0]==this.currentItem[0])this._storedCSS={width:this.currentItem[0].style.width,height:this.currentItem[0].style.height,position:this.currentItem.css("position"),top:this.currentItem.css("top"),left:this.currentItem.css("left")};if(a[0].style.width==""||b.forceHelperSize)a.width(this.currentItem.width());if(a[0].style.height==""||b.forceHelperSize)a.height(this.currentItem.height());return a},_adjustOffsetFromHelper:function(a){if(typeof a==
"string")a=a.split(" ");if(d.isArray(a))a={left:+a[0],top:+a[1]||0};if("left"in a)this.offset.click.left=a.left+this.margins.left;if("right"in a)this.offset.click.left=this.helperProportions.width-a.right+this.margins.left;if("top"in a)this.offset.click.top=a.top+this.margins.top;if("bottom"in a)this.offset.click.top=this.helperProportions.height-a.bottom+this.margins.top},_getParentOffset:function(){this.offsetParent=this.helper.offsetParent();var a=this.offsetParent.offset();if(this.cssPosition==
"absolute"&&this.scrollParent[0]!=document&&d.ui.contains(this.scrollParent[0],this.offsetParent[0])){a.left+=this.scrollParent.scrollLeft();a.top+=this.scrollParent.scrollTop()}if(this.offsetParent[0]==document.body||this.offsetParent[0].tagName&&this.offsetParent[0].tagName.toLowerCase()=="html"&&d.browser.msie)a={top:0,left:0};return{top:a.top+(parseInt(this.offsetParent.css("borderTopWidth"),10)||0),left:a.left+(parseInt(this.offsetParent.css("borderLeftWidth"),10)||0)}},_getRelativeOffset:function(){if(this.cssPosition==
"relative"){var a=this.currentItem.position();return{top:a.top-(parseInt(this.helper.css("top"),10)||0)+this.scrollParent.scrollTop(),left:a.left-(parseInt(this.helper.css("left"),10)||0)+this.scrollParent.scrollLeft()}}else return{top:0,left:0}},_cacheMargins:function(){this.margins={left:parseInt(this.currentItem.css("marginLeft"),10)||0,top:parseInt(this.currentItem.css("marginTop"),10)||0}},_cacheHelperProportions:function(){this.helperProportions={width:this.helper.outerWidth(),height:this.helper.outerHeight()}},
_setContainment:function(){var a=this.options;if(a.containment=="parent")a.containment=this.helper[0].parentNode;if(a.containment=="document"||a.containment=="window")this.containment=[0-this.offset.relative.left-this.offset.parent.left,0-this.offset.relative.top-this.offset.parent.top,d(a.containment=="document"?document:window).width()-this.helperProportions.width-this.margins.left,(d(a.containment=="document"?document:window).height()||document.body.parentNode.scrollHeight)-this.helperProportions.height-
this.margins.top];if(!/^(document|window|parent)$/.test(a.containment)){var b=d(a.containment)[0];a=d(a.containment).offset();var c=d(b).css("overflow")!="hidden";this.containment=[a.left+(parseInt(d(b).css("borderLeftWidth"),10)||0)+(parseInt(d(b).css("paddingLeft"),10)||0)-this.margins.left,a.top+(parseInt(d(b).css("borderTopWidth"),10)||0)+(parseInt(d(b).css("paddingTop"),10)||0)-this.margins.top,a.left+(c?Math.max(b.scrollWidth,b.offsetWidth):b.offsetWidth)-(parseInt(d(b).css("borderLeftWidth"),
10)||0)-(parseInt(d(b).css("paddingRight"),10)||0)-this.helperProportions.width-this.margins.left,a.top+(c?Math.max(b.scrollHeight,b.offsetHeight):b.offsetHeight)-(parseInt(d(b).css("borderTopWidth"),10)||0)-(parseInt(d(b).css("paddingBottom"),10)||0)-this.helperProportions.height-this.margins.top]}},_convertPositionTo:function(a,b){if(!b)b=this.position;a=a=="absolute"?1:-1;var c=this.cssPosition=="absolute"&&!(this.scrollParent[0]!=document&&d.ui.contains(this.scrollParent[0],this.offsetParent[0]))?
this.offsetParent:this.scrollParent,e=/(html|body)/i.test(c[0].tagName);return{top:b.top+this.offset.relative.top*a+this.offset.parent.top*a-(d.browser.safari&&this.cssPosition=="fixed"?0:(this.cssPosition=="fixed"?-this.scrollParent.scrollTop():e?0:c.scrollTop())*a),left:b.left+this.offset.relative.left*a+this.offset.parent.left*a-(d.browser.safari&&this.cssPosition=="fixed"?0:(this.cssPosition=="fixed"?-this.scrollParent.scrollLeft():e?0:c.scrollLeft())*a)}},_generatePosition:function(a){var b=
this.options,c=this.cssPosition=="absolute"&&!(this.scrollParent[0]!=document&&d.ui.contains(this.scrollParent[0],this.offsetParent[0]))?this.offsetParent:this.scrollParent,e=/(html|body)/i.test(c[0].tagName);if(this.cssPosition=="relative"&&!(this.scrollParent[0]!=document&&this.scrollParent[0]!=this.offsetParent[0]))this.offset.relative=this._getRelativeOffset();var f=a.pageX,g=a.pageY;if(this.originalPosition){if(this.containment){if(a.pageX-this.offset.click.left<this.containment[0])f=this.containment[0]+
this.offset.click.left;if(a.pageY-this.offset.click.top<this.containment[1])g=this.containment[1]+this.offset.click.top;if(a.pageX-this.offset.click.left>this.containment[2])f=this.containment[2]+this.offset.click.left;if(a.pageY-this.offset.click.top>this.containment[3])g=this.containment[3]+this.offset.click.top}if(b.grid){g=this.originalPageY+Math.round((g-this.originalPageY)/b.grid[1])*b.grid[1];g=this.containment?!(g-this.offset.click.top<this.containment[1]||g-this.offset.click.top>this.containment[3])?
g:!(g-this.offset.click.top<this.containment[1])?g-b.grid[1]:g+b.grid[1]:g;f=this.originalPageX+Math.round((f-this.originalPageX)/b.grid[0])*b.grid[0];f=this.containment?!(f-this.offset.click.left<this.containment[0]||f-this.offset.click.left>this.containment[2])?f:!(f-this.offset.click.left<this.containment[0])?f-b.grid[0]:f+b.grid[0]:f}}return{top:g-this.offset.click.top-this.offset.relative.top-this.offset.parent.top+(d.browser.safari&&this.cssPosition=="fixed"?0:this.cssPosition=="fixed"?-this.scrollParent.scrollTop():
e?0:c.scrollTop()),left:f-this.offset.click.left-this.offset.relative.left-this.offset.parent.left+(d.browser.safari&&this.cssPosition=="fixed"?0:this.cssPosition=="fixed"?-this.scrollParent.scrollLeft():e?0:c.scrollLeft())}},_rearrange:function(a,b,c,e){c?c[0].appendChild(this.placeholder[0]):b.item[0].parentNode.insertBefore(this.placeholder[0],this.direction=="down"?b.item[0]:b.item[0].nextSibling);this.counter=this.counter?++this.counter:1;var f=this,g=this.counter;window.setTimeout(function(){g==
f.counter&&f.refreshPositions(!e)},0)},_clear:function(a,b){this.reverting=false;var c=[];!this._noFinalSort&&this.currentItem[0].parentNode&&this.placeholder.before(this.currentItem);this._noFinalSort=null;if(this.helper[0]==this.currentItem[0]){for(var e in this._storedCSS)if(this._storedCSS[e]=="auto"||this._storedCSS[e]=="static")this._storedCSS[e]="";this.currentItem.css(this._storedCSS).removeClass("ui-sortable-helper")}else this.currentItem.show();this.fromOutside&&!b&&c.push(function(f){this._trigger("receive",
f,this._uiHash(this.fromOutside))});if((this.fromOutside||this.domPosition.prev!=this.currentItem.prev().not(".ui-sortable-helper")[0]||this.domPosition.parent!=this.currentItem.parent()[0])&&!b)c.push(function(f){this._trigger("update",f,this._uiHash())});if(!d.ui.contains(this.element[0],this.currentItem[0])){b||c.push(function(f){this._trigger("remove",f,this._uiHash())});for(e=this.containers.length-1;e>=0;e--)if(d.ui.contains(this.containers[e].element[0],this.currentItem[0])&&!b){c.push(function(f){return function(g){f._trigger("receive",
g,this._uiHash(this))}}.call(this,this.containers[e]));c.push(function(f){return function(g){f._trigger("update",g,this._uiHash(this))}}.call(this,this.containers[e]))}}for(e=this.containers.length-1;e>=0;e--){b||c.push(function(f){return function(g){f._trigger("deactivate",g,this._uiHash(this))}}.call(this,this.containers[e]));if(this.containers[e].containerCache.over){c.push(function(f){return function(g){f._trigger("out",g,this._uiHash(this))}}.call(this,this.containers[e]));this.containers[e].containerCache.over=
0}}this._storedCursor&&d("body").css("cursor",this._storedCursor);this._storedOpacity&&this.helper.css("opacity",this._storedOpacity);if(this._storedZIndex)this.helper.css("zIndex",this._storedZIndex=="auto"?"":this._storedZIndex);this.dragging=false;if(this.cancelHelperRemoval){if(!b){this._trigger("beforeStop",a,this._uiHash());for(e=0;e<c.length;e++)c[e].call(this,a);this._trigger("stop",a,this._uiHash())}return false}b||this._trigger("beforeStop",a,this._uiHash());this.placeholder[0].parentNode.removeChild(this.placeholder[0]);
this.helper[0]!=this.currentItem[0]&&this.helper.remove();this.helper=null;if(!b){for(e=0;e<c.length;e++)c[e].call(this,a);this._trigger("stop",a,this._uiHash())}this.fromOutside=false;return true},_trigger:function(){d.Widget.prototype._trigger.apply(this,arguments)===false&&this.cancel()},_uiHash:function(a){var b=a||this;return{helper:b.helper,placeholder:b.placeholder||d([]),position:b.position,originalPosition:b.originalPosition,offset:b.positionAbs,item:b.currentItem,sender:a?a.element:null}}});
d.extend(d.ui.sortable,{version:"1.8.7"})})(jQuery);
;

/**
 * Cookie plugin 1.0
 *
 * Copyright (c) 2006 Klaus Hartl (stilbuero.de)
 * Dual licensed under the MIT and GPL licenses:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 *
 */
jQuery.cookie=function(b,j,m){if(typeof j!="undefined"){m=m||{};if(j===null){j="";m.expires=-1}var e="";if(m.expires&&(typeof m.expires=="number"||m.expires.toUTCString)){var f;if(typeof m.expires=="number"){f=new Date();f.setTime(f.getTime()+(m.expires*24*60*60*1000))}else{f=m.expires}e="; expires="+f.toUTCString()}var l=m.path?"; path="+(m.path):"";var g=m.domain?"; domain="+(m.domain):"";var a=m.secure?"; secure":"";document.cookie=[b,"=",encodeURIComponent(j),e,l,g,a].join("")}else{var d=null;if(document.cookie&&document.cookie!=""){var k=document.cookie.split(";");for(var h=0;h<k.length;h++){var c=jQuery.trim(k[h]);if(c.substring(0,b.length+1)==(b+"=")){d=decodeURIComponent(c.substring(b.length+1));break}}}return d}};
;

/*!
 * jQuery Form Plugin
 * version: 2.52 (07-DEC-2010)
 * @requires jQuery v1.3.2 or later
 *
 * Examples and documentation at: http://malsup.com/jquery/form/
 * Dual licensed under the MIT and GPL licenses:
 *   http://www.opensource.org/licenses/mit-license.php
 *   http://www.gnu.org/licenses/gpl.html
 */
;(function(b){function q(){if(b.fn.ajaxSubmit.debug){var a="[jquery.form] "+Array.prototype.join.call(arguments,"");if(window.console&&window.console.log)window.console.log(a);else window.opera&&window.opera.postError&&window.opera.postError(a)}}b.fn.ajaxSubmit=function(a){function f(){function t(){var o=i.attr("target"),m=i.attr("action");l.setAttribute("target",u);l.getAttribute("method")!="POST"&&l.setAttribute("method","POST");l.getAttribute("action")!=e.url&&l.setAttribute("action",e.url);e.skipEncodingOverride|| i.attr({encoding:"multipart/form-data",enctype:"multipart/form-data"});e.timeout&&setTimeout(function(){F=true;s()},e.timeout);var v=[];try{if(e.extraData)for(var w in e.extraData)v.push(b('<input type="hidden" name="'+w+'" value="'+e.extraData[w]+'" />').appendTo(l)[0]);r.appendTo("body");r.data("form-plugin-onload",s);l.submit()}finally{l.setAttribute("action",m);o?l.setAttribute("target",o):i.removeAttr("target");b(v).remove()}}function s(){if(!G){r.removeData("form-plugin-onload");var o=true; try{if(F)throw"timeout";p=x.contentWindow?x.contentWindow.document:x.contentDocument?x.contentDocument:x.document;var m=e.dataType=="xml"||p.XMLDocument||b.isXMLDoc(p);q("isXml="+m);if(!m&&window.opera&&(p.body==null||p.body.innerHTML==""))if(--K){q("requeing onLoad callback, DOM not available");setTimeout(s,250);return}G=true;j.responseText=p.documentElement?p.documentElement.innerHTML:null;j.responseXML=p.XMLDocument?p.XMLDocument:p;j.getResponseHeader=function(L){return{"content-type":e.dataType}[L]}; var v=/(json|script)/.test(e.dataType);if(v||e.textarea){var w=p.getElementsByTagName("textarea")[0];if(w)j.responseText=w.value;else if(v){var H=p.getElementsByTagName("pre")[0],I=p.getElementsByTagName("body")[0];if(H)j.responseText=H.textContent;else if(I)j.responseText=I.innerHTML}}else if(e.dataType=="xml"&&!j.responseXML&&j.responseText!=null)j.responseXML=C(j.responseText);J=b.httpData(j,e.dataType)}catch(D){q("error caught:",D);o=false;j.error=D;b.handleError(e,j,"error",D)}if(j.aborted){q("upload aborted"); o=false}if(o){e.success.call(e.context,J,"success",j);y&&b.event.trigger("ajaxSuccess",[j,e])}y&&b.event.trigger("ajaxComplete",[j,e]);y&&!--b.active&&b.event.trigger("ajaxStop");if(e.complete)e.complete.call(e.context,j,o?"success":"error");setTimeout(function(){r.removeData("form-plugin-onload");r.remove();j.responseXML=null},100)}}function C(o,m){if(window.ActiveXObject){m=new ActiveXObject("Microsoft.XMLDOM");m.async="false";m.loadXML(o)}else m=(new DOMParser).parseFromString(o,"text/xml");return m&& m.documentElement&&m.documentElement.tagName!="parsererror"?m:null}var l=i[0];if(b(":input[name=submit],:input[id=submit]",l).length)alert('Error: Form elements must not have name or id of "submit".');else{var e=b.extend(true,{},b.ajaxSettings,a);e.context=e.context||e;var u="jqFormIO"+(new Date).getTime(),E="_"+u;window[E]=function(){var o=r.data("form-plugin-onload");if(o){o();window[E]=undefined;try{delete window[E]}catch(m){}}};var r=b('<iframe id="'+u+'" name="'+u+'" src="'+e.iframeSrc+'" onload="window[\'_\'+this.id]()" />'), x=r[0];r.css({position:"absolute",top:"-1000px",left:"-1000px"});var j={aborted:0,responseText:null,responseXML:null,status:0,statusText:"n/a",getAllResponseHeaders:function(){},getResponseHeader:function(){},setRequestHeader:function(){},abort:function(){this.aborted=1;r.attr("src",e.iframeSrc)}},y=e.global;y&&!b.active++&&b.event.trigger("ajaxStart");y&&b.event.trigger("ajaxSend",[j,e]);if(e.beforeSend&&e.beforeSend.call(e.context,j,e)===false)e.global&&b.active--;else if(!j.aborted){var G=false, F=0,z=l.clk;if(z){var A=z.name;if(A&&!z.disabled){e.extraData=e.extraData||{};e.extraData[A]=z.value;if(z.type=="image"){e.extraData[A+".x"]=l.clk_x;e.extraData[A+".y"]=l.clk_y}}}e.forceSync?t():setTimeout(t,10);var J,p,K=50}}}if(!this.length){q("ajaxSubmit: skipping submit process - no element selected");return this}if(typeof a=="function")a={success:a};var d=this.attr("action");if(d=typeof d==="string"?b.trim(d):"")d=(d.match(/^([^#]+)/)||[])[1];d=d||window.location.href||"";a=b.extend(true,{url:d, type:this.attr("method")||"GET",iframeSrc:/^https/i.test(window.location.href||"")?"javascript:false":"about:blank"},a);d={};this.trigger("form-pre-serialize",[this,a,d]);if(d.veto){q("ajaxSubmit: submit vetoed via form-pre-serialize trigger");return this}if(a.beforeSerialize&&a.beforeSerialize(this,a)===false){q("ajaxSubmit: submit aborted via beforeSerialize callback");return this}var c,h,g=this.formToArray(a.semantic);if(a.data){a.extraData=a.data;for(c in a.data)if(a.data[c]instanceof Array)for(var k in a.data[c])g.push({name:c, value:a.data[c][k]});else{h=a.data[c];h=b.isFunction(h)?h():h;g.push({name:c,value:h})}}if(a.beforeSubmit&&a.beforeSubmit(g,this,a)===false){q("ajaxSubmit: submit aborted via beforeSubmit callback");return this}this.trigger("form-submit-validate",[g,this,a,d]);if(d.veto){q("ajaxSubmit: submit vetoed via form-submit-validate trigger");return this}c=b.param(g);if(a.type.toUpperCase()=="GET"){a.url+=(a.url.indexOf("?")>=0?"&":"?")+c;a.data=null}else a.data=c;var i=this,n=[];a.resetForm&&n.push(function(){i.resetForm()}); a.clearForm&&n.push(function(){i.clearForm()});if(!a.dataType&&a.target){var B=a.success||function(){};n.push(function(t){var s=a.replaceTarget?"replaceWith":"html";b(a.target)[s](t).each(B,arguments)})}else a.success&&n.push(a.success);a.success=function(t,s,C){for(var l=a.context||a,e=0,u=n.length;e<u;e++)n[e].apply(l,[t,s,C||i,i])};c=b("input:file",this).length>0;k=i.attr("enctype")=="multipart/form-data"||i.attr("encoding")=="multipart/form-data";if(a.iframe!==false&&(c||a.iframe||k))a.closeKeepAlive? b.get(a.closeKeepAlive,f):f();else b.ajax(a);this.trigger("form-submit-notify",[this,a]);return this};b.fn.ajaxForm=function(a){if(this.length===0){var f={s:this.selector,c:this.context};if(!b.isReady&&f.s){q("DOM not ready, queuing ajaxForm");b(function(){b(f.s,f.c).ajaxForm(a)});return this}q("terminating; zero elements found by selector"+(b.isReady?"":" (DOM not ready)"));return this}return this.ajaxFormUnbind().bind("submit.form-plugin",function(d){if(!d.isDefaultPrevented()){d.preventDefault(); b(this).ajaxSubmit(a)}}).bind("click.form-plugin",function(d){var c=d.target,h=b(c);if(!h.is(":submit,input:image")){c=h.closest(":submit");if(c.length==0)return;c=c[0]}var g=this;g.clk=c;if(c.type=="image")if(d.offsetX!=undefined){g.clk_x=d.offsetX;g.clk_y=d.offsetY}else if(typeof b.fn.offset=="function"){h=h.offset();g.clk_x=d.pageX-h.left;g.clk_y=d.pageY-h.top}else{g.clk_x=d.pageX-c.offsetLeft;g.clk_y=d.pageY-c.offsetTop}setTimeout(function(){g.clk=g.clk_x=g.clk_y=null},100)})};b.fn.ajaxFormUnbind= function(){return this.unbind("submit.form-plugin click.form-plugin")};b.fn.formToArray=function(a){var f=[];if(this.length===0)return f;var d=this[0],c=a?d.getElementsByTagName("*"):d.elements;if(!c)return f;var h,g,k,i,n,B;h=0;for(n=c.length;h<n;h++){g=c[h];if(k=g.name)if(a&&d.clk&&g.type=="image"){if(!g.disabled&&d.clk==g){f.push({name:k,value:b(g).val()});f.push({name:k+".x",value:d.clk_x},{name:k+".y",value:d.clk_y})}}else if((i=b.fieldValue(g,true))&&i.constructor==Array){g=0;for(B=i.length;g< B;g++)f.push({name:k,value:i[g]})}else i!==null&&typeof i!="undefined"&&f.push({name:k,value:i})}if(!a&&d.clk){a=b(d.clk);c=a[0];if((k=c.name)&&!c.disabled&&c.type=="image"){f.push({name:k,value:a.val()});f.push({name:k+".x",value:d.clk_x},{name:k+".y",value:d.clk_y})}}return f};b.fn.formSerialize=function(a){return b.param(this.formToArray(a))};b.fn.fieldSerialize=function(a){var f=[];this.each(function(){var d=this.name;if(d){var c=b.fieldValue(this,a);if(c&&c.constructor==Array)for(var h=0,g=c.length;h< g;h++)f.push({name:d,value:c[h]});else c!==null&&typeof c!="undefined"&&f.push({name:this.name,value:c})}});return b.param(f)};b.fn.fieldValue=function(a){for(var f=[],d=0,c=this.length;d<c;d++){var h=b.fieldValue(this[d],a);h===null||typeof h=="undefined"||h.constructor==Array&&!h.length||(h.constructor==Array?b.merge(f,h):f.push(h))}return f};b.fieldValue=function(a,f){var d=a.name,c=a.type,h=a.tagName.toLowerCase();if(f===undefined)f=true;if(f&&(!d||a.disabled||c=="reset"||c=="button"||(c=="checkbox"|| c=="radio")&&!a.checked||(c=="submit"||c=="image")&&a.form&&a.form.clk!=a||h=="select"&&a.selectedIndex==-1))return null;if(h=="select"){var g=a.selectedIndex;if(g<0)return null;d=[];h=a.options;var k=(c=c=="select-one")?g+1:h.length;for(g=c?g:0;g<k;g++){var i=h[g];if(i.selected){var n=i.value;n||(n=i.attributes&&i.attributes.value&&!i.attributes.value.specified?i.text:i.value);if(c)return n;d.push(n)}}return d}return b(a).val()};b.fn.clearForm=function(){return this.each(function(){b("input,select,textarea", this).clearFields()})};b.fn.clearFields=b.fn.clearInputs=function(){return this.each(function(){var a=this.type,f=this.tagName.toLowerCase();if(a=="text"||a=="password"||f=="textarea")this.value="";else if(a=="checkbox"||a=="radio")this.checked=false;else if(f=="select")this.selectedIndex=-1})};b.fn.resetForm=function(){return this.each(function(){if(typeof this.reset=="function"||typeof this.reset=="object"&&!this.reset.nodeType)this.reset()})};b.fn.enable=function(a){if(a===undefined)a=true;return this.each(function(){this.disabled= !a})};b.fn.selected=function(a){if(a===undefined)a=true;return this.each(function(){var f=this.type;if(f=="checkbox"||f=="radio")this.checked=a;else if(this.tagName.toLowerCase()=="option"){f=b(this).parent("select");a&&f[0]&&f[0].type=="select-one"&&f.find("option").selected(false);this.selected=a}})}})(jQuery);;
/**
 * Galleria v 1.2.7 2012-04-04
 * http://galleria.io
 *
 * Licensed under the MIT license
 * https://raw.github.com/aino/galleria/master/LICENSE
 *
 */(function(a){var b,c=this,d=c.document,e=a(d),f=a(c),g=Array.prototype,h=1.27,i=!0,j=3e4,k=!1,l=navigator.userAgent.toLowerCase(),m=c.location.hash.replace(/#\//,""),n=function(){},o=function(){return!1},p=function(){var a=3,c=d.createElement("div"),e=c.getElementsByTagName("i");do c.innerHTML="<!--[if gt IE "+ ++a+"]><i></i><![endif]-->";while(e[0]);return a>4?a:b}(),q=function(){return{html:d.documentElement,body:d.body,head:d.getElementsByTagName("head")[0],title:d.title}},r="data ready thumbnail loadstart loadfinish image play pause progress fullscreen_enter fullscreen_exit idle_enter idle_exit rescale lightbox_open lightbox_close lightbox_image",s=function(){var b=[];return a.each(r.split(" "),function(a,c){b.push(c),/_/.test(c)&&b.push(c.replace(/_/g,""))}),b}(),t=function(b){var c;return typeof b!="object"?b:(a.each(b,function(d,e){/^[a-z]+_/.test(d)&&(c="",a.each(d.split("_"),function(a,b){c+=a>0?b.substr(0,1).toUpperCase()+b.substr(1):b}),b[c]=e,delete b[d])}),b)},u=function(b){return a.inArray(b,s)>-1?Galleria[b.toUpperCase()]:b},v={youtube:{reg:/https?:\/\/(?:[a-zA_Z]{2,3}.)?(?:youtube\.com\/watch\?)((?:[\w\d\-\_\=]+&amp;(?:amp;)?)*v(?:&lt;[A-Z]+&gt;)?=([0-9a-zA-Z\-\_]+))/i,embed:function(a){return"http://www.youtube.com/embed/"+a},getThumb:function(b,c,d){d=d||n,a.getJSON("http://gdata.youtube.com/feeds/api/videos/"+b+"?v=2&alt=json-in-script&callback=?",function(a){try{c(a.entry.media$group.media$thumbnail[0].url)}catch(b){d()}}).error(d)}},vimeo:{reg:/https?:\/\/(?:www\.)?(vimeo\.com)\/(?:hd#)?([0-9]+)/i,embed:function(a){return"http://player.vimeo.com/video/"+a},getThumb:function(b,c,d){d=d||n,a.getJSON("http://vimeo.com/api/v2/video/"+b+".json?callback=?",function(a){try{c(a[0].thumbnail_medium)}catch(b){d()}}).error(d)}},dailymotion:{reg:/https?:\/\/(?:www\.)?(dailymotion\.com)\/video\/([^_]+)/,embed:function(a){return"http://www.dailymotion.com/embed/video/"+a},getThumb:function(b,c,d){d=d||n,a.getJSON("https://api.dailymotion.com/video/"+b+"?fields=thumbnail_medium_url&callback=?",function(a){try{c(a.thumbnail_medium_url)}catch(b){d()}}).error(d)}}},w=function(a){var b;for(var c in v){b=a&&a.match(v[c].reg);if(b&&b.length)return{id:b[2],provider:c}}return!1},x={trunk:{},add:function(a,b,d,e){a=a||(new Date).getTime(),e=e||!1,this.clear(a);if(e){var f=b;b=function(){f(),x.add(a,b,d)}}this.trunk[a]=c.setTimeout(b,d)},clear:function(a){var b=function(a){c.clearTimeout(this.trunk[a]),delete this.trunk[a]},d;if(!!a&&a in this.trunk)b.call(x,a);else if(typeof a=="undefined")for(d in this.trunk)this.trunk.hasOwnProperty(d)&&b.call(x,d)}},y=[],z=[],A=!1,B=!1,C=[],D=function(b){Galleria.theme=b,a.each(C,function(a,b){b._initialized||b._init.call(b)})},E=function(){return{array:function(a){return g.slice.call(a,0)},create:function(a,b){b=b||"div";var c=d.createElement(b);return c.className=a,c},getScriptPath:function(b){b=b||a("script:last").attr("src");var c=b.split("/");return c.length==1?"":(c.pop(),c.join("/")+"/")},animate:function(){var b=function(a){var b="transition WebkitTransition MozTransition OTransition".split(" "),d;if(c.opera)return!1;for(d=0;b[d];d++)if(typeof a[b[d]]!="undefined")return b[d];return!1}((d.body||d.documentElement).style),e={MozTransition:"transitionend",OTransition:"oTransitionEnd",WebkitTransition:"webkitTransitionEnd",transition:"transitionend"}[b],f={_default:[.25,.1,.25,1],galleria:[.645,.045,.355,1],galleriaIn:[.55,.085,.68,.53],galleriaOut:[.25,.46,.45,.94],ease:[.25,0,.25,1],linear:[.25,.25,.75,.75],"ease-in":[.42,0,1,1],"ease-out":[0,0,.58,1],"ease-in-out":[.42,0,.58,1]},g=function(b,c,d){var e={};d=d||"transition",a.each("webkit moz ms o".split(" "),function(){e["-"+this+"-"+d]=c}),b.css(e)},h=function(a){g(a,"none","transition"),Galleria.WEBKIT&&Galleria.TOUCH&&(g(a,"translate3d(0,0,0)","transform"),a.data("revert")&&(a.css(a.data("revert")),a.data("revert",null)))},i,j,k,l,m,o,p;return function(d,q,r){r=a.extend({duration:400,complete:n,stop:!1},r),d=a(d);if(!r.duration){d.css(q),r.complete.call(d[0]);return}if(!b){d.animate(q,r);return}r.stop&&(d.unbind(e),h(d)),i=!1,a.each(q,function(a,b){p=d.css(a),E.parseValue(p)!=E.parseValue(b)&&(i=!0),d.css(a,p)});if(!i){c.setTimeout(function(){r.complete.call(d[0])},r.duration);return}j=[],k=r.easing in f?f[r.easing]:f._default,l=" "+r.duration+"ms"+" cubic-bezier("+k.join(",")+")",c.setTimeout(function(b,c,d,e){return function(){b.one(c,function(a){return function(){h(a),r.complete.call(a[0])}}(b));if(Galleria.WEBKIT&&Galleria.TOUCH){m={},o=[0,0,0],a.each(["left","top"],function(a,c){c in d&&(o[a]=E.parseValue(d[c])-E.parseValue(b.css(c))+"px",m[c]=d[c],delete d[c])});if(o[0]||o[1])b.data("revert",m),j.push("-webkit-transform"+e),g(b,"translate3d("+o.join(",")+")","transform")}a.each(d,function(a,b){j.push(a+e)}),g(b,j.join(",")),b.css(d)}}(d,e,q,l),2)}}(),removeAlpha:function(a){if(p<9&&a){var b=a.style,c=a.currentStyle,d=c&&c.filter||b.filter||"";/alpha/.test(d)&&(b.filter=d.replace(/alpha\([^)]*\)/i,""))}},forceStyles:function(b,c){b=a(b),b.attr("style")&&b.data("styles",b.attr("style")).removeAttr("style"),b.css(c)},revertStyles:function(){a.each(E.array(arguments),function(b,c){c=a(c),c.removeAttr("style"),c.attr("style",""),c.data("styles")&&c.attr("style",c.data("styles")).data("styles",null)})},moveOut:function(a){E.forceStyles(a,{position:"absolute",left:-1e4})},moveIn:function(){E.revertStyles.apply(E,E.array(arguments))},elem:function(b){return b instanceof a?{$:b,dom:b[0]}:{$:a(b),dom:b}},hide:function(a,b,c){c=c||n;var d=E.elem(a),e=d.$;a=d.dom,e.data("opacity")||e.data("opacity",e.css("opacity"));var f={opacity:0};if(b){var g=p<9&&a?function(){E.removeAlpha(a),a.style.visibility="hidden",c.call(a)}:c;E.animate(a,f,{duration:b,complete:g,stop:!0})}else p<9&&a?(E.removeAlpha(a),a.style.visibility="hidden"):e.css(f)},show:function(a,b,c){c=c||n;var d=E.elem(a),e=d.$;a=d.dom;var f=parseFloat(e.data("opacity"))||1,g={opacity:f};if(b){p<9&&(e.css("opacity",0),a.style.visibility="visible");var h=p<9&&a?function(){g.opacity==1&&E.removeAlpha(a),c.call(a)}:c;E.animate(a,g,{duration:b,complete:h,stop:!0})}else p<9&&g.opacity==1&&a?(E.removeAlpha(a),a.style.visibility="visible"):e.css(g)},optimizeTouch:function(){var b,c,d,e,f={},g=function(b){b.preventDefault(),f=a.extend({},b,!0)},h=function(){this.evt=f},i=function(){this.handler.call(b,this.evt)};return function(f){a(f).bind("touchend",function(f){b=f.target,e=!0;while(b.parentNode&&b!=f.currentTarget&&e)c=a(b).data("events"),d=a(b).data("fakes"),c&&"click"in c?(e=!1,f.preventDefault(),a(b).click(g).click(),c.click.pop(),a.each(c.click,h),a(b).data("fakes",c.click),delete c.click):d&&(e=!1,f.preventDefault(),a.each(d,i)),b=b.parentNode})}}(),addTimer:function(){return x.add.apply(x,E.array(arguments)),this},clearTimer:function(){return x.clear.apply(x,E.array(arguments)),this},wait:function(b){b=a.extend({until:o,success:n,error:function(){Galleria.raise("Could not complete wait function.")},timeout:3e3},b);var d=E.timestamp(),e,f,g=function(){f=E.timestamp(),e=f-d;if(b.until(e))return b.success(),!1;if(typeof b.timeout=="number"&&f>=d+b.timeout)return b.error(),!1;c.setTimeout(g,10)};c.setTimeout(g,10)},toggleQuality:function(a,b){if(p!==7&&p!==8||!a||a.nodeName.toUpperCase()!="IMG")return;typeof b=="undefined"&&(b=a.style.msInterpolationMode==="nearest-neighbor"),a.style.msInterpolationMode=b?"bicubic":"nearest-neighbor"},insertStyleTag:function(a){var b=d.createElement("style");q().head.appendChild(b);if(b.styleSheet)b.styleSheet.cssText=a;else{var c=d.createTextNode(a);b.appendChild(c)}},loadScript:function(b,c){var d=!1,e=a("<script>").attr({src:b,async:!0}).get(0);e.onload=e.onreadystatechange=function(){!d&&(!this.readyState||this.readyState==="loaded"||this.readyState==="complete")&&(d=!0,e.onload=e.onreadystatechange=null,typeof c=="function"&&c.call(this,this))},q().head.appendChild(e)},parseValue:function(a){if(typeof a=="number")return a;if(typeof a=="string"){var b=a.match(/\-?\d|\./g);return b&&b.constructor===Array?b.join("")*1:0}return 0},timestamp:function(){return(new Date).getTime()},loadCSS:function(e,f,g){var h,i=!1,j,k=function(){var a=new Image;a.onload=a.onerror=function(b){a=null,i=!0},a.src=e};return a("link[rel=stylesheet]").each(function(){if((new RegExp(e)).test(this.href))return h=this,!1}),typeof f=="function"&&(g=f,f=b),g=g||n,h?(g.call(h,h),h):(j=d.styleSheets.length,a("#"+f).length?(a("#"+f).attr("href",e),j--,i=!0):(h=a("<link>").attr({rel:"stylesheet",href:e,id:f}).get(0),c.setTimeout(function(){var b=a('link[rel="stylesheet"], style');b.length?b.get(0).parentNode.insertBefore(h,b[0]):q().head.appendChild(h);if(p){if(j>=31){Galleria.raise("You have reached the browser stylesheet limit (31)",!0);return}h.onreadystatechange=function(a){!i&&(!this.readyState||this.readyState==="loaded"||this.readyState==="complete")&&(i=!0)}}else{var f=d.createElement("a"),g=c.location;f.href=e,!/file/.test(g.protocol)&&g.hostname==f.hostname&&g.port==f.port&&g.protocol==f.protocol?a.ajax({url:e,success:function(){i=!0},error:k}):k()}},10)),typeof g=="function"&&E.wait({until:function(){return i&&d.styleSheets.length>j},success:function(){c.setTimeout(function(){g.call(h,h)},100)},error:function(){Galleria.raise("Theme CSS could not load",!0)},timeout:1e4}),h)}}}(),F=function(){var b=function(b,c,d,e){var f=this.getOptions("easing"),g=this.getStageWidth(),h={left:g*(b.rewind?-1:1)},i={left:0};d?(h.opacity=0,i.opacity=1):h.opacity=1,a(b.next).css(h),E.animate(b.next,i,{duration:b.speed,complete:function(a){return function(){c(),a.css({left:0})}}(a(b.next).add(b.prev)),queue:!1,easing:f}),e&&(b.rewind=!b.rewind),b.prev&&(h={left:0},i={left:g*(b.rewind?1:-1)},d&&(h.opacity=1,i.opacity=0),a(b.prev).css(h),E.animate(b.prev,i,{duration:b.speed,queue:!1,easing:f,complete:function(){a(this).css("opacity",0)}}))};return{fade:function(b,c){a(b.next).css({opacity:0,left:0}).show(),E.animate(b.next,{opacity:1},{duration:b.speed,complete:c}),b.prev&&(a(b.prev).css("opacity",1).show(),E.animate(b.prev,{opacity:0},{duration:b.speed}))},flash:function(b,c){a(b.next).css({opacity:0,left:0}),b.prev?E.animate(b.prev,{opacity:0},{duration:b.speed/2,complete:function(){E.animate(b.next,{opacity:1},{duration:b.speed,complete:c})}}):E.animate(b.next,{opacity:1},{duration:b.speed,complete:c})},pulse:function(b,c){b.prev&&a(b.prev).hide(),a(b.next).css({opacity:0,left:0}).show(),E.animate(b.next,{opacity:1},{duration:b.speed,complete:c})},slide:function(a,c){b.apply(this,E.array(arguments))},fadeslide:function(a,c){b.apply(this,E.array(arguments).concat([!0]))},doorslide:function(a,c){b.apply(this,E.array(arguments).concat([!1,!0]))}}}();Galleria=function(){var g=this;this._options={},this._playing=!1,this._playtime=5e3,this._active=null,this._queue={length:0},this._data=[],this._dom={},this._thumbnails=[],this._layers=[],this._initialized=!1,this._firstrun=!1,this._stageWidth=0,this._stageHeight=0,this._target=b,this._id=parseInt(Math.random()*1e4,10);var h="container stage images image-nav image-nav-left image-nav-right info info-text info-title info-description thumbnails thumbnails-list thumbnails-container thumb-nav-left thumb-nav-right loader counter tooltip",i="current total";a.each(h.split(" "),function(a,b){g._dom[b]=E.create("galleria-"+b)}),a.each(i.split(" "),function(a,b){g._dom[b]=E.create("galleria-"+b,"span")});var j=this._keyboard={keys:{UP:38,DOWN:40,LEFT:37,RIGHT:39,RETURN:13,ESCAPE:27,BACKSPACE:8,SPACE:32},map:{},bound:!1,press:function(a){var b=a.keyCode||a.which;b in j.map&&typeof j.map[b]=="function"&&j.map[b].call(g,a)},attach:function(a){var b,c;for(b in a)a.hasOwnProperty(b)&&(c=b.toUpperCase(),c in j.keys?j.map[j.keys[c]]=a[b]:j.map[c]=a[b]);j.bound||(j.bound=!0,e.bind("keydown",j.press))},detach:function(){j.bound=!1,j.map={},e.unbind("keydown",j.press)}},k=this._controls={0:b,1:b,active:0,swap:function(){k.active=k.active?0:1},getActive:function(){return k[k.active]},getNext:function(){return k[1-k.active]}},l=this._carousel={next:g.$("thumb-nav-right"),prev:g.$("thumb-nav-left"),width:0,current:0,max:0,hooks:[],update:function(){var b=0,c=0,d=[0];a.each(g._thumbnails,function(e,f){f.ready&&(b+=f.outerWidth||a(f.container).outerWidth(!0),d[e+1]=b,c=Math.max(c,f.outerHeight||a(f.container).outerHeight(!0)))}),g.$("thumbnails").css({width:b,height:c}),l.max=b,l.hooks=d,l.width=g.$("thumbnails-list").width(),l.setClasses(),g.$("thumbnails-container").toggleClass("galleria-carousel",b>l.width),l.width=g.$("thumbnails-list").width()},bindControls:function(){var a;l.next.bind("click",function(b){b.preventDefault();if(g._options.carouselSteps==="auto"){for(a=l.current;a<l.hooks.length;a++)if(l.hooks[a]-l.hooks[l.current]>l.width){l.set(a-2);break}}else l.set(l.current+g._options.carouselSteps)}),l.prev.bind("click",function(b){b.preventDefault();if(g._options.carouselSteps==="auto")for(a=l.current;a>=0;a--){if(l.hooks[l.current]-l.hooks[a]>l.width){l.set(a+2);break}if(a===0){l.set(0);break}}else l.set(l.current-g._options.carouselSteps)})},set:function(a){a=Math.max(a,0);while(l.hooks[a-1]+l.width>=l.max&&a>=0)a--;l.current=a,l.animate()},getLast:function(a){return(a||l.current)-1},follow:function(a){if(a===0||a===l.hooks.length-2){l.set(a);return}var b=l.current;while(l.hooks[b]-l.hooks[l.current]<l.width&&b<=l.hooks.length)b++;a-1<l.current?l.set(a-1):a+2>b&&l.set(a-b+l.current+2)},setClasses:function(){l.prev.toggleClass("disabled",!l.current),l.next.toggleClass("disabled",l.hooks[l.current]+l.width>=l.max)},animate:function(a){l.setClasses();var b=l.hooks[l.current]*-1;if(isNaN(b))return;E.animate(g.get("thumbnails"),{left:b},{duration:g._options.carouselSpeed,easing:g._options.easing,queue:!1})}},m=this._tooltip={initialized:!1,open:!1,timer:"tooltip"+g._id,swapTimer:"swap"+g._id,init:function(){m.initialized=!0;var a=".galleria-tooltip{padding:3px 8px;max-width:50%;background:#ffe;color:#000;z-index:3;position:absolute;font-size:11px;line-height:1.3opacity:0;box-shadow:0 0 2px rgba(0,0,0,.4);-moz-box-shadow:0 0 2px rgba(0,0,0,.4);-webkit-box-shadow:0 0 2px rgba(0,0,0,.4);}";E.insertStyleTag(a),g.$("tooltip").css("opacity",.8),E.hide(g.get("tooltip"))},move:function(a){var b=g.getMousePosition(a).x,c=g.getMousePosition(a).y,d=g.$("tooltip"),e=b,f=c,h=d.outerHeight(!0)+1,i=d.outerWidth(!0),j=h+15,k=g.$("container").width()-i-2,l=g.$("container").height()-h-2;!isNaN(e)&&!isNaN(f)&&(e+=10,f-=30,e=Math.max(0,Math.min(k,e)),f=Math.max(0,Math.min(l,f)),c<j&&(f=j),d.css({left:e,top:f}))},bind:function(b,c){if(Galleria.TOUCH)return;m.initialized||m.init();var d=function(b,c){m.define(b,c),a(b).hover(function(){E.clearTimer(m.swapTimer),g.$("container").unbind("mousemove",m.move).bind("mousemove",m.move).trigger("mousemove"),m.show(b),E.addTimer(m.timer,function(){g.$("tooltip").stop().show().animate({opacity:1}),m.open=!0},m.open?0:500)},function(){g.$("container").unbind("mousemove",m.move),E.clearTimer(m.timer),g.$("tooltip").stop().animate({opacity:0},200,function(){g.$("tooltip").hide(),E.addTimer(m.swapTimer,function(){m.open=!1},1e3)})}).click(function(){a(this).trigger("mouseout")})};typeof c=="string"?d(b in g._dom?g.get(b):b,c):a.each(b,function(a,b){d(g.get(a),b)})},show:function(b){b=a(b in g._dom?g.get(b):b);var d=b.data("tt"),e=function(a){c.setTimeout(function(a){return function(){m.move(a)}}(a),10),b.unbind("mouseup",e)};d=typeof d=="function"?d():d;if(!d)return;g.$("tooltip").html(d.replace(/\s/,"&nbsp;")),b.bind("mouseup",e)},define:function(b,c){if(typeof c!="function"){var d=c;c=function(){return d}}b=a(b in g._dom?g.get(b):b).data("tt",c),m.show(b)}},o=this._fullscreen={scrolled:0,crop:b,transition:b,active:!1,keymap:g._keyboard.map,os:{callback:n,support:function(){var a=q().html;return a.requestFullscreen||a.mozRequestFullScreen||a.webkitRequestFullScreen}(),enter:function(a){o.os.callback=a||n;var b=q().html;b.requestFullscreen?b.requestFullscreen():b.mozRequestFullScreen?b.mozRequestFullScreen():b.webkitRequestFullScreen&&b.webkitRequestFullScreen()},exit:function(a){o.os.callback=a||n,d.exitFullscreen?d.exitFullscreen():d.mozCancelFullScreen?d.mozCancelFullScreen():d.webkitCancelFullScreen&&d.webkitCancelFullScreen()},listen:function(){if(!o.os.support)return;var a=function(){d.fullscreen||d.mozFullScreen||d.webkitIsFullScreen?o._enter(o.os.callback):o._exit(o.os.callback)};d.addEventListener("fullscreenchange",a,!1),d.addEventListener("mozfullscreenchange",a,!1),d.addEventListener("webkitfullscreenchange",a,!1)}},enter:function(a){g._options.trueFullscreen&&o.os.support?o.os.enter(a):o._enter(a)},_enter:function(c){o.active=!0,E.hide(g.getActiveImage()),g.$("container").addClass("fullscreen"),o.scrolled=f.scrollTop(),E.forceStyles(g.get("container"),{position:"fixed",top:0,left:0,width:"100%",height:"100%",zIndex:1e4});var d={height:"100%",overflow:"hidden",margin:0,padding:0},e=g.getData(),h=g._options;E.forceStyles(q().html,d),E.forceStyles(q().body,d),o.keymap=a.extend({},g._keyboard.map),g.attachKeyboard({escape:g.exitFullscreen,right:g.next,left:g.prev}),o.crop=h.imageCrop,h.fullscreenCrop!=b&&(h.imageCrop=h.fullscreenCrop);if(e&&e.big&&e.image!==e.big){var i=new Galleria.Picture,j=i.isCached(e.big),k=g.getIndex(),l=g._thumbnails[k];g.trigger({type:Galleria.LOADSTART,cached:j,rewind:!1,index:k,imageTarget:g.getActiveImage(),thumbTarget:l,galleriaData:e}),i.load(e.big,function(b){g._scaleImage(b,{complete:function(b){g.trigger({type:Galleria.LOADFINISH,cached:j,index:k,rewind:!1,imageTarget:b.image,thumbTarget:l});var c=g._controls.getActive().image;c&&a(c).width(b.image.width).height(b.image.height).attr("style",a(b.image).attr("style")).attr("src",b.image.src)}})})}g.rescale(function(){E.addTimer(!1,function(){E.show(g.getActiveImage()),typeof c=="function"&&c.call(g)},100),g.trigger(Galleria.FULLSCREEN_ENTER)}),f.resize(function(){o.scale()})},scale:function(){g.rescale()},exit:function(a){g._options.trueFullscreen&&o.os.support?o.os.exit(a):o._exit(a)},_exit:function(a){o.active=!1,E.hide(g.getActiveImage()),g.$("container").removeClass("fullscreen"),E.revertStyles(g.get("container"),q().html,q().body),c.scrollTo(0,o.scrolled),g.detachKeyboard(),g.attachKeyboard(o.keymap),g._options.imageCrop=o.crop;var b=g.getData().big,d=g._controls.getActive().image;!g.getData().iframe&&d&&b&&b==d.src&&c.setTimeout(function(a){return function(){d.src=a}}(g.getData().image),1),g.rescale(function(){E.addTimer(!1,function(){E.show(g.getActiveImage()),typeof a=="function"&&a.call(g),f.trigger("resize")},50),g.trigger(Galleria.FULLSCREEN_EXIT)}),f.unbind("resize",o.scale)}};o.os.listen();var r=this._idle={timer:"idle"+g._id,trunk:[],bound:!1,add:function(b,c){if(!b)return;r.bound||r.addEvent(),b=a(b);var d={},e;for(e in c)c.hasOwnProperty(e)&&(d[e]=b.css(e));b.data("idle",{from:d,to:c,complete:!0,busy:!1}),r.addTimer(),r.trunk.push(b)},remove:function(b){b=jQuery(b),a.each(r.trunk,function(a,c){c&&c.length&&!c.not(b).length&&(g._idle.show(b),g._idle.trunk.splice(a,1))}),r.trunk.length||(r.removeEvent(),E.clearTimer(r.timer))},addEvent:function(){r.bound=!0,g.$("container").bind("mousemove click",r.showAll)},removeEvent:function(){r.bound=!1,g.$("container").unbind("mousemove click",r.showAll)},addTimer:function(){E.addTimer(r.timer,function(){r.hide()},g._options.idleTime)},hide:function(){if(!g._options.idleMode||g.getIndex()===!1||g.getData().iframe)return;g.trigger(Galleria.IDLE_ENTER),a.each(r.trunk,function(a,b){var c=b.data("idle");if(!c)return;b.data("idle").complete=!1,E.animate(b,c.to,{duration:g._options.idleSpeed})})},showAll:function(){E.clearTimer(r.timer),a.each(r.trunk,function(a,b){r.show(b)})},show:function(b){var c=b.data("idle");!c.busy&&!c.complete&&(c.busy=!0,g.trigger(Galleria.IDLE_EXIT),E.clearTimer(r.timer),E.animate(b,c.from,{duration:g._options.idleSpeed/2,complete:function(){a(this).data("idle").busy=!1,a(this).data("idle").complete=!0}})),r.addTimer()}},s=this._lightbox={width:0,height:0,initialized:!1,active:null,image:null,elems:{},keymap:!1,init:function(){g.trigger(Galleria.LIGHTBOX_OPEN);if(s.initialized)return;s.initialized=!0;var b="overlay box content shadow title info close prevholder prev nextholder next counter image",c={},d=g._options,e="",f="position:absolute;",h="lightbox-",i={overlay:"position:fixed;display:none;opacity:"+d.overlayOpacity+";filter:alpha(opacity="+d.overlayOpacity*100+");top:0;left:0;width:100%;height:100%;background:"+d.overlayBackground+";z-index:99990",box:"position:fixed;display:none;width:400px;height:400px;top:50%;left:50%;margin-top:-200px;margin-left:-200px;z-index:99991",shadow:f+"background:#000;width:100%;height:100%;",content:f+"background-color:#fff;top:10px;left:10px;right:10px;bottom:10px;overflow:hidden",info:f+"bottom:10px;left:10px;right:10px;color:#444;font:11px/13px arial,sans-serif;height:13px",close:f+"top:10px;right:10px;height:20px;width:20px;background:#fff;text-align:center;cursor:pointer;color:#444;font:16px/22px arial,sans-serif;z-index:99999",image:f+"top:10px;left:10px;right:10px;bottom:30px;overflow:hidden;display:block;",prevholder:f+"width:50%;top:0;bottom:40px;cursor:pointer;",nextholder:f+"width:50%;top:0;bottom:40px;right:-1px;cursor:pointer;",prev:f+"top:50%;margin-top:-20px;height:40px;width:30px;background:#fff;left:20px;display:none;text-align:center;color:#000;font:bold 16px/36px arial,sans-serif",next:f+"top:50%;margin-top:-20px;height:40px;width:30px;background:#fff;right:20px;left:auto;display:none;font:bold 16px/36px arial,sans-serif;text-align:center;color:#000",title:"float:left",counter:"float:right;margin-left:8px;"},j=function(b){return b.hover(function(){a(this).css("color","#bbb")},function(){a(this).css("color","#444")})},k={};p&&p>7&&(i.nextholder+="background:#000;filter:alpha(opacity=0);",i.prevholder+="background:#000;filter:alpha(opacity=0);"),a.each(i,function(a,b){e+=".galleria-"+h+a+"{"+b+"}"}),e+=".galleria-"+h+"box.iframe .galleria-"+h+"prevholder,"+".galleria-"+h+"box.iframe .galleria-"+h+"nextholder{"+"width:100px;height:100px;top:50%;margin-top:-70px}",E.insertStyleTag(e),a.each(b.split(" "),function(a,b){g.addElement("lightbox-"+b),c[b]=s.elems[b]=g.get("lightbox-"+b)}),s.image=new Galleria.Picture,a.each({box:"shadow content close prevholder nextholder",info:"title counter",content:"info image",prevholder:"prev",nextholder:"next"},function(b,c){var d=[];a.each(c.split(" "),function(a,b){d.push(h+b)}),k[h+b]=d}),g.append(k),a(c.image).append(s.image.container),a(q().body).append(c.overlay,c.box),E.optimizeTouch(c.box),j(a(c.close).bind("click",s.hide).html("&#215;")),a.each(["Prev","Next"],function(b,d){var e=a(c[d.toLowerCase()]).html(/v/.test(d)?"&#8249;&nbsp;":"&nbsp;&#8250;"),f=a(c[d.toLowerCase()+"holder"]);f.bind("click",function(){s["show"+d]()});if(p<8||Galleria.TOUCH){e.show();return}f.hover(function(){e.show()},function(a){e.stop().fadeOut(200)})}),a(c.overlay).bind("click",s.hide),Galleria.IPAD&&(g._options.lightboxTransitionSpeed=0)},rescale:function(b){var c=Math.min(f.width()-40,s.width),d=Math.min(f.height()-60,s.height),e=Math.min(c/s.width,d/s.height),h=Math.round(s.width*e)+40,i=Math.round(s.height*e)+60,j={width:h,height:i,"margin-top":Math.ceil(i/2)*-1,"margin-left":Math.ceil(h/2)*-1};b?a(s.elems.box).css(j):a(s.elems.box).animate(j,{duration:g._options.lightboxTransitionSpeed,easing:g._options.easing,complete:function(){var b=s.image,c=g._options.lightboxFadeSpeed;g.trigger({type:Galleria.LIGHTBOX_IMAGE,imageTarget:b.image}),a(b.container).show(),a(b.image).animate({opacity:1},c),E.show(s.elems.info,c)}})},hide:function(){s.image.image=null,f.unbind("resize",s.rescale),a(s.elems.box).hide(),E.hide(s.elems.info),g.detachKeyboard(),g.attachKeyboard(s.keymap),s.keymap=!1,E.hide(s.elems.overlay,200,function(){a(this).hide().css("opacity",g._options.overlayOpacity),g.trigger(Galleria.LIGHTBOX_CLOSE)})},showNext:function(){s.show(g.getNext(s.active))},showPrev:function(){s.show(g.getPrev(s.active))},show:function(b){s.active=b=typeof b=="number"?b:g.getIndex()||0,s.initialized||s.init(),s.keymap||(s.keymap=a.extend({},g._keyboard.map),g.attachKeyboard({escape:s.hide,right:s.showNext,left:s.showPrev})),f.unbind("resize",s.rescale);var d=g.getData(b),e=g.getDataLength(),h=g.getNext(b),i,j,k;E.hide(s.elems.info);try{for(k=g._options.preload;k>0;k--)j=new Galleria.Picture,i=g.getData(h),j.preload("big"in i?i.big:i.image),h=g.getNext(h)}catch(l){}s.image.isIframe=!!d.iframe,a(s.elems.box).toggleClass("iframe",!!d.iframe),s.image.load(d.iframe||d.big||d.image,function(g){s.width=g.isIframe?a(c).width():g.original.width,s.height=g.isIframe?a(c).height():g.original.height,a(g.image).css({width:g.isIframe?"100%":"100.1%",height:g.isIframe?"100%":"100.1%",top:0,zIndex:99998,opacity:0,visibility:"visible"}),s.elems.title.innerHTML=d.title||"",s.elems.counter.innerHTML=b+1+" / "+e,f.resize(s.rescale),s.rescale()}),a(s.elems.overlay).show().css("visibility","visible"),a(s.elems.box).show()}};return this},Galleria.prototype={constructor:Galleria,init:function(c,d){var e=this;d=t(d),this._original={target:c,options:d,data:null},this._target=this._dom.target=c.nodeName?c:a(c).get(0),this._original.html=this._target.innerHTML,z.push(this);if(!this._target){Galleria.raise("Target not found",!0);return}return this._options={autoplay:!1,carousel:!0,carouselFollow:!0,carouselSpeed:400,carouselSteps:"auto",clicknext:!1,dailymotion:{foreground:"%23EEEEEE",highlight:"%235BCEC5",background:"%23222222",logo:0,hideInfos:1},dataConfig:function(a){return{}},dataSelector:"img",dataSource:this._target,debug:b,dummy:b,easing:"galleria",extend:function(a){},fullscreenCrop:b,fullscreenDoubleTap:!0,fullscreenTransition:b,height:0,idleMode:!0,idleTime:3e3,idleSpeed:200,imageCrop:!1,imageMargin:0,imagePan:!1,imagePanSmoothness:12,imagePosition:"50%",imageTimeout:b,initialTransition:b,keepSource:!1,layerFollow:!0,lightbox:!1,lightboxFadeSpeed:200,lightboxTransitionSpeed:200,linkSourceImages:!0,maxScaleRatio:b,minScaleRatio:b,overlayOpacity:.85,overlayBackground:"#0b0b0b",pauseOnInteraction:!0,popupLinks:!1,preload:2,queue:!0,responsive:!1,show:0,showInfo:!0,showCounter:!0,showImagenav:!0,swipe:!0,thumbCrop:!0,thumbEventType:"click",thumbFit:!0,thumbMargin:0,thumbQuality:"auto",thumbnails:!0,touchTransition:b,transition:"fade",transitionInitial:b,transitionSpeed:400,trueFullscreen:!0,useCanvas:!1,vimeo:{title:0,byline:0,portrait:0,color:"aaaaaa"},wait:5e3,width:"auto",youtube:{modestbranding:1,autohide:1,color:"white",hd:1,rel:0,showinfo:0}},this._options.initialTransition=this._options.initialTransition||this._options.transitionInitial,d&&d.debug===!1&&(i=!1),d&&typeof d.imageTimeout=="number"&&(j=d.imageTimeout),d&&typeof d.dummy=="string"&&(k=d.dummy),a(this._target).children().hide(),typeof Galleria.theme=="object"?this._init():C.push(this),this},_init:function(){var b=this,e=this._options;if(this._initialized)return Galleria.raise("Init failed: Gallery instance already initialized."),this;this._initialized=!0;if(!Galleria.theme)return Galleria.raise("Init failed: No theme found.",!0),this;a.extend(!0,e,Galleria.theme.defaults,this._original.options,Galleria.configure.options),function(a){if(!("getContext"in a)){a=null;return}B=B||{elem:a,context:a.getContext("2d"),cache:{},length:0}}(d.createElement("canvas")),this.bind(Galleria.DATA,function(){Galleria.QUIRK&&Galleria.raise("Your page is in Quirks mode, Galleria may not render correctly. Please validate your HTML."),this._original.data=this._data,this.get("total").innerHTML=this.getDataLength();var a=this.$("container"),d={width:0,height:0},e=function(){return b.$("stage").height()};E.wait({until:function(){return d=b._getWH(),a.width(d.width).height(d.height),e()&&d.width&&d.height>50},success:function(){b._width=d.width,b._height=d.height,Galleria.WEBKIT?c.setTimeout(function(){b._run()},1):b._run()},error:function(){e()?Galleria.raise("Could not extract sufficient width/height of the gallery container. Traced measures: width:"+d.width+"px, height: "+d.height+"px.",!0):Galleria.raise("Could not extract a stage height from the CSS. Traced height: "+e()+"px.",!0)},timeout:typeof this._options.wait=="number"?this._options.wait:!1})}),this.append({"info-text":["info-title","info-description"],info:["info-text"],"image-nav":["image-nav-right","image-nav-left"],stage:["images","loader","counter","image-nav"],"thumbnails-list":["thumbnails"],"thumbnails-container":["thumb-nav-left","thumbnails-list","thumb-nav-right"],container:["stage","thumbnails-container","info","tooltip"]}),E.hide(this.$("counter").append(this.get("current"),d.createTextNode(" / "),this.get("total"))),this.setCounter("&#8211;"),E.hide(b.get("tooltip")),this.$("container").addClass(Galleria.TOUCH?"touch":"notouch"),a.each(new Array(2),function(c){var d=new Galleria.Picture;a(d.container).css({position:"absolute",top:0,left:0}).prepend(b._layers[c]=a(E.create("galleria-layer")).css({position:"absolute",top:0,left:0,right:0,bottom:0,zIndex:2})[0]),b.$("images").append(d.container),b._controls[c]=d}),this.$("images").css({position:"relative",top:0,left:0,width:"100%",height:"100%"}),this.$("thumbnails, thumbnails-list").css({overflow:"hidden",position:"relative"}),this.$("image-nav-right, image-nav-left").bind("click",function(a){e.clicknext&&a.stopPropagation(),e.pauseOnInteraction&&b.pause();var c=/right/.test(this.className)?"next":"prev";b[c]()}),a.each(["info","counter","image-nav"],function(a,c){e["show"+c.substr(0,1).toUpperCase()+c.substr(1).replace(/-/,"")]===!1&&E.moveOut(b.get(c.toLowerCase()))}),this.load(),!e.keepSource&&!p&&(this._target.innerHTML=""),this.get("errors")&&this.appendChild("target","errors"),this.appendChild("target","container");if(e.carousel){var g=0,h=e.show;this.bind(Galleria.THUMBNAIL,function(){this.updateCarousel(),++g==this.getDataLength()&&typeof h=="number"&&h>0&&this._carousel.follow(h)})}return e.responsive&&f.bind("resize",function(){b.isFullscreen()||b.resize()}),e.swipe&&(function(a){var c=[0,0],d=[0,0],e=30,f=100,g=!1,h=0,i,j={start:"touchstart",move:"touchmove",stop:"touchend"},k=function(a){return a.originalEvent.touches?a.originalEvent.touches[0]:a},l=function(a){if(a.originalEvent.touches&&a.originalEvent.touches.length>1)return;i=k(a),d=[i.pageX,i.pageY],c[0]||(c=d),Math.abs(c[0]-d[0])>10&&a.preventDefault()},m=function(i){a.unbind(j.move,l);if(i.originalEvent.touches&&i.originalEvent.touches.length||g){g=!g;return}E.timestamp()-h<1e3&&Math.abs(c[0]-d[0])>e&&Math.abs(c[1]-d[1])<f&&(i.preventDefault(),b[c[0]>d[0]?"next":"prev"]()),c=d=[0,0]};a.bind(j.start,function(b){if(b.originalEvent.touches&&b.originalEvent.touches.length>1)return;i=k(b),h=E.timestamp(),c=d=[i.pageX,i.pageY],a.bind(j.move,l).one(j.stop,m)})}(b.$("images")),e.fullscreenDoubleTap&&this.$("stage").bind("touchstart",function(){var a,c,d,e,f,g,h=function(a){return a.originalEvent.touches?a.originalEvent.touches[0]:a};return function(i){g=Galleria.utils.timestamp(),c=h(i).pageX,d=h(i).pageY;if(g-a<500&&c-e<20&&d-f<20){b.toggleFullscreen(),i.preventDefault(),b.$("stage").unbind("touchend",arguments.callee);return}a=g,e=c,f=d}}())),E.optimizeTouch(this.get("container")),a.each(Galleria.on.binds,function(a,c){b.bind(c.type,c.callback)}),this},_getWH:function(){var b=this.$("container"),c=this.$("target"),d=this,e={},f;return a.each(["width","height"],function(a,g){d._options[g]&&typeof d._options[g]=="number"?e[g]=d._options[g]:(f=[E.parseValue(b.css(g)),E.parseValue(c.css(g)),b[g](),c[g]()],d["_"+g]||f.splice(f.length,E.parseValue(b.css("min-"+g)),E.parseValue(c.css("min-"+g))),e[g]=Math.max.apply(Math,f))}),d._options.height&&d._options.height<2&&(e.height=e.width*d._options.height),e},_createThumbnails:function(){this.get("total").innerHTML=this.getDataLength();var b,e,f,g,h,i,j=this,k=this._options,l=function(){var a=j.$("thumbnails").find(".active");return a.length?a.find("img").attr("src"):!1}(),m=typeof k.thumbnails=="string"?k.thumbnails.toLowerCase():null,n=function(a){return d.defaultView&&d.defaultView.getComputedStyle?d.defaultView.getComputedStyle(f.container,null)[a]:i.css(a)},o=function(b,c,d){return function(){a(d).append(b),j.trigger({type:Galleria.THUMBNAIL,thumbTarget:b,index:c,galleriaData:j.getData(c)})}},p=function(b){k.pauseOnInteraction&&j.pause();var c=a(b.currentTarget).data("index");j.getIndex()!==c&&j.show(c),b.preventDefault()},q=function(b){b.scale({width:b.data.width,height:b.data.height,crop:k.thumbCrop,margin:k.thumbMargin,canvas:k.useCanvas,complete:function(b){var c=["left","top"],d=["Width","Height"],e,f,g=j.getData(b.index),h=g.thumb.split(":"
);a.each(d,function(d,g){e=g.toLowerCase(),(k.thumbCrop!==!0||k.thumbCrop===e)&&k.thumbFit&&(f={},f[e]=b[e],a(b.container).css(f),f={},f[c[d]]=0,a(b.image).css(f)),b["outer"+g]=a(b.container)["outer"+g](!0)}),E.toggleQuality(b.image,k.thumbQuality===!0||k.thumbQuality==="auto"&&b.original.width<b.width*3),g.iframe&&h.length==2&&h[0]in v&&v[h[0]].getThumb(h[1],function(a){return function(b){a.src=b}}(b.image)),j.trigger({type:Galleria.THUMBNAIL,thumbTarget:b.image,index:b.data.order,galleriaData:j.getData(b.data.order)})}})};this._thumbnails=[],this.$("thumbnails").empty();for(b=0;this._data[b];b++)g=this._data[b],k.thumbnails===!0&&(g.thumb||g.image)?(f=new Galleria.Picture(b),f.index=b,e=g.thumb||g.image,this.$("thumbnails").append(f.container),i=a(f.container),f.data={width:E.parseValue(n("width")),height:E.parseValue(n("height")),order:b},k.thumbFit&&k.thumbCrop!==!0?i.css({width:"auto",height:"auto"}):i.css({width:f.data.width,height:f.data.height}),h=e.split(":"),h.length==2&&h[0]in v?f.load("data:image/gif;base64,R0lGODlhAQABAPABAP///wAAACH5BAEKAAAALAAAAAABAAEAAAICRAEAOw%3D%3D",{height:f.data.height,width:f.data.height*1.25},q):f.load(e,q),k.preload==="all"&&f.preload(g.image)):g.iframe||m==="empty"||m==="numbers"?(f={container:E.create("galleria-image"),image:E.create("img","span"),ready:!0},m==="numbers"&&a(f.image).text(b+1),g.iframe&&a(f.image).addClass("iframe"),this.$("thumbnails").append(f.container),c.setTimeout(o(f.image,b,f.container),50+b*20)):f={container:null,image:null},a(f.container).add(k.keepSource&&k.linkSourceImages?g.original:null).data("index",b).bind(k.thumbEventType,p),l===e&&a(f.container).addClass("active"),this._thumbnails.push(f)},_run:function(){var d=this;d._createThumbnails(),E.wait({timeout:1e4,until:function(){return Galleria.OPERA&&d.$("stage").css("display","inline-block"),d._stageWidth=d.$("stage").width(),d._stageHeight=d.$("stage").height(),d._stageWidth&&d._stageHeight>50},success:function(){y.push(d),E.show(d.get("counter")),d._options.carousel&&d._carousel.bindControls(),d._options.autoplay&&(d.pause(),typeof d._options.autoplay=="number"&&(d._playtime=d._options.autoplay),d.trigger(Galleria.PLAY),d._playing=!0);if(d._firstrun){typeof d._options.show=="number"&&d.show(d._options.show);return}d._firstrun=!0,Galleria.History&&Galleria.History.change(function(a){isNaN(a)?c.history.go(-1):d.show(a,b,!0)}),d.trigger(Galleria.READY),Galleria.theme.init.call(d,d._options),a.each(Galleria.ready.callbacks,function(){this.call(d,d._options)}),d._options.extend.call(d,d._options),/^[0-9]{1,4}$/.test(m)&&Galleria.History?d.show(m,b,!0):d._data[d._options.show]&&d.show(d._options.show)},error:function(){Galleria.raise("Stage width or height is too small to show the gallery. Traced measures: width:"+d._stageWidth+"px, height: "+d._stageHeight+"px.",!0)}})},load:function(b,c,d){var e=this;return this._data=[],this._thumbnails=[],this.$("thumbnails").empty(),typeof c=="function"&&(d=c,c=null),b=b||this._options.dataSource,c=c||this._options.dataSelector,d=d||this._options.dataConfig,/^function Object/.test(b.constructor)&&(b=[b]),b.constructor===Array?(this.validate(b)?(this._data=b,this._parseData().trigger(Galleria.DATA)):Galleria.raise("Load failed: JSON Array not valid."),this):(c+=",.video,.iframe",a(b).find(c).each(function(b,c){c=a(c);var f={},g=c.parent(),h=g.attr("href"),i=g.attr("rel");h&&(c[0].nodeName=="IMG"||c.hasClass("video"))&&w(h)?f.video=h:h&&c.hasClass("iframe")?f.iframe=h:f.image=f.big=h,i&&(f.big=i),a.each("big title description link layer".split(" "),function(a,b){c.data(b)&&(f[b]=c.data(b))}),e._data.push(a.extend({title:c.attr("title")||"",thumb:c.attr("src"),image:c.attr("src"),big:c.attr("src"),description:c.attr("alt")||"",link:c.attr("longdesc"),original:c.get(0)},f,d(c)))}),this.getDataLength()?this._parseData().trigger(Galleria.DATA):Galleria.raise("Load failed: no data found."),this)},_parseData:function(){var b=this,c;return a.each(this._data,function(d,e){c=b._data[d],"thumb"in e==0&&(c.thumb=e.image),!1 in e&&(c.big=e.image);if("video"in e){var f=w(e.video);if(f){c.iframe=v[f.provider].embed(f.id)+function(){if(typeof b._options[f.provider]=="object"){var c="?",d=[];return a.each(b._options[f.provider],function(a,b){d.push(a+"="+b)}),f.provider=="youtube"&&(d=["wmode=opaque"].concat(d)),c+d.join("&")}return""}(),delete c.video;if(!("thumb"in c)||!c.thumb)c.thumb=f.provider+":"+f.id}}}),this},destroy:function(){return this.get("target").innerHTML=this._original.html,this},splice:function(){var a=this,b=E.array(arguments);return c.setTimeout(function(){g.splice.apply(a._data,b),a._parseData()._createThumbnails()},2),a},push:function(){var a=this,b=E.array(arguments);return c.setTimeout(function(){g.push.apply(a._data,b),a._parseData()._createThumbnails()},2),a},_getActive:function(){return this._controls.getActive()},validate:function(a){return!0},bind:function(a,b){return a=u(a),this.$("container").bind(a,this.proxy(b)),this},unbind:function(a){return a=u(a),this.$("container").unbind(a),this},trigger:function(b){return b=typeof b=="object"?a.extend(b,{scope:this}):{type:u(b),scope:this},this.$("container").trigger(b),this},addIdleState:function(a,b){return this._idle.add.apply(this._idle,E.array(arguments)),this},removeIdleState:function(a){return this._idle.remove.apply(this._idle,E.array(arguments)),this},enterIdleMode:function(){return this._idle.hide(),this},exitIdleMode:function(){return this._idle.showAll(),this},enterFullscreen:function(a){return this._fullscreen.enter.apply(this,E.array(arguments)),this},exitFullscreen:function(a){return this._fullscreen.exit.apply(this,E.array(arguments)),this},toggleFullscreen:function(a){return this._fullscreen[this.isFullscreen()?"exit":"enter"].apply(this,E.array(arguments)),this},bindTooltip:function(a,b){return this._tooltip.bind.apply(this._tooltip,E.array(arguments)),this},defineTooltip:function(a,b){return this._tooltip.define.apply(this._tooltip,E.array(arguments)),this},refreshTooltip:function(a){return this._tooltip.show.apply(this._tooltip,E.array(arguments)),this},openLightbox:function(){return this._lightbox.show.apply(this._lightbox,E.array(arguments)),this},closeLightbox:function(){return this._lightbox.hide.apply(this._lightbox,E.array(arguments)),this},getActiveImage:function(){return this._getActive().image||b},getActiveThumb:function(){return this._thumbnails[this._active].image||b},getMousePosition:function(a){return{x:a.pageX-this.$("container").offset().left,y:a.pageY-this.$("container").offset().top}},addPan:function(b){if(this._options.imageCrop===!1)return;b=a(b||this.getActiveImage());var c=this,d=b.width()/2,e=b.height()/2,f=parseInt(b.css("left"),10),g=parseInt(b.css("top"),10),h=f||0,i=g||0,j=0,k=0,l=!1,m=E.timestamp(),n=0,o=0,q=function(a,c,d){if(a>0){o=Math.round(Math.max(a*-1,Math.min(0,c)));if(n!==o){n=o;if(p===8)b.parent()["scroll"+d](o*-1);else{var e={};e[d.toLowerCase()]=o,b.css(e)}}}},r=function(a){if(E.timestamp()-m<50)return;l=!0,d=c.getMousePosition(a).x,e=c.getMousePosition(a).y},s=function(a){if(!l)return;j=b.width()-c._stageWidth,k=b.height()-c._stageHeight,f=d/c._stageWidth*j*-1,g=e/c._stageHeight*k*-1,h+=(f-h)/c._options.imagePanSmoothness,i+=(g-i)/c._options.imagePanSmoothness,q(k,i,"Top"),q(j,h,"Left")};return p===8&&(b.parent().scrollTop(i*-1).scrollLeft(h*-1),b.css({top:0,left:0})),this.$("stage").unbind("mousemove",r).bind("mousemove",r),E.addTimer("pan"+c._id,s,50,!0),this},proxy:function(a,b){return typeof a!="function"?n:(b=b||this,function(){return a.apply(b,E.array(arguments))})},removePan:function(){return this.$("stage").unbind("mousemove"),E.clearTimer("pan"+this._id),this},addElement:function(b){var c=this._dom;return a.each(E.array(arguments),function(a,b){c[b]=E.create("galleria-"+b)}),this},attachKeyboard:function(a){return this._keyboard.attach.apply(this._keyboard,E.array(arguments)),this},detachKeyboard:function(){return this._keyboard.detach.apply(this._keyboard,E.array(arguments)),this},appendChild:function(a,b){return this.$(a).append(this.get(b)||b),this},prependChild:function(a,b){return this.$(a).prepend(this.get(b)||b),this},remove:function(a){return this.$(E.array(arguments).join(",")).remove(),this},append:function(a){var b,c;for(b in a)if(a.hasOwnProperty(b))if(a[b].constructor===Array)for(c=0;a[b][c];c++)this.appendChild(b,a[b][c]);else this.appendChild(b,a[b]);return this},_scaleImage:function(b,c){b=b||this._controls.getActive();if(!b)return;var d=this,e,f=function(b){a(b.container).children(":first").css({top:Math.max(0,E.parseValue(b.image.style.top)),left:Math.max(0,E.parseValue(b.image.style.left)),width:E.parseValue(b.image.width),height:E.parseValue(b.image.height)})};return c=a.extend({width:this._stageWidth,height:this._stageHeight,crop:this._options.imageCrop,max:this._options.maxScaleRatio,min:this._options.minScaleRatio,margin:this._options.imageMargin,position:this._options.imagePosition},c),this._options.layerFollow&&this._options.imageCrop!==!0?typeof c.complete=="function"?(e=c.complete,c.complete=function(){e.call(b,b),f(b)}):c.complete=f:a(b.container).children(":first").css({top:0,left:0}),b.scale(c),this},updateCarousel:function(){return this._carousel.update(),this},resize:function(c,d){typeof c=="function"&&(d=c,c=b),c=a.extend({width:0,height:0},c);var e=this,f=this.$("container"),g=this._options.responsive=="aspect"&&(!c.width||!c.height),h;return a.each(c,function(a,b){b||(f[a]("auto"),c[a]=e._getWH()[a])}),g&&(h=Math.min(c.width/this._width,c.height/this._height)),a.each(c,function(a,b){f[a](h?h*e["_"+a]:b)}),this.rescale(d)},rescale:function(a,c,d){var e=this;typeof a=="function"&&(d=a,a=b);var f=function(){e._stageWidth=a||e.$("stage").width(),e._stageHeight=c||e.$("stage").height(),e._scaleImage(),e._options.carousel&&e.updateCarousel(),e.trigger(Galleria.RESCALE),typeof d=="function"&&d.call(e)};return Galleria.WEBKIT&&!Galleria.TOUCH&&!a&&!c?E.addTimer(!1,f,10):f.call(e),this},refreshImage:function(){return this._scaleImage(),this._options.imagePan&&this.addPan(),this},show:function(a,b,c){if(a===!1||!this._options.queue&&this._queue.stalled)return;a=Math.max(0,Math.min(parseInt(a,10),this.getDataLength()-1)),b=typeof b!="undefined"?!!b:a<this.getIndex(),c=c||!1;if(!c&&Galleria.History){Galleria.History.set(a.toString());return}return this._active=a,g.push.call(this._queue,{index:a,rewind:b}),this._queue.stalled||this._show(),this},_show:function(){var d=this,e=this._queue[0],f=this.getData(e.index);if(!f)return;var h=f.iframe||(this.isFullscreen()&&"big"in f?f.big:f.image),i=this._controls.getActive(),j=this._controls.getNext(),k=j.isCached(h),l=this._thumbnails[e.index],m=function(){a(j.image).trigger("mouseup")},n=function(b,e,f,h,i){return function(){var j;d._queue.stalled=!1,E.toggleQuality(e.image,d._options.imageQuality),d._layers[d._controls.active].innerHTML="",a(f.container).css({zIndex:0,opacity:0}).show(),f.isIframe&&a(f.container).find("iframe").remove(),d.$("container").toggleClass("iframe",!!b.iframe),a(e.container).css({zIndex:1,left:0,top:0}).show(),d._controls.swap(),d._options.imagePan&&d.addPan(e.image),(b.link||d._options.lightbox||d._options.clicknext)&&a(e.image).css({cursor:"pointer"}).bind("mouseup",function(){if(d._options.clicknext&&!Galleria.TOUCH){d._options.pauseOnInteraction&&d.pause(),d.next();return}if(b.link){d._options.popupLinks?j=c.open(b.link,"_blank"):c.location.href=b.link;return}d._options.lightbox&&d.openLightbox()}),g.shift.call(d._queue),d._queue.length&&d._show(),d._playCheck(),d.trigger({type:Galleria.IMAGE,index:h.index,imageTarget:e.image,thumbTarget:i.image,galleriaData:b})}}(f,j,i,e,l);this._options.carousel&&this._options.carouselFollow&&this._carousel.follow(e.index);if(this._options.preload){var o,p,q=this.getNext(),r;try{for(p=this._options.preload;p>0;p--)o=new Galleria.Picture,r=d.getData(q),o.preload(this.isFullscreen()&&"big"in r?r.big:r.image),q=d.getNext(q)}catch(s){}}E.show(j.container),j.isIframe=!!f.iframe,a(d._thumbnails[e.index].container).addClass("active").siblings(".active").removeClass("active"),d.trigger({type:Galleria.LOADSTART,cached:k,index:e.index,rewind:e.rewind,imageTarget:j.image,thumbTarget:l.image,galleriaData:f}),j.load(h,function(c){var g=a(d._layers[1-d._controls.active]).html(f.layer||"").hide();d._scaleImage(c,{complete:function(c){"image"in i&&E.toggleQuality(i.image,!1),E.toggleQuality(c.image,!1),d._queue.stalled=!0,d.removePan(),d.setInfo(e.index),d.setCounter(e.index),f.layer&&(g.show(),(f.link||d._options.lightbox||d._options.clicknext)&&g.css("cursor","pointer").unbind("mouseup").mouseup(m)),d.trigger({type:Galleria.LOADFINISH,cached:k,index:e.index,rewind:e.rewind,imageTarget:c.image,thumbTarget:d._thumbnails[e.index].image,galleriaData:d.getData(e.index)});var h=d._options.transition;a.each({initial:i.image===null,touch:Galleria.TOUCH,fullscreen:d.isFullscreen()},function(a,c){if(c&&d._options[a+"Transition"]!==b)return h=d._options[a+"Transition"],!1});if(h in F==0)n();else{var j={prev:i.container,next:c.container,rewind:e.rewind,speed:d._options.transitionSpeed||400};F[h].call(d,j,n)}}})})},getNext:function(a){return a=typeof a=="number"?a:this.getIndex(),a===this.getDataLength()-1?0:a+1},getPrev:function(a){return a=typeof a=="number"?a:this.getIndex(),a===0?this.getDataLength()-1:a-1},next:function(){return this.getDataLength()>1&&this.show(this.getNext(),!1),this},prev:function(){return this.getDataLength()>1&&this.show(this.getPrev(),!0),this},get:function(a){return a in this._dom?this._dom[a]:null},getData:function(a){return a in this._data?this._data[a]:this._data[this._active]},getDataLength:function(){return this._data.length},getIndex:function(){return typeof this._active=="number"?this._active:!1},getStageHeight:function(){return this._stageHeight},getStageWidth:function(){return this._stageWidth},getOptions:function(a){return typeof a=="undefined"?this._options:this._options[a]},setOptions:function(b,c){return typeof b=="object"?a.extend(this._options,b):this._options[b]=c,this},play:function(a){return this._playing=!0,this._playtime=a||this._playtime,this._playCheck(),this.trigger(Galleria.PLAY),this},pause:function(){return this._playing=!1,this.trigger(Galleria.PAUSE),this},playToggle:function(a){return this._playing?this.pause():this.play(a)},isPlaying:function(){return this._playing},isFullscreen:function(){return this._fullscreen.active},_playCheck:function(){var a=this,b=0,c=20,d=E.timestamp(),e="play"+this._id;if(this._playing){E.clearTimer(e);var f=function(){b=E.timestamp()-d;if(b>=a._playtime&&a._playing){E.clearTimer(e),a.next();return}a._playing&&(a.trigger({type:Galleria.PROGRESS,percent:Math.ceil(b/a._playtime*100),seconds:Math.floor(b/1e3),milliseconds:b}),E.addTimer(e,f,c))};E.addTimer(e,f,c)}},setPlaytime:function(a){return this._playtime=a,this},setIndex:function(a){return this._active=a,this},setCounter:function(a){typeof a=="number"?a++:typeof a=="undefined"&&(a=this.getIndex()+1),this.get("current").innerHTML=a;if(p){var b=this.$("counter"),c=b.css("opacity");parseInt(c,10)===1?E.removeAlpha(b[0]):this.$("counter").css("opacity",c)}return this},setInfo:function(b){var c=this,d=this.getData(b);return a.each(["title","description"],function(a,b){var e=c.$("info-"+b);d[b]?e[d[b].length?"show":"hide"]().html(d[b]):e.empty().hide()}),this},hasInfo:function(a){var b="title description".split(" "),c;for(c=0;b[c];c++)if(!!this.getData(a)[b[c]])return!0;return!1},jQuery:function(b){var c=this,d=[];a.each(b.split(","),function(b,e){e=a.trim(e),c.get(e)&&d.push(e)});var e=a(c.get(d.shift()));return a.each(d,function(a,b){e=e.add(c.get(b))}),e},$:function(a){return this.jQuery.apply(this,E.array(arguments))}},a.each(s,function(a,b){var c=/_/.test(b)?b.replace(/_/g,""):b;Galleria[b.toUpperCase()]="galleria."+c}),a.extend(Galleria,{IE9:p===9,IE8:p===8,IE7:p===7,IE6:p===6,IE:p,WEBKIT:/webkit/.test(l),CHROME:/chrome/.test(l),SAFARI:/safari/.test(l)&&!/chrome/.test(l),QUIRK:p&&d.compatMode&&d.compatMode==="BackCompat",MAC:/mac/.test(navigator.platform.toLowerCase()),OPERA:!!c.opera,IPHONE:/iphone/.test(l),IPAD:/ipad/.test(l),ANDROID:/android/.test(l),TOUCH:"ontouchstart"in d}),Galleria.addTheme=function(b){b.name||Galleria.raise("No theme name specified"),typeof b.defaults!="object"?b.defaults={}:b.defaults=t(b.defaults);var c=!1,d;return typeof b.css=="string"?(a("link").each(function(a,e){d=new RegExp(b.css);if(d.test(e.href))return c=!0,D(b),!1}),c||a("script").each(function(a,e){d=new RegExp("galleria\\."+b.name.toLowerCase()+"\\."),d.test(e.src)&&(c=e.src.replace(/[^\/]*$/,"")+b.css,E.addTimer("css",function(){E.loadCSS(c,"galleria-theme",function(){D(b)})},1))}),c||Galleria.raise("No theme CSS loaded")):D(b),b},Galleria.loadTheme=function(d,e){var f=!1,g=y.length,h=c.setTimeout(function(){Galleria.raise("Theme at "+d+" could not load, check theme path.",!0)},5e3);return Galleria.theme=b,E.loadScript(d,function(){c.clearTimeout(h);if(g){var b=[];a.each(Galleria.get(),function(c,d){var f=a.extend(d._original.options,{data_source:d._data},e);d.$("container").remove();var g=new Galleria;g._id=d._id,g.init(d._original.target,f),b.push(g)}),y=b}}),Galleria},Galleria.get=function(a){if(!!z[a])return z[a];if(typeof a!="number")return z;Galleria.raise("Gallery index "+a+" not found")},Galleria.configure=function(b,c){var d={};return typeof b=="string"&&c?(d[b]=c,b=d):a.extend(d,b),Galleria.configure.options=d,a.each(Galleria.get(),function(a,b){b.setOptions(d)}),Galleria},Galleria.configure.options={},Galleria.on=function(b,c){if(!b)return;return Galleria.on.binds.push({type:b,callback:c||n}),a.each(Galleria.get(),function(a,d){d.bind(b,c)}),Galleria},Galleria.on.binds=[],Galleria.run=function(b,c){return a(b||"#galleria").galleria(c),Galleria},Galleria.addTransition=function(a,b){return F[a]=b,Galleria},Galleria.utils=E,Galleria.log=function(){return"console"in c&&"log"in c.console?c.console.log:function(){c.alert(E.array(arguments).join(", "))}}(),Galleria.ready=function(b){return a.each(y,function(a,c){b.call(c,c._options)}),Galleria.ready.callbacks.push(b),Galleria},Galleria.ready.callbacks=[],Galleria.raise=function(b,c){var d=c?"Fatal error":"Error",e=this,f={color:"#fff",position:"absolute",top:0,left:0,zIndex:1e5},g=function(b){var e='<div style="padding:4px;margin:0 0 2px;background:#'+(c?"811":"222")+'";>'+(c?"<strong>"+d+": </strong>":"")+b+"</div>";a.each(z,function(){var a=this.$("errors"),b=this.$("target");a.length||(b.css("position","relative"),a=this.addElement("errors").appendChild("target","errors").$("errors").css(f)),a.append(e)}),z.length||a("<div>").css(a.extend(f,{position:"fixed"})).append(e).appendTo(q().body)};if(i){g(b);if(c)throw new Error(d+": "+b)}else if(c){if(A)return;A=!0,c=!1,g("Gallery could not load.")}},Galleria.version=h,Galleria.requires=function(a,b){return b=b||"You need to upgrade Galleria to version "+a+" to use one or more components.",Galleria.version<a&&Galleria.raise(b,!0),Galleria},Galleria.Picture=function(b){this.id=b||null,this.image=null,this.container=E.create("galleria-image"),a(this.container).css({overflow:"hidden",position:"relative"}),this.original={width:0,height:0},this.ready=!1,this.isIframe=!1},Galleria.Picture.prototype={cache:{},show:function(){E.show(this.image)},hide:function(){E.moveOut(this.image)},clear:function(){this.image=null},isCached:function(a){return!!this.cache[a]},preload:function(b){a(new Image).load(function(a,b){return function(){b[a]=a}}(b,this.cache)).attr("src",b)},load:function(b,d,e){typeof d=="function"&&(e=d,d=null);if(this.isIframe){var f="if"+(new Date).getTime();return this.image=a("<iframe>",{src:b,frameborder:0,id:f,allowfullscreen:!0,css:{visibility:"hidden"}})[0],a(this.container).find("iframe,img").remove(),this.container.appendChild(this.image),a("#"+f).load(function(b,d){return function(){c.setTimeout(function(){a(b.image).css("visibility","visible"),typeof d=="function"&&d.call(b,b)},10)}}(this,e)),this.container}this.image=new Image;var g=0,h=!1,i=!1,j=a(this.container),l=a(this.image),m=function(b,e,f){return function(){var g=function(){a(this).unbind("load"),b.original=d||{height:this.height,width:this.width},b.container.appendChild(this),b.cache[f]=f,typeof e=="function"&&c.setTimeout(function(){e.call(b,b)},1)};!this.width||!this.height?c.setTimeout(function(b){return function(){b.width&&b.height?g.call(b):i?Galleria.raise("Could not extract width/height from image: "+b.src+". Traced measures: width:"+b.width+"px, height: "+b.height+"px."):(a(new Image).load(m).attr("src",b.src),i=!0)}}(this),2):g.call(this)}}(this,e,b);return j.find("iframe,img").remove(),l.css("display","block"),E.hide(this.image),a.each("minWidth minHeight maxWidth maxHeight".split(" "),function(a,b){l.css(b,/min/.test(b)?"0":"none")}),this.cache[b]?(l.load(m).attr("src",b),this.container):(l.load(m).error(function(){h?k?a(this).attr("src",k):Galleria.raise("Image not found: "+b):(h=!0,c.setTimeout(function(a,b){return function(){a.attr("src",b+"?"+E.timestamp())}}(a(this),b),50))}).attr("src",b),this.container)},scale:function(c){var d=this;c=a.extend({width:0,height:0,min:b,max:b,margin:0,complete:n,position:"center",crop:!1,canvas:!1},c);if(this.isIframe){a(this.image).width(c.width).height(c.height).removeAttr("width").removeAttr("height"),a(this.container).width(c.width).height(c.height),c.complete.call(d,d);try{this.image.contentWindow&&a(this.image.contentWindow).trigger("resize")}catch(e){}return this.container}if(!this.image)return this.container;var f,g,h=a(d.container),i;return E.wait({until:function(){return f=c.width||h.width()||E.parseValue(h.css("width")),g=c.height||h.height()||E.parseValue(h.css("height")),f&&g},success:function(){var b=(f-c.margin*2)/d.original.width,e=(g-c.margin*2)/d.original.height,h=Math.min(b,e),j=Math.max(b,e),k={"true":j,width:b,height:e,"false":h,landscape:d.original.width>d.original.height?j:h,portrait:d.original.width<d.original.height?j:h},l=k[c.crop.toString()],m="";c.max&&(l=Math.min(c.max,l)),c.min&&(l=Math.max(c.min,l)),a.each(["width","height"],function(b,c){a(d.image)[c](d[c]=d.image[c]=Math.round(d.original[c]*l))}),a(d.container).width(f).height(g),c.canvas&&B&&(B.elem.width=d.width,B.elem.height=d.height,m=d.image.src+":"+d.width+"x"+d.height,d.image.src=B.cache[m]||function(a){B.context.drawImage(d.image,0,0,d.original.width*l,d.original.height*l);try{return i=B.elem.toDataURL(),B.length+=i.length,B.cache[a]=i,i}catch(b){return d.image.src}}(m));var n={},o={},p=function(b,c,e){var f=0;if(/\%/.test(b)){var g=parseInt(b,10)/100,h=d.image[c]||a(d.image)[c]();f=Math.ceil(h*-1*g+e*g)}else f=E.parseValue(b);return f},q={top:{top:0},left:{left:0},right:{left:"100%"},bottom:{top:"100%"}};a.each(c.position.toLowerCase().split(" "),function(a,b){b==="center"&&(b="50%"),n[a?"top":"left"]=b}),a.each(n,function(b,c){q.hasOwnProperty(c)&&a.extend(o,q[c])}),n=n.top?a.extend(n,o):o,n=a.extend({top:"50%",left:"50%"},n),a(d.image).css({position:"absolute",top:p(n.top,"height",g),left:p(n.left,"width",f)}),d.show(),d.ready=!0,c.complete.call(d,d)},error:function(){Galleria.raise("Could not scale image: "+d.image.src)},timeout:1e3}),this}},a.extend(a.easing,{galleria:function(a,b,c,d,e){return(b/=e/2)<1?d/2*b*b*b+c:d/2*((b-=2)*b*b+2)+c},galleriaIn:function(a,b,c,d,e){return d*(b/=e)*b+c},galleriaOut:function(a,b,c,d,e){return-d*(b/=e)*(b-2)+c}}),a.fn.galleria=function(b){var c=this.selector;return a(this).length?this.each(function(){a.data(this,"galleria")||a.data(this,"galleria",(new Galleria).init(this,b))}):(a(function(){a(c).length?a(c).galleria(b):Galleria.utils.wait({until:function(){return a(c).length},success:function(){a(c).galleria(b)},error:function(){Galleria.raise('Init failed: Galleria could not find the element "'+c+'".')},timeout:5e3})}),this)}})(jQuery);;
/**
 * @file
 * Attaches behaviors for the Contextual module.
 */

(function ($) {

Drupal.contextualLinks = Drupal.contextualLinks || {};

/**
 * Attaches outline behavior for regions associated with contextual links.
 */
Drupal.behaviors.contextualLinks = {
  attach: function (context) {
    $('div.contextual-links-wrapper', context).once('contextual-links', function () {
      var $wrapper = $(this);
      var $region = $wrapper.closest('.contextual-links-region');
      var $links = $wrapper.find('ul.contextual-links');
      var $trigger = $('<a class="contextual-links-trigger" href="#" />').text(Drupal.t('Configure')).click(
        function () {
          $links.stop(true, true).slideToggle(100);
          $wrapper.toggleClass('contextual-links-active');
          return false;
        }
      );
      // Attach hover behavior to trigger and ul.contextual-links.
      $trigger.add($links).hover(
        function () { $region.addClass('contextual-links-region-active'); },
        function () { $region.removeClass('contextual-links-region-active'); }
      );
      // Hide the contextual links when user clicks a link or rolls out of the .contextual-links-region.
      $region.bind('mouseleave click', Drupal.contextualLinks.mouseleave);
      // Prepend the trigger.
      $wrapper.prepend($trigger);
    });
  }
};

/**
 * Disables outline for the region contextual links are associated with.
 */
Drupal.contextualLinks.mouseleave = function () {
  $(this)
    .find('.contextual-links-active').removeClass('contextual-links-active')
    .find('ul.contextual-links').hide();
};

})(jQuery);
;
(function ($) {

/**
 * Provides Ajax page updating via jQuery $.ajax (Asynchronous JavaScript and XML).
 *
 * Ajax is a method of making a request via JavaScript while viewing an HTML
 * page. The request returns an array of commands encoded in JSON, which is
 * then executed to make any changes that are necessary to the page.
 *
 * Drupal uses this file to enhance form elements with #ajax['path'] and
 * #ajax['wrapper'] properties. If set, this file will automatically be included
 * to provide Ajax capabilities.
 */

Drupal.ajax = Drupal.ajax || {};

/**
 * Attaches the Ajax behavior to each Ajax form element.
 */
Drupal.behaviors.AJAX = {
  attach: function (context, settings) {
    // Load all Ajax behaviors specified in the settings.
    for (var base in settings.ajax) {
      if (!$('#' + base + '.ajax-processed').length) {
        var element_settings = settings.ajax[base];

        if (typeof element_settings.selector == 'undefined') {
          element_settings.selector = '#' + base;
        }
        $(element_settings.selector).each(function () {
          element_settings.element = this;
          Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
        });

        $('#' + base).addClass('ajax-processed');
      }
    }

    // Bind Ajax behaviors to all items showing the class.
    $('.use-ajax:not(.ajax-processed)').addClass('ajax-processed').each(function () {
      var element_settings = {};
      // Clicked links look better with the throbber than the progress bar.
      element_settings.progress = { 'type': 'throbber' };

      // For anchor tags, these will go to the target of the anchor rather
      // than the usual location.
      if ($(this).attr('href')) {
        element_settings.url = $(this).attr('href');
        element_settings.event = 'click';
      }
      var base = $(this).attr('id');
      Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
    });

    // This class means to submit the form to the action using Ajax.
    $('.use-ajax-submit:not(.ajax-processed)').addClass('ajax-processed').each(function () {
      var element_settings = {};

      // Ajax submits specified in this manner automatically submit to the
      // normal form action.
      element_settings.url = $(this.form).attr('action');
      // Form submit button clicks need to tell the form what was clicked so
      // it gets passed in the POST request.
      element_settings.setClick = true;
      // Form buttons use the 'click' event rather than mousedown.
      element_settings.event = 'click';
      // Clicked form buttons look better with the throbber than the progress bar.
      element_settings.progress = { 'type': 'throbber' };

      var base = $(this).attr('id');
      Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
    });
  }
};

/**
 * Ajax object.
 *
 * All Ajax objects on a page are accessible through the global Drupal.ajax
 * object and are keyed by the submit button's ID. You can access them from
 * your module's JavaScript file to override properties or functions.
 *
 * For example, if your Ajax enabled button has the ID 'edit-submit', you can
 * redefine the function that is called to insert the new content like this
 * (inside a Drupal.behaviors attach block):
 * @code
 *    Drupal.behaviors.myCustomAJAXStuff = {
 *      attach: function (context, settings) {
 *        Drupal.ajax['edit-submit'].commands.insert = function (ajax, response, status) {
 *          new_content = $(response.data);
 *          $('#my-wrapper').append(new_content);
 *          alert('New content was appended to #my-wrapper');
 *        }
 *      }
 *    };
 * @endcode
 */
Drupal.ajax = function (base, element, element_settings) {
  var defaults = {
    url: 'system/ajax',
    event: 'mousedown',
    keypress: true,
    selector: '#' + base,
    effect: 'none',
    speed: 'none',
    method: 'replaceWith',
    progress: {
      type: 'throbber',
      message: Drupal.t('Please wait...')
    },
    submit: {
      'js': true
    }
  };

  $.extend(this, defaults, element_settings);

  this.element = element;
  this.element_settings = element_settings;

  // Replacing 'nojs' with 'ajax' in the URL allows for an easy method to let
  // the server detect when it needs to degrade gracefully.
  // There are five scenarios to check for:
  // 1. /nojs/
  // 2. /nojs$ - The end of a URL string.
  // 3. /nojs? - Followed by a query (with clean URLs enabled).
  //      E.g.: path/nojs?destination=foobar
  // 4. /nojs& - Followed by a query (without clean URLs enabled).
  //      E.g.: ?q=path/nojs&destination=foobar
  // 5. /nojs# - Followed by a fragment.
  //      E.g.: path/nojs#myfragment
  this.url = element_settings.url.replace(/\/nojs(\/|$|\?|&|#)/g, '/ajax$1');
  this.wrapper = '#' + element_settings.wrapper;

  // If there isn't a form, jQuery.ajax() will be used instead, allowing us to
  // bind Ajax to links as well.
  if (this.element.form) {
    this.form = $(this.element.form);
  }

  // Set the options for the ajaxSubmit function.
  // The 'this' variable will not persist inside of the options object.
  var ajax = this;
  ajax.options = {
    url: ajax.url,
    data: ajax.submit,
    beforeSerialize: function (element_settings, options) {
      return ajax.beforeSerialize(element_settings, options);
    },
    beforeSubmit: function (form_values, element_settings, options) {
      ajax.ajaxing = true;
      return ajax.beforeSubmit(form_values, element_settings, options);
    },
    beforeSend: function (xmlhttprequest, options) {
      ajax.ajaxing = true;
      return ajax.beforeSend(xmlhttprequest, options);
    },
    success: function (response, status) {
      // Sanity check for browser support (object expected).
      // When using iFrame uploads, responses must be returned as a string.
      if (typeof response == 'string') {
        response = $.parseJSON(response);
      }
      return ajax.success(response, status);
    },
    complete: function (response, status) {
      ajax.ajaxing = false;
      if (status == 'error' || status == 'parsererror') {
        return ajax.error(response, ajax.url);
      }
    },
    dataType: 'json',
    type: 'POST'
  };

  // Bind the ajaxSubmit function to the element event.
  $(ajax.element).bind(element_settings.event, function (event) {
    return ajax.eventResponse(this, event);
  });

  // If necessary, enable keyboard submission so that Ajax behaviors
  // can be triggered through keyboard input as well as e.g. a mousedown
  // action.
  if (element_settings.keypress) {
    $(ajax.element).keypress(function (event) {
      return ajax.keypressResponse(this, event);
    });
  }

  // If necessary, prevent the browser default action of an additional event.
  // For example, prevent the browser default action of a click, even if the
  // AJAX behavior binds to mousedown.
  if (element_settings.prevent) {
    $(ajax.element).bind(element_settings.prevent, false);
  }
};

/**
 * Handle a key press.
 *
 * The Ajax object will, if instructed, bind to a key press response. This
 * will test to see if the key press is valid to trigger this event and
 * if it is, trigger it for us and prevent other keypresses from triggering.
 * In this case we're handling RETURN and SPACEBAR keypresses (event codes 13
 * and 32. RETURN is often used to submit a form when in a textfield, and 
 * SPACE is often used to activate an element without submitting. 
 */
Drupal.ajax.prototype.keypressResponse = function (element, event) {
  // Create a synonym for this to reduce code confusion.
  var ajax = this;

  // Detect enter key and space bar and allow the standard response for them,
  // except for form elements of type 'text' and 'textarea', where the 
  // spacebar activation causes inappropriate activation if #ajax['keypress'] is 
  // TRUE. On a text-type widget a space should always be a space.
  if (event.which == 13 || (event.which == 32 && element.type != 'text' && element.type != 'textarea')) {
    $(ajax.element_settings.element).trigger(ajax.element_settings.event);
    return false;
  }
};

/**
 * Handle an event that triggers an Ajax response.
 *
 * When an event that triggers an Ajax response happens, this method will
 * perform the actual Ajax call. It is bound to the event using
 * bind() in the constructor, and it uses the options specified on the
 * ajax object.
 */
Drupal.ajax.prototype.eventResponse = function (element, event) {
  // Create a synonym for this to reduce code confusion.
  var ajax = this;

  // Do not perform another ajax command if one is already in progress.
  if (ajax.ajaxing) {
    return false;
  }

  try {
    if (ajax.form) {
      // If setClick is set, we must set this to ensure that the button's
      // value is passed.
      if (ajax.setClick) {
        // Mark the clicked button. 'form.clk' is a special variable for
        // ajaxSubmit that tells the system which element got clicked to
        // trigger the submit. Without it there would be no 'op' or
        // equivalent.
        element.form.clk = element;
      }

      ajax.form.ajaxSubmit(ajax.options);
    }
    else {
      ajax.beforeSerialize(ajax.element, ajax.options);
      $.ajax(ajax.options);
    }
  }
  catch (e) {
    // Unset the ajax.ajaxing flag here because it won't be unset during
    // the complete response.
    ajax.ajaxing = false;
    alert("An error occurred while attempting to process " + ajax.options.url + ": " + e.message);
  }

  // For radio/checkbox, allow the default event. On IE, this means letting
  // it actually check the box.
  if (typeof element.type != 'undefined' && (element.type == 'checkbox' || element.type == 'radio')) {
    return true;
  }
  else {
    return false;
  }

};

/**
 * Handler for the form serialization.
 *
 * Runs before the beforeSend() handler (see below), and unlike that one, runs
 * before field data is collected.
 */
Drupal.ajax.prototype.beforeSerialize = function (element, options) {
  // Allow detaching behaviors to update field values before collecting them.
  // This is only needed when field values are added to the POST data, so only
  // when there is a form such that this.form.ajaxSubmit() is used instead of
  // $.ajax(). When there is no form and $.ajax() is used, beforeSerialize()
  // isn't called, but don't rely on that: explicitly check this.form.
  if (this.form) {
    var settings = this.settings || Drupal.settings;
    Drupal.detachBehaviors(this.form, settings, 'serialize');
  }

  // Prevent duplicate HTML ids in the returned markup.
  // @see drupal_html_id()
  options.data['ajax_html_ids[]'] = [];
  $('[id]').each(function () {
    options.data['ajax_html_ids[]'].push(this.id);
  });

  // Allow Drupal to return new JavaScript and CSS files to load without
  // returning the ones already loaded.
  // @see ajax_base_page_theme()
  // @see drupal_get_css()
  // @see drupal_get_js()
  options.data['ajax_page_state[theme]'] = Drupal.settings.ajaxPageState.theme;
  options.data['ajax_page_state[theme_token]'] = Drupal.settings.ajaxPageState.theme_token;
  for (var key in Drupal.settings.ajaxPageState.css) {
    options.data['ajax_page_state[css][' + key + ']'] = 1;
  }
  for (var key in Drupal.settings.ajaxPageState.js) {
    options.data['ajax_page_state[js][' + key + ']'] = 1;
  }
};

/**
 * Modify form values prior to form submission.
 */
Drupal.ajax.prototype.beforeSubmit = function (form_values, element, options) {
  // This function is left empty to make it simple to override for modules
  // that wish to add functionality here.
};

/**
 * Prepare the Ajax request before it is sent.
 */
Drupal.ajax.prototype.beforeSend = function (xmlhttprequest, options) {
  // For forms without file inputs, the jQuery Form plugin serializes the form
  // values, and then calls jQuery's $.ajax() function, which invokes this
  // handler. In this circumstance, options.extraData is never used. For forms
  // with file inputs, the jQuery Form plugin uses the browser's normal form
  // submission mechanism, but captures the response in a hidden IFRAME. In this
  // circumstance, it calls this handler first, and then appends hidden fields
  // to the form to submit the values in options.extraData. There is no simple
  // way to know which submission mechanism will be used, so we add to extraData
  // regardless, and allow it to be ignored in the former case.
  if (this.form) {
    options.extraData = options.extraData || {};

    // Let the server know when the IFRAME submission mechanism is used. The
    // server can use this information to wrap the JSON response in a TEXTAREA,
    // as per http://jquery.malsup.com/form/#file-upload.
    options.extraData.ajax_iframe_upload = '1';

    // The triggering element is about to be disabled (see below), but if it
    // contains a value (e.g., a checkbox, textfield, select, etc.), ensure that
    // value is included in the submission. As per above, submissions that use
    // $.ajax() are already serialized prior to the element being disabled, so
    // this is only needed for IFRAME submissions.
    var v = $.fieldValue(this.element);
    if (v !== null) {
      options.extraData[this.element.name] = v;
    }
  }

  // Disable the element that received the change to prevent user interface
  // interaction while the Ajax request is in progress. ajax.ajaxing prevents
  // the element from triggering a new request, but does not prevent the user
  // from changing its value.
  $(this.element).addClass('progress-disabled').attr('disabled', true);

  // Insert progressbar or throbber.
  if (this.progress.type == 'bar') {
    var progressBar = new Drupal.progressBar('ajax-progress-' + this.element.id, eval(this.progress.update_callback), this.progress.method, eval(this.progress.error_callback));
    if (this.progress.message) {
      progressBar.setProgress(-1, this.progress.message);
    }
    if (this.progress.url) {
      progressBar.startMonitoring(this.progress.url, this.progress.interval || 1500);
    }
    this.progress.element = $(progressBar.element).addClass('ajax-progress ajax-progress-bar');
    this.progress.object = progressBar;
    $(this.element).after(this.progress.element);
  }
  else if (this.progress.type == 'throbber') {
    this.progress.element = $('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');
    if (this.progress.message) {
      $('.throbber', this.progress.element).after('<div class="message">' + this.progress.message + '</div>');
    }
    $(this.element).after(this.progress.element);
  }
};

/**
 * Handler for the form redirection completion.
 */
Drupal.ajax.prototype.success = function (response, status) {
  // Remove the progress element.
  if (this.progress.element) {
    $(this.progress.element).remove();
  }
  if (this.progress.object) {
    this.progress.object.stopMonitoring();
  }
  $(this.element).removeClass('progress-disabled').removeAttr('disabled');

  Drupal.freezeHeight();

  for (var i in response) {
    if (response[i]['command'] && this.commands[response[i]['command']]) {
      this.commands[response[i]['command']](this, response[i], status);
    }
  }

  // Reattach behaviors, if they were detached in beforeSerialize(). The
  // attachBehaviors() called on the new content from processing the response
  // commands is not sufficient, because behaviors from the entire form need
  // to be reattached.
  if (this.form) {
    var settings = this.settings || Drupal.settings;
    Drupal.attachBehaviors(this.form, settings);
  }

  Drupal.unfreezeHeight();

  // Remove any response-specific settings so they don't get used on the next
  // call by mistake.
  this.settings = null;
};

/**
 * Build an effect object which tells us how to apply the effect when adding new HTML.
 */
Drupal.ajax.prototype.getEffect = function (response) {
  var type = response.effect || this.effect;
  var speed = response.speed || this.speed;

  var effect = {};
  if (type == 'none') {
    effect.showEffect = 'show';
    effect.hideEffect = 'hide';
    effect.showSpeed = '';
  }
  else if (type == 'fade') {
    effect.showEffect = 'fadeIn';
    effect.hideEffect = 'fadeOut';
    effect.showSpeed = speed;
  }
  else {
    effect.showEffect = type + 'Toggle';
    effect.hideEffect = type + 'Toggle';
    effect.showSpeed = speed;
  }

  return effect;
};

/**
 * Handler for the form redirection error.
 */
Drupal.ajax.prototype.error = function (response, uri) {
  alert(Drupal.ajaxError(response, uri));
  // Remove the progress element.
  if (this.progress.element) {
    $(this.progress.element).remove();
  }
  if (this.progress.object) {
    this.progress.object.stopMonitoring();
  }
  // Undo hide.
  $(this.wrapper).show();
  // Re-enable the element.
  $(this.element).removeClass('progress-disabled').removeAttr('disabled');
  // Reattach behaviors, if they were detached in beforeSerialize().
  if (this.form) {
    var settings = response.settings || this.settings || Drupal.settings;
    Drupal.attachBehaviors(this.form, settings);
  }
};

/**
 * Provide a series of commands that the server can request the client perform.
 */
Drupal.ajax.prototype.commands = {
  /**
   * Command to insert new content into the DOM.
   */
  insert: function (ajax, response, status) {
    // Get information from the response. If it is not there, default to
    // our presets.
    var wrapper = response.selector ? $(response.selector) : $(ajax.wrapper);
    var method = response.method || ajax.method;
    var effect = ajax.getEffect(response);

    // We don't know what response.data contains: it might be a string of text
    // without HTML, so don't rely on jQuery correctly iterpreting
    // $(response.data) as new HTML rather than a CSS selector. Also, if
    // response.data contains top-level text nodes, they get lost with either
    // $(response.data) or $('<div></div>').replaceWith(response.data).
    var new_content_wrapped = $('<div></div>').html(response.data);
    var new_content = new_content_wrapped.contents();

    // For legacy reasons, the effects processing code assumes that new_content
    // consists of a single top-level element. Also, it has not been
    // sufficiently tested whether attachBehaviors() can be successfully called
    // with a context object that includes top-level text nodes. However, to
    // give developers full control of the HTML appearing in the page, and to
    // enable Ajax content to be inserted in places where DIV elements are not
    // allowed (e.g., within TABLE, TR, and SPAN parents), we check if the new
    // content satisfies the requirement of a single top-level element, and
    // only use the container DIV created above when it doesn't. For more
    // information, please see http://drupal.org/node/736066.
    if (new_content.length != 1 || new_content.get(0).nodeType != 1) {
      new_content = new_content_wrapped;
    }

    // If removing content from the wrapper, detach behaviors first.
    switch (method) {
      case 'html':
      case 'replaceWith':
      case 'replaceAll':
      case 'empty':
      case 'remove':
        var settings = response.settings || ajax.settings || Drupal.settings;
        Drupal.detachBehaviors(wrapper, settings);
    }

    // Add the new content to the page.
    wrapper[method](new_content);

    // Immediately hide the new content if we're using any effects.
    if (effect.showEffect != 'show') {
      new_content.hide();
    }

    // Determine which effect to use and what content will receive the
    // effect, then show the new content.
    if ($('.ajax-new-content', new_content).length > 0) {
      $('.ajax-new-content', new_content).hide();
      new_content.show();
      $('.ajax-new-content', new_content)[effect.showEffect](effect.showSpeed);
    }
    else if (effect.showEffect != 'show') {
      new_content[effect.showEffect](effect.showSpeed);
    }

    // Attach all JavaScript behaviors to the new content, if it was successfully
    // added to the page, this if statement allows #ajax['wrapper'] to be
    // optional.
    if (new_content.parents('html').length > 0) {
      // Apply any settings from the returned JSON if available.
      var settings = response.settings || ajax.settings || Drupal.settings;
      Drupal.attachBehaviors(new_content, settings);
    }
  },

  /**
   * Command to remove a chunk from the page.
   */
  remove: function (ajax, response, status) {
    var settings = response.settings || ajax.settings || Drupal.settings;
    Drupal.detachBehaviors($(response.selector), settings);
    $(response.selector).remove();
  },

  /**
   * Command to mark a chunk changed.
   */
  changed: function (ajax, response, status) {
    if (!$(response.selector).hasClass('ajax-changed')) {
      $(response.selector).addClass('ajax-changed');
      if (response.asterisk) {
        $(response.selector).find(response.asterisk).append(' <span class="ajax-changed">*</span> ');
      }
    }
  },

  /**
   * Command to provide an alert.
   */
  alert: function (ajax, response, status) {
    alert(response.text, response.title);
  },

  /**
   * Command to provide the jQuery css() function.
   */
  css: function (ajax, response, status) {
    $(response.selector).css(response.argument);
  },

  /**
   * Command to set the settings that will be used for other commands in this response.
   */
  settings: function (ajax, response, status) {
    if (response.merge) {
      $.extend(true, Drupal.settings, response.settings);
    }
    else {
      ajax.settings = response.settings;
    }
  },

  /**
   * Command to attach data using jQuery's data API.
   */
  data: function (ajax, response, status) {
    $(response.selector).data(response.name, response.value);
  },

  /**
   * Command to apply a jQuery method.
   */
  invoke: function (ajax, response, status) {
    var $element = $(response.selector);
    $element[response.method].apply($element, response.arguments);
  },

  /**
   * Command to restripe a table.
   */
  restripe: function (ajax, response, status) {
    // :even and :odd are reversed because jQuery counts from 0 and
    // we count from 1, so we're out of sync.
    // Match immediate children of the parent element to allow nesting.
    $('> tbody > tr:visible, > tr:visible', $(response.selector))
      .removeClass('odd even')
      .filter(':even').addClass('odd').end()
      .filter(':odd').addClass('even');
  }
};

})(jQuery);
;
