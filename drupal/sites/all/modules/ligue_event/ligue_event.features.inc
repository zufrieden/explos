<?php
/**
 * @file
 * ligue_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ligue_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ligue_event_node_info() {
  $items = array(
    'ev_nement_cl_' => array(
      'name' => t('Evénement clé'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
