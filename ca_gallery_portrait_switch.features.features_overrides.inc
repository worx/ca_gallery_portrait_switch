<?php
/**
 * @file
 * ca_gallery_portrait_switch.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ca_gallery_portrait_switch_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ca_gallery-field_ca_gallery_gallery_image.widget|settings|manualcrop_styles_list|crop_default_landscape"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ca_gallery-field_ca_gallery_gallery_image.widget|settings|manualcrop_styles_list|crop_default_portrait"] = 'crop_default_portrait';
  $overrides["field_instance.node-ca_gallery-field_ca_gallery_gallery_image.widget|settings|preview_image_style"] = 'crop_default_portrait_preview';
  $overrides["field_instance.node-ca_gallery_image-field_gallery_image_g_image.widget|settings|manualcrop_styles_list|crop_default_landscape"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ca_gallery_image-field_gallery_image_g_image.widget|settings|manualcrop_styles_list|crop_default_portrait"] = 'crop_default_portrait';
  $overrides["field_instance.node-ca_gallery_image-field_gallery_image_g_image.widget|settings|preview_image_style"] = 'crop_default_portrait_preview';

  // Exported overrides for: views_view
  $overrides["views_view.ca_gallery_image_list.display|default|display_options|fields|field_gallery_image_g_image|settings|colorbox_node_style"] = 'crop_default_portrait';
  $overrides["views_view.ca_gallery_list.display|default|display_options|fields|field_ca_gallery_gallery_image|settings|image_style"] = 'crop_default_portrait';

 return $overrides;
}
