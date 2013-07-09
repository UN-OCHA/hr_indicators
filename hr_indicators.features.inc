<?php
/**
 * @file
 * hr_indicators.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_indicators_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}


/**
 * Implements hook_node_info().
 */
function hr_indicators_node_info() {
  $items = array(
    'indicator_registry' => array(
      'name' => t('Indicator'),
      'base' => 'node_content',
      'description' => t('Indicators Registry '),
      'has_title' => '1',
      'title_label' => t('Indicator Title'),
      'help' => '',
    ),
  );
  return $items;
}
