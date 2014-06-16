<?php
/**
 * @file
 * permisos.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function permisos_user_default_roles() {
  $roles = array();

  // Exported role: Community Manager
  $roles['Community Manager'] = array(
    'name' => 'Community Manager',
    'weight' => '8',
  );

  // Exported role: Gestor de establecimiento
  $roles['Gestor de establecimiento'] = array(
    'name' => 'Gestor de establecimiento',
    'weight' => '5',
  );

  // Exported role: Moderador
  $roles['Moderador'] = array(
    'name' => 'Moderador',
    'weight' => '7',
  );

  // Exported role: Mánager
  $roles['Mánager'] = array(
    'name' => 'Mánager',
    'weight' => '4',
  );

  // Exported role: Músico
  $roles['Músico'] = array(
    'name' => 'Músico',
    'weight' => '3',
  );

  // Exported role: Redactor/a
  $roles['Redactor/a'] = array(
    'name' => 'Redactor/a',
    'weight' => '6',
  );

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
