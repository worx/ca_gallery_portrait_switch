<?php
/**
 * @file
 * ca_gallery_portrait_switch.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function ca_gallery_portrait_switch_field_default_field_instances_alter(&$data) {
  if (isset($data['node-ca_gallery-field_ca_gallery_gallery_image'])) {
    $data['node-ca_gallery-field_ca_gallery_gallery_image']['widget']['settings']['manualcrop_styles_list']['crop_default_portrait'] = 'crop_default_portrait'; /* WAS: '' */
    $data['node-ca_gallery-field_ca_gallery_gallery_image']['widget']['settings']['preview_image_style'] = 'crop_default_portrait'; /* WAS: 'crop_default_landscape' */
    unset($data['node-ca_gallery-field_ca_gallery_gallery_image']['widget']['settings']['manualcrop_styles_list']['crop_default_landscape']);
  }
  if (isset($data['node-ca_gallery_image-field_gallery_image_g_image'])) {
    $data['node-ca_gallery_image-field_gallery_image_g_image']['widget']['settings']['manualcrop_styles_list']['crop_default_portrait'] = 'crop_default_portrait'; /* WAS: '' */
    $data['node-ca_gallery_image-field_gallery_image_g_image']['widget']['settings']['preview_image_style'] = 'crop_default_portrait'; /* WAS: 'crop_default_landscape' */
    unset($data['node-ca_gallery_image-field_gallery_image_g_image']['widget']['settings']['manualcrop_styles_list']['crop_default_landscape']);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function ca_gallery_portrait_switch_views_default_views_alter(&$data) {
  if (isset($data['ca_gallery_image_list'])) {
    $data['ca_gallery_image_list']->display['default']->display_options['fields']['field_gallery_image_g_image']['settings']['colorbox_node_style'] = 'crop_default_portrait'; /* WAS: 'crop_default_landscape' */
  }
  if (isset($data['ca_gallery_list'])) {
    $data['ca_gallery_list']->display['default']->display_options['fields']['field_ca_gallery_gallery_image']['settings']['image_style'] = 'crop_default_portrait'; /* WAS: 'crop_default_landscape' */
  }
}
