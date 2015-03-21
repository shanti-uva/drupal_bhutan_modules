<?php
/**
 * @file
 * bhutan_spash_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bhutan_spash_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-splash_page-field_grid_inset'
  $field_instances['node-splash_page-field_grid_inset'] = array(
    'bundle' => 'splash_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_grid_inset',
    'label' => 'Grid Inset',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-splash_page-field_overview'
  $field_instances['node-splash_page-field_overview'] = array(
    'bundle' => 'splash_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Overview text is in the box below the photo grid',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_overview',
    'label' => 'Overview Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Grid Inset');
  t('Overview Text');
  t('Overview text is in the box below the photo grid');

  return $field_instances;
}
