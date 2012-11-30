<?php
/**
 * @file
 * crf_chf_erf.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_chf_erf_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function crf_chf_erf_node_info() {
  $items = array(
    'chf_erf' => array(
      'name' => t('CHF/ERF'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
