<?php
/**
 * @file
 * ligue_lesson.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ligue_lesson_taxonomy_default_vocabularies() {
  return array(
    'activity_type' => array(
      'name' => 'Activity type',
      'machine_name' => 'activity_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'lesson_stage' => array(
      'name' => 'Lesson stage',
      'machine_name' => 'lesson_stage',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
