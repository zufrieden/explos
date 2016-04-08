<?php
/**
 * @file
 * ligue_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ligue_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1|node|ev_nement_cl_|form';
  $field_group->group_name = 'group_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ev_nement_cl_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '0',
    'children' => array(
      0 => 'field_datecle',
      1 => 'field_description',
      2 => 'field_date',
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
  $field_groups['group_tab1|node|ev_nement_cl_|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contenu');

  return $field_groups;
}
