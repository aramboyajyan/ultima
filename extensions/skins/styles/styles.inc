<?php

/**
 * @file
 * Sample custom skinr styles.
 *
 * Created by: Topsitemakers
 * http://www.topsitemakers.com/
 */

/**
 * Implements hook_skinr_skin_PLUGIN_info().
 */
function ultima_skinr_skin_styles_info() {
  $skins['ultima_sample_style'] = array(
    'title' => t('Text color'),
    'type' => 'select',
    // This line is optional; the class will be added even if this is not
    // included.
    'attached' => array('css' => array('colors.css')),
    'default status' => 1,
    // Groups can be: "general", "box", "typography" and "layout".
    'group' => 'typography',
    'options' => array(
      'color_1' => array('title' => t('Red'), 'class' => array('red')),
      'color_2' => array('title' => t('Orange'), 'class' => array('orange')),
      'color_3' => array('title' => t('Yellow'), 'class' => array('yellow')),
      'color_4' => array('title' => t('Green'), 'class' => array('green')),
      'color_5' => array('title' => t('Blue'), 'class' => array('blue')),
      'color_6' => array('title' => t('Violet'), 'class' => array('violet')),
    ),
  );
  
  return $skins;
}
