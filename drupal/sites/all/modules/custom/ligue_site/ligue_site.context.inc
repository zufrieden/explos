<?php
/**
 * @file
 * ligue_site.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ligue_site_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ligue_lesson';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-created_lesson-block' => array(
          'module' => 'views',
          'delta' => 'created_lesson-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ligue_lesson'] = $context;

  return $export;
}
