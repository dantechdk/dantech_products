<?php
/**
 * @file
 * dantech_products.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dantech_products_taxonomy_default_vocabularies() {
  return array(
    'dantech_product_type' => array(
      'name' => 'Produkttype',
      'machine_name' => 'dantech_product_type',
      'description' => 'Product types',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
