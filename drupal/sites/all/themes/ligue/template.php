<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

function ligue_block_view_alter(&$data, $block) {
  if ($block->module == 'workbench') {
    $items = module_invoke_all('workbench_block');
    if (empty($items)) {
      return;
    }
    $data = array(
      'subject' => '',
      'content' => array(
        '#markup' => theme('container', array('element' => array('#children' => implode('<br />', $items), '#attributes' => array('class' => 'alert alert-info workbench-info'))))
      ),
    );
  }
}

function ligue_preprocess_node(&$variables) {
  // make some regions available in the node template
  if(($variables['node']->type == 'page') && $variables['page']) {
    if ($reaction = context_get_plugin('reaction', 'block')) {
      $variables['region']['sidebar_second'] = $reaction->block_get_blocks_by_region('sidebar_second');

      if (!empty($variables['region']['sidebar_second'])) {
        $variables['content_class'] = ' class="col-md-6"';
      } else {
        $variables['content_class'] = ' class="col-sm-12"';
      }
      drupal_static_reset('context_reaction_block_list');
    }
  }
}

function ligue_preprocess_field(&$variables) {
  $element = $variables['element'];
  if ($element['#bundle'] == 'lesson' && $element['#field_type'] == 'entityreference' && $element['#formatter'] == 'entityreference_label') {
    foreach ($variables['items'] as $key => $item) {
      $variables['items'][$key]['#markup'] = l($item['#markup'], 'node/' . $element['#items'][$key]['target_id'], array('attributes' => array('class' => 'btn btn-primary btn-xs')));
    }
  }

  if ($element['#field_name'] == 'field_activity_type' || $element['#field_name'] == 'field_duration') {
    $variables['classes_array'][] = 'flex-baseline';
  }

  if ($element['#field_name'] == 'field_lesson_stage') {
    $label = $element[0]['#markup'];
    $regex = "/^([0-9]\s)/";
    $number = array();
    preg_match($regex, $label, $number);
    $variables['label'] = preg_replace($regex, "", $label);
    $variables['number'] = str_replace(" ", "", $number[0]);
  }

  if ($variables['element']['#entity_type'] == 'field_collection_item') {
    // Check if the bundle name (i.e. the field collection field name) is
    // among the theme hook suggestions.
    $index = array_search('field__' . $variables['element']['#bundle'],
      $variables['theme_hook_suggestions']);

    // Remove the bundle theme hook suggestion.
    if ($index !== false) {
      unset($variables['theme_hook_suggestions'][$index]);
    }
  }
}

function ligue_field_collection_view($variables) {
  $element = $variables['element'];
  return $element['#children'];
}
