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
  $handler->display->display_options['title'] = 'Animation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_year_number_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Tous',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_year_number' => 'field_year_number',
    'field_week_number' => 'field_week_number',
    'title' => 'title',
    'timestamp' => 'title',
    'published' => 'published',
    'changed' => 'changed',
    'state' => 'state',
    'moderation_actions' => 'moderation_actions',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'views_ctools_dropbutton' => 'views_ctools_dropbutton',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year_number' => array(
      'sortable' => 0,
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
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'published' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'moderation_actions' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_ctools_dropbutton' => array(
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
  /* Sort criterion: Content: Numéro du tome (field_year_number) */
  $handler->display->display_options['sorts']['field_year_number_value']['id'] = 'field_year_number_value';
  $handler->display->display_options['sorts']['field_year_number_value']['table'] = 'field_data_field_year_number';
  $handler->display->display_options['sorts']['field_year_number_value']['field'] = 'field_year_number_value';
  /* Sort criterion: Content: Numéro de l&#039;animation (field_week_number) */
  $handler->display->display_options['sorts']['field_week_number_value']['id'] = 'field_week_number_value';
  $handler->display->display_options['sorts']['field_week_number_value']['table'] = 'field_data_field_week_number';
  $handler->display->display_options['sorts']['field_week_number_value']['field'] = 'field_week_number_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lesson' => 'lesson',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Numéro du tome (field_year_number) */
  $handler->display->display_options['filters']['field_year_number_value']['id'] = 'field_year_number_value';
  $handler->display->display_options['filters']['field_year_number_value']['table'] = 'field_data_field_year_number';
  $handler->display->display_options['filters']['field_year_number_value']['field'] = 'field_year_number_value';
  $handler->display->display_options['filters']['field_year_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_number_value']['expose']['operator_id'] = 'field_year_number_value_op';
  $handler->display->display_options['filters']['field_year_number_value']['expose']['label'] = 'Tome';
  $handler->display->display_options['filters']['field_year_number_value']['expose']['operator'] = 'field_year_number_value_op';
  $handler->display->display_options['filters']['field_year_number_value']['expose']['identifier'] = 'tome';
  $handler->display->display_options['filters']['field_year_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_year_number_value']['reduce_duplicates'] = TRUE;

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

  /* Display: Page Admin */
  $handler = $view->new_display('page', 'Page Admin', 'page_admin_lessons');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access administration menu';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_year_number' => 'field_year_number',
    'field_week_number' => 'field_week_number',
    'title' => 'title',
    'timestamp' => 'title',
    'published' => 'published',
    'changed' => 'changed',
    'state' => 'state',
    'moderation_actions' => 'moderation_actions',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'views_ctools_dropbutton' => 'views_ctools_dropbutton',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
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
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'published' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'moderation_actions' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_ctools_dropbutton' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workbench_moderation_set_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Modérer',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
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
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Workbench Moderation: Published */
  $handler->display->display_options['fields']['published']['id'] = 'published';
  $handler->display->display_options['fields']['published']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['published']['field'] = 'published';
  $handler->display->display_options['fields']['published']['label'] = 'Publié';
  $handler->display->display_options['fields']['published']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Mise à jour';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Workbench Moderation: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'État';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Field: Workbench Moderation: Moderation links */
  $handler->display->display_options['fields']['moderation_actions']['id'] = 'moderation_actions';
  $handler->display->display_options['fields']['moderation_actions']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['moderation_actions']['field'] = 'moderation_actions';
  $handler->display->display_options['fields']['moderation_actions']['label'] = 'Modération';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Éditer';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Supprimer';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  /* Field: Global: Ctools dropbutton */
  $handler->display->display_options['fields']['views_ctools_dropbutton']['id'] = 'views_ctools_dropbutton';
  $handler->display->display_options['fields']['views_ctools_dropbutton']['table'] = 'views';
  $handler->display->display_options['fields']['views_ctools_dropbutton']['field'] = 'views_ctools_dropbutton';
  $handler->display->display_options['fields']['views_ctools_dropbutton']['label'] = 'Opérations';
  $handler->display->display_options['fields']['views_ctools_dropbutton']['fields'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'views_bulk_operations' => 0,
    'field_year_number' => 0,
    'field_week_number' => 0,
    'title' => 0,
    'published' => 0,
    'changed' => 0,
    'state' => 0,
    'moderation_actions' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lesson' => 'lesson',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Numéro du tome (field_year_number) */
  $handler->display->display_options['filters']['field_year_number_value']['id'] = 'field_year_number_value';
  $handler->display->display_options['filters']['field_year_number_value']['table'] = 'field_data_field_year_number';
  $handler->display->display_options['filters']['field_year_number_value']['field'] = 'field_year_number_value';
  $handler->display->display_options['filters']['field_year_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_number_value']['expose']['operator_id'] = 'field_year_number_value_op';
  $handler->display->display_options['filters']['field_year_number_value']['expose']['label'] = 'Tome';
  $handler->display->display_options['filters']['field_year_number_value']['expose']['operator'] = 'field_year_number_value_op';
  $handler->display->display_options['filters']['field_year_number_value']['expose']['identifier'] = 'tome';
  $handler->display->display_options['filters']['field_year_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_year_number_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Publié';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'État';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'admin/workbench/lessons';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Animations';
  $handler->display->display_options['menu']['weight'] = '-20';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Animations';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Related Lesson for field collection */
  $handler = $view->new_display('block', 'Related Lesson for field collection', 'block_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Activités (field_activities) */
  $handler->display->display_options['relationships']['field_activities_value']['id'] = 'field_activities_value';
  $handler->display->display_options['relationships']['field_activities_value']['table'] = 'field_data_field_activities';
  $handler->display->display_options['relationships']['field_activities_value']['field'] = 'field_activities_value';
  $handler->display->display_options['relationships']['field_activities_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['relationship'] = 'field_activities_value';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['item_id']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lesson' => 'lesson',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['lessons'] = array(
    t('Master'),
    t('Animation'),
    t('more'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Options avancées'),
    t('Tous'),
    t('Select any filter and click on Apply to see results'),
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
    t('Page Admin'),
    t('- Choose an operation -'),
    t('Modérer'),
    t('Publié'),
    t('Mise à jour'),
    t('État'),
    t('Modération'),
    t('Éditer'),
    t('Supprimer'),
    t('Opérations'),
    t('Related Lesson for field collection'),
    t('field collection item from field_activities'),
  );
  $export['lessons'] = $view;

  return $export;
}
