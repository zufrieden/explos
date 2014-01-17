<?php
/**
 * @file
 * ligue_lesson.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ligue_lesson_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
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
      'title_label' => t('Title'),
      'help' => t('<p>Chers rédacteurs et rédactrices,</p>

Voila quelques points à ne pas oublier avant de commencer ta rédaction
<ol>
<li>Une leçon doit durer entre 1h et 1h15 (si le temps de détente est modulable c’est vraiment un plus pour les moniteurs).</li>
<li>Nous t’encourageons à être créatif et varié dans les activités proposées pour chaque leçon.</li>
<li>Nous te demandons que chaque étapes de la leçon soit présente au moins une foi. (Il peut y avoir plusieurs fois la même étape).</li>
<li>N’oublie pas que le sujet de la leçon doit être la partie principale et doit donc occuper une bonne partie du programme.</li>
<li>Attention !!! Si tu ne sauves pas ton travail, il sera perdu. N’utilise pas les flèches de ton navigateur…</li>
</ol>

<p><strong>Si tu as encore des questions contact nous</strong></p>
<p>Luigi : <a href="mailto:lmicheli@ligue.ch">lmicheli@ligue.ch</a> 078 854 37 73</br>
Sylvain : <a href="mailto:sylvain_riard@armeedusalut.ch">sylvain_riard@armeedusalut.ch</a> 079 695 16 97</br>
Aurore : <a href="mailto:asenezergues@ligue.ch">asenezergues@ligue.ch</a> 078 875 77 23</br>
Nadine : <a href="mailto:nadine.mohr@cjms">nadine.mohr@cjms.ch</a>   0033 680 949 621 (natel)</br>
Joelle : <a href="mailto:joelle_huguenin@armeedusalut.ch">joelle_huguenin@armeedusalut.ch</a>  078 695 39 25</br>
Laetitia : <a href="mailto:jeunesse@la-chapelle.net">jeunesse@la-chapelle.net</a> 076 467 39 99</p>'),
    ),
    'location' => array(
      'name' => t('Lieu'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
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
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
