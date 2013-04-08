<?php
 /**
  * This template is used to print a single field in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
  *
  * Variables available:
  * - $view: The view object
  * - $field: The field handler object that can process the input
  * - $row: The raw SQL result that can be used
  * - $output: The processed output that will normally be used.
  *
  * When fetching output from the $row, this construct should be used:
  * $data = $row->{$field->field_alias}
  *
  * The above will guarantee that you'll always get the correct data,
  * regardless of any changes in the aliasing that might happen if
  * the view is modified.
  */
?>
<?php if($output){
	print '<div style="text-align:center;"><object width="240" height="300" classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000" codebase="http://fpdownload.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=7,0,0,0" align="middle"><param name="allowScriptAccess" value="always" /><param name="wmode" value="transparent" /><param name="movie" value="http://widgets.jamendo.com/es/album/?album_id=' . $output . '&playertype=2008" /><param name="quality" value="high" /><param name="bgcolor" value="#FFFFFF" /><embed src="http://widgets.jamendo.com/es/album/?album_id='. $output . '&playertype=2008" quality="high" wmode="transparent" bgcolor="#FFFFFF" width="240" height="300" align="middle" allowScriptAccess="always" type="application/x-shockwave-flash" pluginspage="http://www.macromedia.com/go/getflashplayer">&nbsp;</embed>&nbsp;</object></div>';
}?>

