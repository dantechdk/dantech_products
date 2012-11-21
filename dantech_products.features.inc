<?php
/**
 * @file
 * dantech_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dantech_products_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dantech_products_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dantech_products_node_info() {
  $items = array(
    'dantech_product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => t('Used for products.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
