<?php
/**
 * @file
 * ligue_lesson.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ligue_lesson_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_activities-field_activity_type'.
  $field_instances['field_collection_item-field_activities-field_activity_type'] = array(
    'bundle' => 'field_activities',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_activity_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_activities-field_description'.
  $field_instances['field_collection_item-field_activities-field_description'] = array(
    'bundle' => 'field_activities',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'C’est le corps de l’activité, la partie principale :
Indique ce qui va se dire, se vivre,…
Comment, avec quoi, pourquoi,…
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_activities-field_duration'.
  $field_instances['field_collection_item-field_activities-field_duration'] = array(
    'bundle' => 'field_activities',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Estime le temps que va durer cette activité.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'hms_field',
        'settings' => array(
          'display_formats' => array(
            'd' => 0,
            'h' => 'h',
            'm' => 'm',
            's' => 0,
            'w' => 0,
          ),
          'last_separator' => ' et ',
          'separator' => ', ',
        ),
        'type' => 'hms_natural_language_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_duration',
    'label' => 'Durée',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 'h:mm',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_activities-field_lesson_stage'.
  $field_instances['field_collection_item-field_activities-field_lesson_stage'] = array(
    'bundle' => 'field_activities',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_lesson_stage',
    'label' => 'Étape',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_activities-field_media'.
  $field_instances['field_collection_item-field_activities-field_media'] = array(
    'bundle' => 'field_activities',
    'deleted' => 0,
    'description' => 'Si besoin, indique un(des) média(s) que tu proposes pour cette activité (image, pdf, audio, vidéo,…).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'activities-media',
      'file_extensions' => 'txt pdf doc docx ppt pptx jpeg jpg png mov',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          0 => 0,
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'upload' => 'upload',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_activities-field_title'.
  $field_instances['field_collection_item-field_activities-field_title'] = array(
    'bundle' => 'field_activities',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Donne le titre que va porter cette activité.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_title',
    'label' => 'Titre',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-lesson-body'.
  $field_instances['node-lesson-body'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Explique ici en une dizaine de phrases ce qui va être vécu durant l\'animation, afin que l\'enseignant puisse avoir une idée globale de ce qu\'il devra préparer.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Déroulement de l\'animation',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-lesson-field_activities'.
  $field_instances['node-lesson-field_activities'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'C’est ici que tu vas indiquer ce qui va être fait pendant l\'animation… il y aura plusieurs activités. Tu peux en ajouter autant qu’il faut en cliquant sous « ajouter un autre élément », sous la rubrique activités. Tu peux aussi les disposer dans l’ordre que tu veux via la petite étoile sur le côté droit.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_activities',
    'label' => 'Activités',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-lesson-field_goal'.
  $field_instances['node-lesson-field_goal'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Expliquer quel est l’objectif de l\'animation.
Le moniteur qui lira cette partie doit comprendre ce qu’il devra transmettre aux enfants.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_goal',
    'label' => 'Objectif',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-lesson-field_locations'.
  $field_instances['node-lesson-field_locations'] = array(
    'bundle' => 'lesson',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Indique le(s) différent(s) lieu(x) où se passe l’histoire.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_locations',
    'label' => 'Lieux',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-lesson-field_peoples'.
  $field_instances['node-lesson-field_peoples'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique les différents personnages principaux qui interviennent dans l’histoire.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_peoples',
    'label' => 'Personnages',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-lesson-field_periods'.
  $field_instances['node-lesson-field_periods'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique la (ou les) période dans laquelle se passe l’histoire. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_periods',
    'label' => 'Périodes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multiple_selects',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'multiple_selects',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-lesson-field_verses_key'.
  $field_instances['node-lesson-field_verses_key'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique le verset clé de l\'animation, le verset à retenir !
Il peut-être dans un autre passage que celui proposé ci-dessus dans la rubrique « textes bibliques ».
',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'bible__field',
        'settings' => array(
          'book_display' => 'fname',
          'granularity' => 'verse',
        ),
        'type' => 'bible__field_ref_list',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_verses_key',
    'label' => 'Versets “clé”',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bible__field',
      'settings' => array(),
      'type' => 'bible__field_dropdown',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-lesson-field_verses_lesson'.
  $field_instances['node-lesson-field_verses_lesson'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique le(s) passage(s) biblique(s) qui va(vont)  être thématiser dans l\'animation.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'bible__field',
        'settings' => array(
          'book_display' => 'fname',
          'granularity' => 'verse',
        ),
        'type' => 'bible__field_ref_list',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_verses_lesson',
    'label' => 'Textes bibliques',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bible__field',
      'settings' => array(),
      'type' => 'bible__field_dropdown',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-lesson-field_verses_week'.
  $field_instances['node-lesson-field_verses_week'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Selon le lectionnaire « les explorateurs ».',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'bible__field',
        'settings' => array(
          'book_display' => 'fname',
          'granularity' => 'verse',
        ),
        'type' => 'bible__field_ref_list',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_verses_week',
    'label' => 'Versets de la semaine',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bible__field',
      'settings' => array(),
      'type' => 'bible__field_dropdown',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-lesson-field_video'.
  $field_instances['node-lesson-field_video'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video',
    'label' => 'Vidéo',
    'required' => 0,
    'settings' => array(
      'allowed_providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 0,
      'description_length' => 128,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-lesson-field_week_number'.
  $field_instances['node-lesson-field_week_number'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique le numéro de l\'animation, selon le lectionnaire. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_week_number',
    'label' => 'Numéro de l\'animation',
    'required' => 0,
    'settings' => array(
      'max' => 30,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-lesson-field_year_number'.
  $field_instances['node-lesson-field_year_number'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique le numéro du tome',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_year_number',
    'label' => 'Numéro du tome',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-location-body'.
  $field_instances['node-location-body'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-location-field_location'.
  $field_instances['node-location-field_location'] = array(
    'bundle' => 'location',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Localisation',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'geofield',
      'settings' => array(),
      'type' => 'geofield_latlon',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-people-field_bio'.
  $field_instances['node-people-field_bio'] = array(
    'bundle' => 'people',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bio',
    'label' => 'Bio',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-people-field_birthdate'.
  $field_instances['node-people-field_birthdate'] = array(
    'bundle' => 'people',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(),
          'format' => 'medium',
          'use_override' => 'none',
        ),
        'type' => 'partial_date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_birthdate',
    'label' => 'Date de naissance',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'partial_date',
      'settings' => array(
        0 => FALSE,
        'estimates' => array(
          'from' => array(
            'day' => 0,
            'hour' => 0,
            'minute' => 0,
            'month' => 0,
            'second' => 0,
            'year' => 0,
          ),
        ),
        'granularity' => array(
          'from' => array(
            'day' => 'day',
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'timezone' => 0,
            'year' => 'year',
          ),
        ),
        'help_txt' => array(
          'und' => array(
            '_remove' => '',
            'check_approximate' => '',
            'components' => '',
            'txt_long' => 'Longer description of date',
            'txt_short' => 'Short description of date',
          ),
        ),
        'hide_remove' => 1,
        'increments' => array(
          'minute' => 1,
          'second' => 1,
        ),
        'theme_overrides' => array(
          'check_approximate' => 0,
          'range_inline' => 0,
          'txt_long' => 0,
          'txt_short' => 0,
        ),
        'tz_handling' => 'none',
      ),
      'type' => 'partial_date',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-people-field_deathdate'.
  $field_instances['node-people-field_deathdate'] = array(
    'bundle' => 'people',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(),
          'format' => 'medium',
          'use_override' => 'none',
        ),
        'type' => 'partial_date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_deathdate',
    'label' => 'Date de décès',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'partial_date',
      'settings' => array(
        0 => FALSE,
        'estimates' => array(
          'from' => array(
            'day' => 0,
            'hour' => 0,
            'minute' => 0,
            'month' => 0,
            'second' => 0,
            'year' => 0,
          ),
        ),
        'granularity' => array(
          'from' => array(
            'day' => 'day',
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'timezone' => 0,
            'year' => 'year',
          ),
        ),
        'help_txt' => array(
          'und' => array(
            '_remove' => '',
            'check_approximate' => '',
            'components' => '',
            'txt_long' => 'Longer description of date',
            'txt_short' => 'Short description of date',
          ),
        ),
        'hide_remove' => 1,
        'increments' => array(
          'minute' => 1,
          'second' => 1,
        ),
        'theme_overrides' => array(
          'check_approximate' => 0,
          'range_inline' => 0,
          'txt_long' => 0,
          'txt_short' => 0,
        ),
        'tz_handling' => 'none',
      ),
      'type' => 'partial_date',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-people-field_is_approximative_birthdate'.
  $field_instances['node-people-field_is_approximative_birthdate'] = array(
    'bundle' => 'people',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_is_approximative_birthdate',
    'label' => 'Date de naissance approximative ?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-people-field_is_approximative_deathdate'.
  $field_instances['node-people-field_is_approximative_deathdate'] = array(
    'bundle' => 'people',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_is_approximative_deathdate',
    'label' => 'Date de mort approximative ?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-people-field_media'.
  $field_instances['node-people-field_media'] = array(
    'bundle' => 'people',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'people-media',
      'file_extensions' => 'png jpeg jpg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'upload' => 'upload',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-period-body'.
  $field_instances['node-period-body'] = array(
    'bundle' => 'period',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-period-field_date_perdiod'.
  $field_instances['node-period-field_date_perdiod'] = array(
    'bundle' => 'period',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(),
          'format' => 'medium',
          'use_override' => 'none',
        ),
        'type' => 'partial_date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_perdiod',
    'label' => 'Date perdiod',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'partial_date',
      'settings' => array(
        0 => FALSE,
        'estimates' => array(
          'from' => array(
            'day' => 0,
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'year' => 0,
          ),
          'to' => array(
            'day' => 0,
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'year' => 0,
          ),
        ),
        'granularity' => array(
          'from' => array(
            'day' => 0,
            'hour' => 0,
            'minute' => 0,
            'month' => 0,
            'second' => 0,
            'timezone' => 0,
            'year' => 'year',
          ),
          'to' => array(
            'day' => 0,
            'hour' => 0,
            'minute' => 0,
            'month' => 0,
            'second' => 0,
            'timezone' => 0,
            'year' => 'year',
          ),
        ),
        'help_txt' => array(
          'und' => array(
            '_remove' => '',
            'check_approximate' => '',
            'components' => '',
            'txt_long' => 'Longer description of date',
            'txt_short' => 'Short description of date',
          ),
        ),
        'hide_remove' => 1,
        'increments' => array(
          'minute' => 1,
          'second' => 1,
        ),
        'theme_overrides' => array(
          'check_approximate' => 0,
          'range_inline' => 0,
          'txt_long' => 0,
          'txt_short' => 0,
        ),
        'tz_handling' => 'none',
      ),
      'type' => 'partial_date',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-period-field_date_start_end'.
  $field_instances['node-period-field_date_start_end'] = array(
    'bundle' => 'period',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_start_end',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-2000:+0',
      ),
      'type' => 'date_text',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activités');
  t('Bio');
  t('Body');
  t('C’est ici que tu vas indiquer ce qui va être fait pendant l\'animation… il y aura plusieurs activités. Tu peux en ajouter autant qu’il faut en cliquant sous « ajouter un autre élément », sous la rubrique activités. Tu peux aussi les disposer dans l’ordre que tu veux via la petite étoile sur le côté droit.');
  t('C’est le corps de l’activité, la partie principale :
Indique ce qui va se dire, se vivre,…
Comment, avec quoi, pourquoi,…
');
  t('Date');
  t('Date de décès');
  t('Date de mort approximative ?');
  t('Date de naissance');
  t('Date de naissance approximative ?');
  t('Date perdiod');
  t('Description');
  t('Donne le titre que va porter cette activité.');
  t('Durée');
  t('Déroulement de l\'animation');
  t('Estime le temps que va durer cette activité.');
  t('Explique ici en une dizaine de phrases ce qui va être vécu durant l\'animation, afin que l\'enseignant puisse avoir une idée globale de ce qu\'il devra préparer.');
  t('Expliquer quel est l’objectif de l\'animation.
Le moniteur qui lira cette partie doit comprendre ce qu’il devra transmettre aux enfants.
');
  t('Indique la (ou les) période dans laquelle se passe l’histoire. ');
  t('Indique le numéro de l\'animation, selon le lectionnaire. ');
  t('Indique le numéro du tome');
  t('Indique le verset clé de l\'animation, le verset à retenir !
Il peut-être dans un autre passage que celui proposé ci-dessus dans la rubrique « textes bibliques ».
');
  t('Indique le(s) différent(s) lieu(x) où se passe l’histoire.');
  t('Indique le(s) passage(s) biblique(s) qui va(vont)  être thématiser dans l\'animation.');
  t('Indique les différents personnages principaux qui interviennent dans l’histoire.');
  t('Lieux');
  t('Localisation');
  t('Media');
  t('Numéro de l\'animation');
  t('Numéro du tome');
  t('Objectif');
  t('Personnages');
  t('Périodes');
  t('Selon le lectionnaire « les explorateurs ».');
  t('Si besoin, indique un(des) média(s) que tu proposes pour cette activité (image, pdf, audio, vidéo,…).');
  t('Textes bibliques');
  t('Titre');
  t('Type');
  t('Versets de la semaine');
  t('Versets “clé”');
  t('Vidéo');
  t('Étape');

  return $field_instances;
}
