
(function ($) {
  Drupal.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
		// Change the logo to be the real one.
		if (!this.logoChanged) {
		$('#preview #preview-logo img').attr('src', Drupal.settings.color.logo);
		this.logoChanged = true;
		}
		// Remove the logo if the setting is toggled off. 
		if (Drupal.settings.color.logo == null) {
		$('div').remove('#preview-logo');
		}
		
		// Text preview.
		$('#preview', form).css('color', $('#palette input[name="palette[base]"]', form).val());
		$('#preview a', form).css('color', $('#palette input[name="palette[link]"]', form).val());
		$('#preview-header-menu a', form).css('color', $('#palette input[name="palette[headermenulink]"]', form).val());
		$('#preview-footer a', form).css('color', $('#palette input[name="palette[footerlink]"]', form).val());
		$('#preview-footer-bottom a', form).css('color', $('#palette input[name="palette[footerlink]"]', form).val());
		$('#preview-slogan', form).css('color', $('#palette input[name="palette[slogan]"]', form).val());
		
		// Headings.
		var headingscolor = $('#palette input[name="palette[link]"]', form).val();
		var headingsshadow = $('#palette input[name="palette[headingshadow]"]', form).val();
		
		$('#preview h1', form).attr('style', "color: " + headingscolor + "; text-shadow: 1px 1px 1px " + headingsshadow + ";");
		
		// Header.
		var gradient_headertop = $('#palette input[name="palette[headertop]"]', form).val();
		var gradient_headerbottom = $('#palette input[name="palette[headerbottom]"]', form).val();
		
		$('#preview #preview-header', form).attr('style', "background-color: " + gradient_headertop + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_headertop + "), to(" + gradient_headerbottom + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_headertop + ", " + gradient_headerbottom + ");");
		
		// Header-menu.
		$('#preview-header-menu', form).css('background-color', $('#palette input[name="palette[headermenu]"]', form).val());
		$('#preview-header-menu', form).css('border-top-color', $('#palette input[name="palette[headermenuborder]"]', form).val());
		$('#preview-header-menu', form).css('border-bottom-color', $('#palette input[name="palette[headermenuborder]"]', form).val());
		
		// Banner.
		var gradient_bannertop = $('#palette input[name="palette[bannertop]"]', form).val();
		var gradient_bannerbottom = $('#palette input[name="palette[bannerbottom]"]', form).val();
		var bannerborder = $('#palette input[name="palette[bannerborder]"]', form).val();
		
		$('#preview #preview-banner', form).attr('style', "background-color: " + gradient_bannertop + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_bannertop + "), to(" + gradient_bannerbottom + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_bannertop + ", " + gradient_bannerbottom + "); border-bottom: 1px solid " + bannerborder + ";");
		
		// Content.
		var gradient_contenttop = $('#palette input[name="palette[contenttop]"]', form).val();
		var gradient_contentbottom = $('#palette input[name="palette[contentbottom]"]', form).val();
		
		$('#preview #preview-content', form).attr('style', "background-color: " + gradient_contenttop + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_contenttop + "), to(" + gradient_contentbottom + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_contenttop + ", " + gradient_contentbottom + ");");
		
		// Block.
		var blockbg = $('#palette input[name="palette[blockbg]"]', form).val();
		$('#preview .block', form).attr('style', "background-color: " + blockbg + ";");
		
		// Footer.
		var gradient_footer = $('#palette input[name="palette[footer]"]', form).val();
		$('#preview #preview-footer', form).attr('style', "background-color: " + gradient_footer + ";");
		
		// Footer bottom.
		var gradient_footerbottomtop = $('#palette input[name="palette[footerbottomtop]"]', form).val();
		var gradient_footerbottombottom = $('#palette input[name="palette[footerbottombottom]"]', form).val();
		
		$('#preview-footer-bottom', form).attr('style', "background-color: " + gradient_footerbottomtop + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_footerbottomtop + "), to(" + gradient_footerbottombottom + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_footerbottomtop + ", " + gradient_footerbottombottom + ");");
		$('#preview-footer-bottom', form).css('border-top-color', $('#palette input[name="palette[headermenuborder]"]', form).val());
		
		// Button.
		var gradient_buttontop = $('#palette input[name="palette[buttontop]"]', form).val();
		var gradient_buttonbottom = $('#palette input[name="palette[buttonbottom]"]', form).val();
		var buttontext = $('#palette input[name="palette[buttontext]"]', form).val();
		var buttontextshadow = $('#palette input[name="palette[buttontextshadow]"]', form).val();
		var buttonboxshadow = $('#palette input[name="palette[buttonboxshadow]"]', form).val();
		
		$('#preview a.more', form).attr('style', "background-color: " + gradient_buttontop + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_buttontop + "), to(" + gradient_buttonbottom + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_buttontop + ", " + gradient_buttonbottom + "); -webkit-box-shadow: 0px 1px 2px " + buttonboxshadow + "; -moz-box-shadow: 0px 1px 2px " + buttonboxshadow + "; box-shadow: 0px 1px 2px " + buttonboxshadow + "; text-shadow: 0 1px 1px " + buttontextshadow + "; color: " + buttontext + ";");

    }
  };
})(jQuery);;
Drupal.locale = { 'pluralFormula': function ($n) { return Number(($n!=1)); }, 'strings': {"":{"An AJAX HTTP error occurred.":"Hubo un error HTTP AJAX.","HTTP Result Code: !status":"C\u00f3digo de Resultado HTTP: !status","An AJAX HTTP request terminated abnormally.":"Una solicitud HTTP de AJAX termin\u00f3 de manera anormal.","Debugging information follows.":"A continuaci\u00f3n se detalla la informaci\u00f3n de depuraci\u00f3n.","Path: !uri":"Ruta: !uri","StatusText: !statusText":"StatusText: !statusText","ResponseText: !responseText":"ResponseText: !responseText","ReadyState: !readyState":"ReadyState: !readyState","Loading":"Cargando","(active tab)":"(solapa activa)","Hide":"Ocultar","Show":"Mostrar","Re-order rows by numerical weight instead of dragging.":"Reordenar las filas por peso num\u00e9rico en lugar de arrastrar.","Show row weights":"Mostrar pesos de la fila","Hide row weights":"Ocultar pesos de la fila","Drag to re-order":"Arrastre para reordenar","Changes made in this table will not be saved until the form is submitted.":"Los cambios realizados en esta tabla no se guardar\u00e1n hasta que se env\u00ede el formulario","Enabled":"Activado","Hide shortcuts":"Ocultar atajos","@title dialog":"Di\u00e1logo @title","Configure":"Configurar","Show shortcuts":"Mostrar atajos","Disabled":"Desactivado","This field is required.":"Este campo es obligatorio.","Title":"T\u00edtulo","Next":"Siguiente","Edit":"Editar","Upload":"Subir","Done":"Hecho","Select all rows in this table":"Seleccionar todas las filas de esta tabla","Deselect all rows in this table":"Quitar la selecci\u00f3n a todas las filas de esta tabla","Not published":"No publicado","Please wait...":"Espere, por favor...","Only files with the following extensions are allowed: %files-allowed.":"S\u00f3lo se permiten archivos con las siguientes extensiones: %files-allowed.","By @name on @date":"Por @name en @date","By @name":"Por @name","Not in menu":"No est\u00e1 en un men\u00fa","Alias: @alias":"Alias: @alias","No alias":"Sin alias","New revision":"Revisi\u00f3n nueva","The changes to these blocks will not be saved until the \u003Cem\u003ESave blocks\u003C\/em\u003E button is clicked.":"Los cambios sobre estos bloques no se guardar\u00e1n hasta que no pulse el bot\u00f3n \u003Cem\u003EGuardar bloques\u003C\/em\u003E.","This permission is inherited from the authenticated user role.":"Este permiso se hereda del rol de usuario registrado.","No revision":"Sin revisi\u00f3n","@number comments per page":"@number comentarios por p\u00e1gina","Requires a title":"Necesita un t\u00edtulo","Not restricted":"Sin restricci\u00f3n","Not customizable":"No personalizable","Restricted to certain pages":"Restringido a algunas p\u00e1ginas","The block cannot be placed in this region.":"El bloque no se puede colocar en esta regi\u00f3n.","Customize dashboard":"Personalizar panel de control","Hide summary":"Ocultar resumen","Edit summary":"Editar resumen","Don\u0027t display post information":"No mostrar informaci\u00f3n del env\u00edo","The selected file %filename cannot be uploaded. Only files with the following extensions are allowed: %extensions.":"El archivo seleccionado %filename no puede ser subido. Solo se permiten archivos con las siguientes extensiones: %extensions.","Autocomplete popup":"Ventana emergente con autocompletado","Searching for matches...":"Buscando coincidencias"}} };;
