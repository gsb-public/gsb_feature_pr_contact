<?php
/**
 * @file
 * gsb_feature_pr_contact.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_pr_contact_taxonomy_default_vocabularies() {
  return array(
    'pr_contact' => array(
      'name' => 'PR Contact',
      'machine_name' => 'pr_contact',
      'description' => 'PR Contact',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
