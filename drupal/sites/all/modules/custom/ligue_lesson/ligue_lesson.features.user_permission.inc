<?php
/**
 * @file
 * ligue_lesson.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ligue_lesson_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create lesson content'.
  $permissions['create lesson content'] = array(
    'name' => 'create lesson content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create location content'.
  $permissions['create location content'] = array(
    'name' => 'create location content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create people content'.
  $permissions['create people content'] = array(
    'name' => 'create people content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create period content'.
  $permissions['create period content'] = array(
    'name' => 'create period content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lesson content'.
  $permissions['delete any lesson content'] = array(
    'name' => 'delete any lesson content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any location content'.
  $permissions['delete any location content'] = array(
    'name' => 'delete any location content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any people content'.
  $permissions['delete any people content'] = array(
    'name' => 'delete any people content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any period content'.
  $permissions['delete any period content'] = array(
    'name' => 'delete any period content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lesson content'.
  $permissions['delete own lesson content'] = array(
    'name' => 'delete own lesson content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own location content'.
  $permissions['delete own location content'] = array(
    'name' => 'delete own location content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own people content'.
  $permissions['delete own people content'] = array(
    'name' => 'delete own people content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own period content'.
  $permissions['delete own period content'] = array(
    'name' => 'delete own period content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in activity_type'.
  $permissions['delete terms in activity_type'] = array(
    'name' => 'delete terms in activity_type',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in lesson_stage'.
  $permissions['delete terms in lesson_stage'] = array(
    'name' => 'delete terms in lesson_stage',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any lesson content'.
  $permissions['edit any lesson content'] = array(
    'name' => 'edit any lesson content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any location content'.
  $permissions['edit any location content'] = array(
    'name' => 'edit any location content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any people content'.
  $permissions['edit any people content'] = array(
    'name' => 'edit any people content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any period content'.
  $permissions['edit any period content'] = array(
    'name' => 'edit any period content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lesson content'.
  $permissions['edit own lesson content'] = array(
    'name' => 'edit own lesson content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own location content'.
  $permissions['edit own location content'] = array(
    'name' => 'edit own location content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own people content'.
  $permissions['edit own people content'] = array(
    'name' => 'edit own people content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own period content'.
  $permissions['edit own period content'] = array(
    'name' => 'edit own period content',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in activity_type'.
  $permissions['edit terms in activity_type'] = array(
    'name' => 'edit terms in activity_type',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in lesson_stage'.
  $permissions['edit terms in lesson_stage'] = array(
    'name' => 'edit terms in lesson_stage',
    'roles' => array(
      'Manager' => 'Manager',
      'Manager Notifs' => 'Manager Notifs',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
