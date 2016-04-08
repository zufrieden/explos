<?php
/**
 * @file
 * ligue_lesson.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ligue_lesson_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flex1|node|people|form';
  $field_group->group_name = 'group_flex1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab1';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_deathdate',
      1 => 'field_is_approximative_deathdate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'flex',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_flex1|node|people|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flex|field_collection_item|field_activities|form';
  $field_group->group_name = 'group_flex';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_duration',
      1 => 'field_lesson_stage',
      2 => 'field_activity_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'flex',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_flex|field_collection_item|field_activities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flex|node|lesson|form';
  $field_group->group_name = 'group_flex';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lesson';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab1';
  $field_group->data = array(
    'label' => '',
    'weight' => '14',
    'children' => array(
      0 => 'field_week_number',
      1 => 'field_year_number',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'flex',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_flex|node|lesson|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flex|node|people|form';
  $field_group->group_name = 'group_flex';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab1';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_birthdate',
      1 => 'field_is_approximative_birthdate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'flex',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_flex|node|people|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|field_collection_item|field_activities|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_activities';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '3',
    'children' => array(
      0 => 'field_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-image field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_image|field_collection_item|field_activities|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|node|lesson|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lesson';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Titre, Objectif et Versets',
    'weight' => '0',
    'children' => array(
      0 => 'field_goal',
      1 => 'field_verses_key',
      2 => 'field_verses_lesson',
      3 => 'field_verses_week',
      4 => 'title',
      5 => 'group_flex',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Titre, Objectif et Versets',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tab1 field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_tab1|node|lesson|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|node|location|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_location',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab1 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab1|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|node|people|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '0',
    'children' => array(
      0 => 'field_bio',
      1 => 'field_media',
      2 => 'title',
      3 => 'group_flex',
      4 => 'group_flex1',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab1 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab1|node|people|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|node|period|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'period';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_date_start_end',
      2 => 'field_date_perdiod',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab1 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab1|node|period|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab2|node|lesson|form';
  $field_group->group_name = 'group_tab2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lesson';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Activités',
    'weight' => '1',
    'children' => array(
      0 => 'field_activities',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab2 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab2|node|lesson|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab3|node|lesson|form';
  $field_group->group_name = 'group_tab3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lesson';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Détails leçon',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_locations',
      2 => 'field_peoples',
      3 => 'field_periods',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab3 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tab3|node|lesson|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activités');
  t('Contenu');
  t('Détails leçon');
  t('Image');
  t('Titre, Objectif et Versets');

  return $field_groups;
}
