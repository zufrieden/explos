<?php
/**
 * @file
 * ligue_lesson.features.workbench_email.inc
 */

/**
 * Implements hook_workbench_email_export().
 */
function ligue_lesson_workbench_email_export() {
  $items = array(
    'needs_review:draft:original author' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'author' => 1,
      'automatic' => 1,
      'subject' => 'Animation passée en brouillon',
      'message' => 'Après révision, votre animation "[node:title]" a été à nouveau basculée en "brouillon" par [current-user:name] à [node:changed].

Message de révision: [node:log]
Voir plus: [node:url]',
      'role' => 'original author',
    ),
  );
  return $items;
}
