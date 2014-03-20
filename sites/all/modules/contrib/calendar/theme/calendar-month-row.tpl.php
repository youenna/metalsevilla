<?php
/**
 * @file
 * Template to display a row
 * 
 * - $inner: The rendered string of the row's contents.
 */
$attrs = ($class) ? 'class="' . $class . '"': '';
$attrs .= ($iehint > 0) ? ' iehint="' . $iehint . '"' : '';
?>
<td class="dia">
</td>

<?php if ($attrs != ''):?>
<td <?php print $attrs?>>
<?php else:?>
<td>
<?php endif;?>
  <?php print $inner ?>
</td>
