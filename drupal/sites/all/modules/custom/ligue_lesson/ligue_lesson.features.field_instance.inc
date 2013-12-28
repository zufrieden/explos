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

  // Exported field_instance: 'field_collection_item-field_activities-field_activity_type'
  $field_instances['field_collection_item-field_activities-field_activity_type'] = array(
    'bundle' => 'field_activities',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Définis le type d’activité que c’est ;

<ul><li><strong>Bricolage</strong>	Coloriage, découpage, création de quelque chose,…</li>
<li><strong>Chant</strong>	Chant</li>
<li><strong>Défi</strong>	Lancer un défi aux enfants, les défier sur un sujet de la leçon</li>
<li><strong>Enseignement</strong>	Temps ou la Parole de Dieu est transmise</li>
<li><strong>Histoire</strong>	Lecture d’un texte biblique, raconter une histoire (biblique ou non)</li>
<li><strong>Illustration</strong>	Explication du thème par des images, vidéo, sketch, …</li>
<li><strong>Jeu</strong>	Temps de jeu</li>
<li><strong>Leçon d’objet</strong>	Une histoire, un fait, un défi, un tour de magie, une vidéo,… avec lequel on tire un parallèle sur le thème de la leçon </li>
<li><strong>Prière</strong>	Temps de prière</li>
<li><strong>Réflexion</strong>	Temps ou l’enfant peut réfléchir sur ce qui à été apporter et se l’approprier (ne pas oublier le temps avec parents…).</li>
<li><strong>Autre</strong>	Tout ce qui ne va pas dans les autres rubriques</li>
</ul>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_activities-field_description'
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_activities-field_duration'
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
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm',
          'leading_zero' => TRUE,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_duration',
    'label' => 'Durée',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'field_collection_item-field_activities-field_lesson_stage'
  $field_instances['field_collection_item-field_activities-field_lesson_stage'] = array(
    'bundle' => 'field_activities',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique ici à quelle partie de la leçon cette activité sera rattachée
<ul><li><strong>Accueil</strong>	Temps ou l’enfant est accueilli et se sent le bienvenu. C’est un temps important qui permet à chacun d’être a l’aise, quelque soit les évènements qui on pu se passer précédemment. Ex : décoration particulière, gobelet de sirop, attention particulière,… selon le thème abordé !</li>
<li><strong>Bienvenue</strong>	Rassembler les enfants dans ce qui va être vécu dans l’heure qui suit, « annoncer la couleur ! » Tous n’ont pas le même vécu (l’arrivée au culte n’est pas toujours évidente..). C’est donc important de les rassembler et d’avoir qqch de motivant avant de commencer…</li>
<li><strong>Intro au thème</strong>	Introduire le thème qui sera proposé</li>
<li><strong>Sujet de la leçon</strong>	C’est la partie principale. On développe ici le thème, on l’explique, le lit, le raconte,…</li>
<li><strong>Engagement personnel</strong>	Temps ou l’enfants peut prendre une décision…</li>
<li><strong>Prière</strong>	Temps de prière, expliquer comment il peut-être vécu… Soyez créatif !</li>
<li><strong>Conclusion</strong>	Finalisation du thème (rappel, résumé, envois,…)</li>
<li><strong>Implication des parents</strong>	Proposer qqch que l’enfant peut prendre avec à la maison pour en parler avec ses parents (questions, histoire, qqch de ludique, un défi,…) Qqch qui implique les parents dans la marche de la foi de leurs enfants…</li>
<li><strong>Détente</strong>	Temps où l’on s’amuse, où l’on crée des liens…</li>
</ul>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_activities-field_media'
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'activities-media',
      'file_extensions' => 'txt pdf doc docx ppt pptx jpeg jpg png',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_activities-field_title'
  $field_instances['field_collection_item-field_activities-field_title'] = array(
    'bundle' => 'field_activities',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Donne le titre que va porter cette activité.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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

  // Exported field_instance: 'node-lesson-body'
  $field_instances['node-lesson-body'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique ici le canevas de la leçon.',
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
    'label' => 'Corps de la leçon',
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
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-lesson-field_activities'
  $field_instances['node-lesson-field_activities'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'C’est ici que tu vas indiquer ce qui va être fait pendant la leçon… il y aura plusieurs activités. Tu peux en ajouter autant qu’il faut en cliquant sous « ajouter un autre élément », sous la rubrique activités. Tu peux aussi les disposer dans l’ordre que tu veux via la petite étoile sur le côté droit.',
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
    'field_name' => 'field_activities',
    'label' => 'Activities',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-lesson-field_goal'
  $field_instances['node-lesson-field_goal'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Expliquer quel est l’objectif de la leçon.
Le moniteur qui lira cette partie doit comprendre ce qu’il devra transmettre aux enfants.
',
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
    'field_name' => 'field_goal',
    'label' => 'Objectif',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-lesson-field_locations'
  $field_instances['node-lesson-field_locations'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-lesson-field_media'
  $field_instances['node-lesson-field_media'] = array(
    'bundle' => 'lesson',
    'deleted' => 0,
    'description' => 'Si besoin, indique un(des) média(s) que tu proposes pour l’ensemble de la leçon (image, pdf, audio, vidéo,…).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
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
    'field_name' => 'field_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'lesson-media',
      'file_extensions' => 'txt pdf doc docx ppt pptx jpeg jpg png',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-lesson-field_peoples'
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-lesson-field_periods'
  $field_instances['node-lesson-field_periods'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique la période dans laquelle se passe l’histoire. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
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
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-lesson-field_prayer'
  $field_instances['node-lesson-field_prayer'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pour cette séance, sous quelle forme proposes-tu de vivre un temps de prière ?',
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
    'field_name' => 'field_prayer',
    'label' => 'Prière',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-lesson-field_verses_key'
  $field_instances['node-lesson-field_verses_key'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique le verset clé de la leçon, le verset à retenir !
Il peut-être dans un autre passage que celui proposé ci-dessus dans la rubrique « texte biblique ».
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bible__field',
        'settings' => array(
          'book_display' => 'fname',
          'granularity' => 'verse',
        ),
        'type' => 'bible__field_ref_list',
        'weight' => 15,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-lesson-field_verses_lesson'
  $field_instances['node-lesson-field_verses_lesson'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique le(s) passage(s) biblique(s) qui va(vont)  être thématiser dans la leçon.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bible__field',
        'settings' => array(
          'book_display' => 'fname',
          'granularity' => 'verse',
        ),
        'type' => 'bible__field_ref_list',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-lesson-field_verses_week'
  $field_instances['node-lesson-field_verses_week'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Selon le lectionnaire « les explorateurs ».',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bible__field',
        'settings' => array(
          'book_display' => 'fname',
          'granularity' => 'verse',
        ),
        'type' => 'bible__field_ref_list',
        'weight' => 13,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-lesson-field_week_number'
  $field_instances['node-lesson-field_week_number'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique le numéro de la semaine de la leçon, selon le lectionnaire. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
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
    'field_name' => 'field_week_number',
    'label' => 'Numéro de semaine',
    'required' => 0,
    'settings' => array(
      'max' => 52,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-lesson-field_welcome'
  $field_instances['node-lesson-field_welcome'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Explique au moniteur comment les enfants qui viennent à cette leçon peuvent être accueillis.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_welcome',
    'label' => 'Bienvenue',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-lesson-field_year_number'
  $field_instances['node-lesson-field_year_number'] = array(
    'bundle' => 'lesson',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indique le numéro de l’année de la leçon, selon le lectionnaire.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_year_number',
    'label' => 'Numéro d\'année',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-location-body'
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
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-location-field_location'
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
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-people-field_bio'
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-people-field_birthdate'
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-people-field_deathdate'
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-people-field_is_approximative_birthdate'
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-people-field_is_approximative_deathdate'
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-people-field_media'
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-period-body'
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-period-field_date_perdiod'
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-period-field_date_start_end'
  $field_instances['node-period-field_date_start_end'] = array(
    'bundle' => 'period',
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
        'text_parts' => array(),
        'year_range' => '-2000:+0',
      ),
      'type' => 'date_text',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('Bienvenue');
  t('Bio');
  t('Body');
  t('Corps de la leçon');
  t('C’est ici que tu vas indiquer ce qui va être fait pendant la leçon… il y aura plusieurs activités. Tu peux en ajouter autant qu’il faut en cliquant sous « ajouter un autre élément », sous la rubrique activités. Tu peux aussi les disposer dans l’ordre que tu veux via la petite étoile sur le côté droit.');
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
  t('Définis le type d’activité que c’est ;

<ul><li><strong>Bricolage</strong>	Coloriage, découpage, création de quelque chose,…</li>
<li><strong>Chant</strong>	Chant</li>
<li><strong>Défi</strong>	Lancer un défi aux enfants, les défier sur un sujet de la leçon</li>
<li><strong>Enseignement</strong>	Temps ou la Parole de Dieu est transmise</li>
<li><strong>Histoire</strong>	Lecture d’un texte biblique, raconter une histoire (biblique ou non)</li>
<li><strong>Illustration</strong>	Explication du thème par des images, vidéo, sketch, …</li>
<li><strong>Jeu</strong>	Temps de jeu</li>
<li><strong>Leçon d’objet</strong>	Une histoire, un fait, un défi, un tour de magie, une vidéo,… avec lequel on tire un parallèle sur le thème de la leçon </li>
<li><strong>Prière</strong>	Temps de prière</li>
<li><strong>Réflexion</strong>	Temps ou l’enfant peut réfléchir sur ce qui à été apporter et se l’approprier (ne pas oublier le temps avec parents…).</li>
<li><strong>Autre</strong>	Tout ce qui ne va pas dans les autres rubriques</li>
</ul>');
  t('Estime le temps que va durer cette activité.');
  t('Explique au moniteur comment les enfants qui viennent à cette leçon peuvent être accueillis.');
  t('Expliquer quel est l’objectif de la leçon.
Le moniteur qui lira cette partie doit comprendre ce qu’il devra transmettre aux enfants.
');
  t('Indique ici le canevas de la leçon.');
  t('Indique ici à quelle partie de la leçon cette activité sera rattachée
<ul><li><strong>Accueil</strong>	Temps ou l’enfant est accueilli et se sent le bienvenu. C’est un temps important qui permet à chacun d’être a l’aise, quelque soit les évènements qui on pu se passer précédemment. Ex : décoration particulière, gobelet de sirop, attention particulière,… selon le thème abordé !</li>
<li><strong>Bienvenue</strong>	Rassembler les enfants dans ce qui va être vécu dans l’heure qui suit, « annoncer la couleur ! » Tous n’ont pas le même vécu (l’arrivée au culte n’est pas toujours évidente..). C’est donc important de les rassembler et d’avoir qqch de motivant avant de commencer…</li>
<li><strong>Intro au thème</strong>	Introduire le thème qui sera proposé</li>
<li><strong>Sujet de la leçon</strong>	C’est la partie principale. On développe ici le thème, on l’explique, le lit, le raconte,…</li>
<li><strong>Engagement personnel</strong>	Temps ou l’enfants peut prendre une décision…</li>
<li><strong>Prière</strong>	Temps de prière, expliquer comment il peut-être vécu… Soyez créatif !</li>
<li><strong>Conclusion</strong>	Finalisation du thème (rappel, résumé, envois,…)</li>
<li><strong>Implication des parents</strong>	Proposer qqch que l’enfant peut prendre avec à la maison pour en parler avec ses parents (questions, histoire, qqch de ludique, un défi,…) Qqch qui implique les parents dans la marche de la foi de leurs enfants…</li>
<li><strong>Détente</strong>	Temps où l’on s’amuse, où l’on crée des liens…</li>
</ul>');
  t('Indique la période dans laquelle se passe l’histoire. ');
  t('Indique le numéro de la semaine de la leçon, selon le lectionnaire. ');
  t('Indique le numéro de l’année de la leçon, selon le lectionnaire.');
  t('Indique le verset clé de la leçon, le verset à retenir !
Il peut-être dans un autre passage que celui proposé ci-dessus dans la rubrique « texte biblique ».
');
  t('Indique le(s) différent(s) lieu(x) où se passe l’histoire.');
  t('Indique le(s) passage(s) biblique(s) qui va(vont)  être thématiser dans la leçon.');
  t('Indique les différents personnages principaux qui interviennent dans l’histoire.');
  t('Lieux');
  t('Localisation');
  t('Media');
  t('Numéro d\'année');
  t('Numéro de semaine');
  t('Objectif');
  t('Personnages');
  t('Pour cette séance, sous quelle forme proposes-tu de vivre un temps de prière ?');
  t('Prière');
  t('Périodes');
  t('Selon le lectionnaire « les explorateurs ».');
  t('Si besoin, indique un(des) média(s) que tu proposes pour cette activité (image, pdf, audio, vidéo,…).');
  t('Si besoin, indique un(des) média(s) que tu proposes pour l’ensemble de la leçon (image, pdf, audio, vidéo,…).');
  t('Textes bibliques');
  t('Titre');
  t('Type');
  t('Versets de la semaine');
  t('Versets “clé”');
  t('Étape');

  return $field_instances;
}
