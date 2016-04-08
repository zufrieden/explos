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
