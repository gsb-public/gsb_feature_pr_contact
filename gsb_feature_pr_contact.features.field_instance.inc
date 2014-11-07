<?php
/**
 * @file
 * gsb_feature_pr_contact.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gsb_feature_pr_contact_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-pr_contact-field_pr_contact_beats'
  $field_instances['taxonomy_term-pr_contact-field_pr_contact_beats'] = array(
    'bundle' => 'pr_contact',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_pr_contact_beats',
    'label' => 'Beats',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'gsb_html_text' => 'gsb_html_text',
          'gsb_wysiwyg_text' => 'gsb_wysiwyg_text',
          'markdown' => 'markdown',
          'plain_text' => 'plain_text',
          'slideshow' => 'slideshow',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 1,
            ),
            'gsb_html_text' => array(
              'weight' => -9,
            ),
            'gsb_wysiwyg_text' => array(
              'weight' => -10,
            ),
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'slideshow' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'taxonomy_term-pr_contact-field_pr_contact_email'
  $field_instances['taxonomy_term-pr_contact-field_pr_contact_email'] = array(
    'bundle' => 'pr_contact',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'email_contact',
        'settings' => array(
          'conditions' => array(),
          'custom_path' => '',
          'default_message' => '[current-user:name] sent a message using the contact form at [current-page:url].',
          'link_text' => 'Email',
          'redirection_to' => 'referer',
        ),
        'type' => 'email_contact_link',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_pr_contact_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'allow_without_formatter' => 0,
      'custom_add_another' => '',
      'custom_remove' => '',
      'form_title' => 'Email',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'taxonomy_term-pr_contact-field_pr_contact_phone'
  $field_instances['taxonomy_term-pr_contact-field_pr_contact_phone'] = array(
    'bundle' => 'pr_contact',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_pr_contact_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'taxonomy_term-pr_contact-field_pr_contact_title'
  $field_instances['taxonomy_term-pr_contact-field_pr_contact_title'] = array(
    'bundle' => 'pr_contact',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_pr_contact_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'gsb_html_text' => 'gsb_html_text',
          'gsb_wysiwyg_text' => 'gsb_wysiwyg_text',
          'markdown' => 'markdown',
          'plain_text' => 'plain_text',
          'slideshow' => 'slideshow',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 1,
            ),
            'gsb_html_text' => array(
              'weight' => -9,
            ),
            'gsb_wysiwyg_text' => array(
              'weight' => -10,
            ),
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'slideshow' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Beats');
  t('Email');
  t('Phone');
  t('Title');

  return $field_instances;
}
