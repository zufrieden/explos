<?php
/**
 * A handler to provide proper display for dates.
 *
 * @ingroup views_field_handlers
 */
class bible__field_bible_views_handler_field extends views_handler_field_field {
  function option_definition() {
    $options = parent::option_definition();

    //$options['book_display'] = array('default' => 'fname');
    $options['granularity'] = array('default' => 'verse');

    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['granularity'] = array(
      '#type' => 'select',
      '#title' => t('Granularity'),
      '#options' => array('book' => 'Book', 'chapter' => 'Chapter', 'verse' => 'Verse'),
      '#default_value' => $this->options['granularity'],
    );

    parent::options_form($form, $form_state);
  }

  function render($values) {
    $value = $this->get_value($values);
    //$display = $this->options;
    $granularity = $this->options['book_display'];

    if($value) {
     return 'test'.print_r($display,true).'#'.print_r($value,true); 
    }
  }
}
