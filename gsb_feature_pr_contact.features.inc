<?php
/**
 * @file
 * gsb_feature_pr_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_pr_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
