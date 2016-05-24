<?php
/**
 * @file
 * ligue_site.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ligue_site_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flex3|node|lesson|form';
  $field_group->group_name = 'group_flex3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lesson';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab1';
  $field_group->data = array(
    'label' => '',
    'weight' => '20',
    'children' => array(
      0 => 'field_pages_from',
      1 => 'field_pages_to',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'flex',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_flex3|node|lesson|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|node|bible_text|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bible_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_reference',
      2 => 'field_order',
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
  $field_groups['group_tab1|node|bible_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|node|page|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_cover_image',
      2 => 'title_field',
      3 => 'field_subtitle',
      4 => 'field_second_body',
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
  $field_groups['group_tab1|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contenu');

  return $field_groups;
}
