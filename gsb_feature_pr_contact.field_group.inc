<?php
/**
 * @file
 * gsb_feature_pr_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_pr_contact_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_pr_contact|taxonomy_term|pr_contact|default';
  $field_group->group_name = 'group_wrapper_pr_contact';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'pr_contact';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'For More Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_pr_contact_email',
      1 => 'field_pr_contact_phone',
      2 => 'field_pr_contact_title',
      3 => 'pr_contact_title',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'For More Information',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_wrapper_pr_contact|taxonomy_term|pr_contact|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('For More Information');

  return $field_groups;
}
