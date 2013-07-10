<?php
/**
 * @file
 * hr_indicators.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function hr_indicators_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_indicators';
  $feeds_importer->config = array(
    'name' => 'CSV Indicators',
    'description' => 'Import indicators from a CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Cluster',
            'target' => 'field_cluster',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Code',
            'target' => 'field_ind_code',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Domain',
            'target' => 'field_ind_domain',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'Title',
            'target' => 'title_field:et:en',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Description',
            'target' => 'body:et:en',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Unit',
            'target' => 'field_ind_unit',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Unit Description',
            'target' => 'field_ind_unit_desc',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Numerator',
            'target' => 'field_ind_numerator',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Denominator',
            'target' => 'field_ind_denominator',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Disaggregation',
            'target' => 'field_ind_disaggregation',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Key Indicator',
            'target' => 'field_ind_key',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Types',
            'target' => 'field_ind_types',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          13 => array(
            'source' => 'Response Monitoring',
            'target' => 'field_ind_response',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Standards',
            'target' => 'field_ind_standards',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Threshold',
            'target' => 'field_ind_threshold',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Guidance on Phases',
            'target' => 'field_ind_guidance_phases',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'General guidance',
            'target' => 'field_ind_general_guidance',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Guidance for pre-crisis',
            'target' => 'field_ind_guidance_baseline',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Comments',
            'target' => 'field_ind_comments',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Data Sources',
            'target' => 'field_ind_data_sources',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Sector cross-tagging',
            'target' => 'field_clusters',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'indicator',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_indicators'] = $feeds_importer;

  return $export;
}
