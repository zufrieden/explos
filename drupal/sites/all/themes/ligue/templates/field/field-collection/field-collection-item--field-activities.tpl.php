<?php

/**
 * @file
 * Default theme implementation for field collection items.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) field collection item label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-field-collection-item
 *   - field-collection-item-{field_name}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

?>
<div class="panel-heading" role="tab" id="heading-<?php print $id; ?>">
  <h4 class="panel-title">
    <a role="button" data-toggle="collapse" href="#collapse-<?php print $id; ?>" aria-expanded="false" aria-controls="collapse-index">
      <?php print render($content['field_title']); ?>
    </a>
  </h4>
  <?php print render($content['field_duration']); ?>
  <?php if ($content['field_activity_type']['#items'][0]['tid'] != 16): ?>
    <?php print render($content['field_activity_type']); ?>
  <?php endif; ?>
</div>
<div class="panel-collapse collapse" id="collapse-<?php print $id; ?>" role="tabpanel" aria-labelledby="heading-<?php print $id; ?>">
  <div class="panel-body">
    <?php print render($content['field_lesson_stage']); ?>
    <div class="spacer spacer-xs"></div>
    <?php print render($content); ?>
  </div>
</div>
