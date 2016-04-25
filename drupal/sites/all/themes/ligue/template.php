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

function ligue_preprocess_field($variables) {
  $element = $variables['element'];
  if ($element['#field_name'] == 'field_peoples') {
    $variables['label'] = '' . $variables['label'];
  }
}
