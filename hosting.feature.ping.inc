<?php
/**
 * @file
 * Expose the ping feature to hostmaster.
 */

/**
 * Implements hook_hosting_feature().
 */
function hosting_ping_hosting_feature() {
  $features['ping'] = array(
    'title' => t('Ping queue'),
    'description' => t('Keeps caches fresh.'),
    'status' => HOSTING_FEATURE_ENABLED,
    'module' => 'hosting_ping',
    'group' => 'optional',
  );
  return $features;
}
