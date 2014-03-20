<?php
/**
 * @file
 * Template to display a column
 * 
 * - $item: The item to render within a td element.
 */
$id = (isset($item['id'])) ? 'id="' . $item['id'] . '" ' : '';
$date = (isset($item['date'])) ? ' data-date="' . $item['date'] . '" ' : '';
$day = (isset($item['day_of_month'])) ? ' data-day-of-month="' . $item['day_of_month'] . '" ' : '';
$headers = (isset($item['header_id'])) ? ' headers="'. $item['header_id'] .'" ' : '';
?>
<?php if (strpos($item['entry'], 'item')!=0):?>
<tr>
<td class="cal-day"><div class="cal-name-day"><?php print $item['header_id']; ?></div><div class="cal-num-day"><?php print $item['day_of_month']; ?> </div></td>
<td <?php print $id?>class="<?php print $item['class'] ?>" 
colspan="<?php print $item['colspan'] ?>" rowspan="<?php print $item['rowspan'] ?>"
	<?php print $date . $headers . $day; ?>>
	<div class="inner">
	<?php print $item['entry'] ?>
  </div>
</td>
</tr>
<?php endif;?>

