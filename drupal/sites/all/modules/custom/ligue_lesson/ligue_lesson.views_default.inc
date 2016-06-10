<?php
/**
 * @file
 * ligue_lesson.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ligue_lesson_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lessons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lessons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les animations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_year_number' => 'field_year_number',
    'field_week_number' => 'field_week_number',
    'title' => 'title',
    'field_goal' => 'field_goal',
  );
  $handler->display->display_options['style_options']['default'] = 'field_year_number';
  $handler->display->display_options['style_options']['info'] = array(
    'field_year_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_week_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_goal' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Numéro du tome */
  $handler->display->display_options['fields']['field_year_number']['id'] = 'field_year_number';
  $handler->display->display_options['fields']['field_year_number']['table'] = 'field_data_field_year_number';
  $handler->display->display_options['fields']['field_year_number']['field'] = 'field_year_number';
  $handler->display->display_options['fields']['field_year_number']['label'] = 'Tome';
  /* Field: Content: Numéro de l'animation */
  $handler->display->display_options['fields']['field_week_number']['id'] = 'field_week_number';
  $handler->display->display_options['fields']['field_week_number']['table'] = 'field_data_field_week_number';
  $handler->display->display_options['fields']['field_week_number']['field'] = 'field_week_number';
  $handler->display->display_options['fields']['field_week_number']['label'] = 'Numéro';
  $handler->display->display_options['fields']['field_week_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Objectif */
  $handler->display->display_options['fields']['field_goal']['id'] = 'field_goal';
  $handler->display->display_options['fields']['field_goal']['table'] = 'field_data_field_goal';
  $handler->display->display_options['fields']['field_goal']['field'] = 'field_goal';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lesson' => 'lesson',
  );

  /* Display: Page - All Lessons */
  $handler = $view->new_display('page', 'Page - All Lessons', 'page');
  $handler->display->display_options['path'] = 'les-animations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Les animations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Lessons with person */
  $handler = $view->new_display('block', 'Lessons with person', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_peoples_target_id']['id'] = 'field_peoples_target_id';
  $handler->display->display_options['relationships']['field_peoples_target_id']['table'] = 'field_data_field_peoples';
  $handler->display->display_options['relationships']['field_peoples_target_id']['field'] = 'field_peoples_target_id';
  $handler->display->display_options['relationships']['field_peoples_target_id']['label'] = 'Entité Contenu réferencée par field_peoples';
  $handler->display->display_options['relationships']['field_peoples_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Personnages (field_peoples) */
  $handler->display->display_options['arguments']['field_peoples_target_id']['id'] = 'field_peoples_target_id';
  $handler->display->display_options['arguments']['field_peoples_target_id']['table'] = 'field_data_field_peoples';
  $handler->display->display_options['arguments']['field_peoples_target_id']['field'] = 'field_peoples_target_id';
  $handler->display->display_options['arguments']['field_peoples_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_peoples_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_peoples_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_peoples_target_id']['title'] = 'Les animations avec %1';
  $handler->display->display_options['arguments']['field_peoples_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_peoples_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_peoples_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_peoples_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_peoples_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_peoples_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_peoples_target_id']['validate_options']['types'] = array(
    'people' => 'people',
  );

  /* Display: Lessons in location */
  $handler = $view->new_display('block', 'Lessons in location', 'block_2');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_locations_target_id']['id'] = 'field_locations_target_id';
  $handler->display->display_options['relationships']['field_locations_target_id']['table'] = 'field_data_field_locations';
  $handler->display->display_options['relationships']['field_locations_target_id']['field'] = 'field_locations_target_id';
  $handler->display->display_options['relationships']['field_locations_target_id']['label'] = 'Entité Contenu réferencée par field_locations';
  $handler->display->display_options['relationships']['field_locations_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Localisation (field_location) - proximity */
  $handler->display->display_options['arguments']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['arguments']['field_geofield_distance']['table'] = 'field_data_field_location';
  $handler->display->display_options['arguments']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['arguments']['field_geofield_distance']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_geofield_distance']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_geofield_distance']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_geofield_distance']['title'] = 'Les animations en lien avec ce lieu';
  $handler->display->display_options['arguments']['field_geofield_distance']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_geofield_distance']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_geofield_distance']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_geofield_distance']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_geofield_distance']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_geofield_distance']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_geofield_distance']['validate_options']['types'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['arguments']['field_geofield_distance']['proximity'] = array(
    'operation' => 'lt',
    'default_radius' => '',
    'radius_unit' => '6371',
  );

  /* Display: Lessons in period */
  $handler = $view->new_display('block', 'Lessons in period', 'block_3');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_periods_target_id']['id'] = 'field_periods_target_id';
  $handler->display->display_options['relationships']['field_periods_target_id']['table'] = 'field_data_field_periods';
  $handler->display->display_options['relationships']['field_periods_target_id']['field'] = 'field_periods_target_id';
  $handler->display->display_options['relationships']['field_periods_target_id']['label'] = 'Entité Contenu réferencée par field_periods';
  $handler->display->display_options['relationships']['field_periods_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Périodes (field_periods) */
  $handler->display->display_options['arguments']['field_periods_target_id']['id'] = 'field_periods_target_id';
  $handler->display->display_options['arguments']['field_periods_target_id']['table'] = 'field_data_field_periods';
  $handler->display->display_options['arguments']['field_periods_target_id']['field'] = 'field_periods_target_id';
  $handler->display->display_options['arguments']['field_periods_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_periods_target_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_periods_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_periods_target_id']['title'] = 'Les animations se déroulant à cette période';
  $handler->display->display_options['arguments']['field_periods_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_periods_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_periods_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_periods_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_periods_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_periods_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_periods_target_id']['validate_options']['types'] = array(
    'period' => 'period',
  );
  $translatables['lessons'] = array(
    t('Master'),
    t('Les animations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Tome'),
    t('Numéro'),
    t('Title'),
    t('Objectif'),
    t('Page - All Lessons'),
    t('Lessons with person'),
    t('Entité Contenu réferencée par field_peoples'),
    t('Tout'),
    t('Les animations avec %1'),
    t('Lessons in location'),
    t('Entité Contenu réferencée par field_locations'),
    t('Les animations en lien avec ce lieu'),
    t('Lessons in period'),
    t('Entité Contenu réferencée par field_periods'),
    t('Les animations se déroulant à cette période'),
  );
  $export['lessons'] = $view;

  return $export;
}
