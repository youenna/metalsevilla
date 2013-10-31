<?php
/**
 * @file
 * image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 779x519
  $styles['779x519'] = array(
    'name' => '779x519',
    'effects' => array(
      15 => array(
        'label' => 'Escalar y recortar',
        'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '779',
          'height' => '519',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: image_200x200
  $styles['image_200x200'] = array(
    'name' => 'image_200x200',
    'effects' => array(
      10 => array(
        'label' => 'Escalar y recortar',
        'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '200',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: image_250h
  $styles['image_250h'] = array(
    'name' => 'image_250h',
    'effects' => array(
      13 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '250',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: image_350x200
  $styles['image_350x200'] = array(
    'name' => 'image_350x200',
    'effects' => array(
      12 => array(
        'label' => 'Escalar y recortar',
        'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '350',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: image_430width
  $styles['image_430width'] = array(
    'name' => 'image_430width',
    'effects' => array(
      14 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '430',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: image_600width
  $styles['image_600width'] = array(
    'name' => 'image_600width',
    'effects' => array(
      11 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '600',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: imagen_cabecera
  $styles['imagen_cabecera'] = array(
    'name' => 'imagen_cabecera',
    'effects' => array(
      2 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '400',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: imagen_listado
  $styles['imagen_listado'] = array(
    'name' => 'imagen_listado',
    'effects' => array(
      3 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '115',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: imagen_slide_home
  $styles['imagen_slide_home'] = array(
    'name' => 'imagen_slide_home',
    'effects' => array(
      7 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '460',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: img_articulo_280
  $styles['img_articulo_280'] = array(
    'name' => 'img_articulo_280',
    'effects' => array(
      9 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '280',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: img_logo_220
  $styles['img_logo_220'] = array(
    'name' => 'img_logo_220',
    'effects' => array(
      8 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '220',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: logo_detalle
  $styles['logo_detalle'] = array(
    'name' => 'logo_detalle',
    'effects' => array(
      4 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '150',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: logo_grid_9
  $styles['logo_grid_9'] = array(
    'name' => 'logo_grid_9',
    'effects' => array(
      5 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '75',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
