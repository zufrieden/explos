<?php
/**
 * @file
 * ligue_lesson.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ligue_lesson_node_info() {
  $items = array(
    'lesson' => array(
      'name' => t('Lesson'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
