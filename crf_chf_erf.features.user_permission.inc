<?php
/**
 * @file
 * crf_chf_erf.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_chf_erf_user_default_permissions() {
  $permissions = array();

  // Exported permission: create chf_erf content.
  $permissions['create chf_erf content'] = array(
    'name' => 'create chf_erf content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any chf_erf content.
  $permissions['delete any chf_erf content'] = array(
    'name' => 'delete any chf_erf content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own chf_erf content.
  $permissions['delete own chf_erf content'] = array(
    'name' => 'delete own chf_erf content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any chf_erf content.
  $permissions['edit any chf_erf content'] = array(
    'name' => 'edit any chf_erf content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own chf_erf content.
  $permissions['edit own chf_erf content'] = array(
    'name' => 'edit own chf_erf content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: view any unpublished chf_erf content.
  $permissions['view any unpublished chf_erf content'] = array(
    'name' => 'view any unpublished chf_erf content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
