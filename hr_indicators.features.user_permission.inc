<?php
/**
 * @file
 * hr_indicators.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_indicators_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use search_api_autocomplete for search_api_views_hr_indicators'.
  $permissions['use search_api_autocomplete for search_api_views_hr_indicators'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_hr_indicators',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  return $permissions;
}
