<?php
/**
 * @file
 * ligue_lesson.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ligue_lesson_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ligue_lesson_node_info() {
  $items = array(
    'lesson' => array(
      'name' => t('Leçon'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => t('<p><b>Avant de commencer</b></p>
<ul>
<li><a href="http://ligue.alwaysdata.net/sites/default/files/infos_redacteurs_0.pdf" target=_blank>Quelques infos générales...</a></li>
<li><a href="http://ligue.alwaysdata.net/sites/default/files/banque_multimedias.pdf" target=_blank>Quelques infos concernant les droits d\'auteurs pour les médias</a></li>
</ol>'),
    ),
    'location' => array(
      'name' => t('Lieu'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
    'people' => array(
      'name' => t('Personnes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
    'period' => array(
      'name' => t('Période'),
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
