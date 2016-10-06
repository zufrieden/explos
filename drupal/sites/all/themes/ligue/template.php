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
      if (!empty($variables['region']['sidebar_second']) || !empty($variables['field_second_body'])) {
        $variables['content_class'] = ' class="col-md-6"';
      } else {
        $variables['content_class'] = ' class="col-sm-12"';
      }
      drupal_static_reset('context_reaction_block_list');
    }
  } elseif ($variables['page']) {
    $variables['content_class'] = ' class="col-sm-12"';
  }
  if($variables['node']->type == 'lesson') {
    $variables['content']['links']['comment']['#links']['comment-add']['attributes']['class'][] = 'btn btn-info';
  }

}

function ligue_preprocess_field(&$variables) {
  $element = $variables['element'];
  if ($element['#bundle'] == 'lesson' && $element['#field_type'] == 'entityreference' && $element['#formatter'] == 'entityreference_label') {
    foreach ($variables['items'] as $key => $item) {
      // Temporary remove the link
      // $variables['items'][$key]['#markup'] = l($item['#markup'], 'node/' . $element['#items'][$key]['target_id'], array('attributes' => array('class' => 'btn btn-primary btn-xs')));
      $variables['items'][$key]['#markup'] = '<span class="label label-primary">' . $item['#markup'] . '</span>';
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

function ligue_preprocess_comment(&$variables) {
  // Change the Permalink to display #1 instead of 'Permalink'
  $comment = $variables['comment'];
  $uri = entity_uri('comment', $comment);
  $uri['options'] += array('attributes' => array(
    'class' => 'permalink',
    'rel' => 'bookmark',
  ));
  $variables['permalink'] = l('#' . $variables['id'], $uri['path'], $uri['options']);

  // add classes to all actions buttons
  $variables['content']['links']['comment']['#links']['comment-reply']['attributes']['class'][] = 'btn btn-xs btn-default';
  $variables['content']['links']['comment']['#links']['comment-delete']['attributes']['class'][] = 'btn btn-xs btn-danger';
  $variables['content']['links']['comment']['#links']['comment-edit']['attributes']['class'][] = 'btn btn-xs btn-info';
}


/**
 * Bootstrap theme wrapper function for the secondary menu links.
 */
function ligue_menu_tree__secondary(&$variables) {
  return '<ul class="menu nav navbar-nav secondary navbar-right">' . $variables['tree'] . '</ul>';
}

function ligue_video_embed_handler_info_alter(&$info) {
  foreach ($info as $service) {
    $service['defaults']['class'] = 'embed-responsive-item';
  }
}

function ligue_form_views_exposed_form_alter(&$form, $form_state) {

  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'lesson')
    ->propertyCondition('status', 1);

  $result = $query->execute();
  $tome = [];
  foreach ($result['node'] as $node) {
    $node = node_load($node->nid);
    $tome[] = field_get_items('node', $node, 'field_year_number')[0]['value'];
  }
  $tome = array_unique($tome);

  foreach($form['#info'] as $field){
    $field_id = $field['value'];
    if ($form[$field_id]["#type"]=="select"){
      foreach($form[$field_id]["#options"] as $optionvalue){
        if (!in_array($optionvalue, $tome)){
          unset ($form[$field_id]["#options"][$optionvalue]);
        }
      }
    }
  }
}

function ligue_preprocess_page(&$variables) {
  if ($variables['theme_hook_suggestions'][0] === 'page__user') {
    $variables['page_user'] = true;
  }
}

function ligue_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id === 'user_register_form' && isset($form['field_phone']) ) {
    $form['field_phone']['#access'] = TRUE;
  }
}
