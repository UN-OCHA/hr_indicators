<?php
/**
 * @file
 * humanitarianresponse_indicators.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_indicators_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_indicator_registry';
  $strongarm->value = 0;
  $export['comment_anonymous_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_indicator_registry';
  $strongarm->value = 0;
  $export['comment_default_mode_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_indicator_registry';
  $strongarm->value = '10';
  $export['comment_default_per_page_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_indicator_registry';
  $strongarm->value = 0;
  $export['comment_form_location_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_indicator_registry';
  $strongarm->value = '1';
  $export['comment_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_indicator_registry';
  $strongarm->value = '0';
  $export['comment_preview_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_indicator_registry';
  $strongarm->value = 0;
  $export['comment_subject_field_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_indicator_registry';
  $strongarm->value = '0';
  $export['language_content_type_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_indicator_registry';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_indicator_registry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_indicator_registry';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_indicator_registry';
  $strongarm->value = '1';
  $export['node_preview_indicator_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_indicator_registry';
  $strongarm->value = 1;
  $export['node_submitted_indicator_registry'] = $strongarm;

  return $export;
}
