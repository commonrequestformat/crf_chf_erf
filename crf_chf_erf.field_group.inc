<?php
/**
 * @file
 * crf_chf_erf.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crf_chf_erf_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_chf_erf|node|non_cluster_request|form';
  $field_group->group_name = 'group_chf_erf';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'non_cluster_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CHF/ERF',
    'weight' => '10',
    'children' => array(
      0 => 'field_chf_erf_instructions',
      1 => 'field_chf_erf_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_chf_erf|node|non_cluster_request|form'] = $field_group;

  return $export;
}
