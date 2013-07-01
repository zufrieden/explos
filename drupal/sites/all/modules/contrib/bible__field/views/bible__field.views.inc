<?php
//
///**
// * Implements hook_field_views_data().
// */
//function bible__field_field_views_data($field) {
//  $data = field_views_field_default_views_data($field);
//
//  // Add a handler for countries.
//  foreach ($field['storage']['details']['sql'] as $type => $tables) {
//    foreach ($tables as $table_name => $columns) {
//      if (!isset($columns['book'])) {
//        continue;
//      }
//      
//      $column_real_name = $columns['book'];
//      
//      $fields_of_value = $data[$table_name]['entity_id']['field']['moved to'];
//      if (!isset($data[$table_name][$fields_of_value[1]]['field'])) {
//        continue;
//      }
//
//      $data[$table_name][$fields_of_value[1]]['field']['handler'] = 'bible__field_bible_views_handler_field';
//    }
//  }
//
//  return $data;
//}
//
///**
// * Impliments hook_views_handlers()
// */
//function bible__field_views_handlers() {
//  return array(
//    'info' => array(
//      'path' => drupal_get_path('module', 'bible__field') . '/views/handlers',
//    ),
//    'handlers' => array(
//      'bible__field_bible_views_handler_field' => array(
//        'parent' => 'views_handler_field_field',
//      ),
//    ),
//  );
//}
//
//
