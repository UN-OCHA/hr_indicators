<?php
/**
 * @file
 * humanitarianresponse_indicators.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_indicators_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'indicator_registry';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Indicator Registry';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Indicator Registry';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'clusters' => 'clusters',
    'docs_type' => 0,
    'map_types' => 0,
    'announcements_types' => 0,
    'highlights' => 0,
    'disaster_types' => 0,
    'document_types' => 0,
    'emergencies' => 0,
    'languages' => 0,
    'locations' => 0,
    'organizations' => 0,
    'themes' => 0,
    'document_categories' => 0,
    'document_regions' => 0,
    'event_categories' => 0,
    'link_categories' => 0,
    'tags' => 0,
  );
  /* Field: Taxonomy term: Prefix */
  $handler->display->display_options['fields']['field_cluster_prefix']['id'] = 'field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix']['table'] = 'field_data_field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix']['field'] = 'field_cluster_prefix';
  $handler->display->display_options['fields']['field_cluster_prefix']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_cluster_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_cluster_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cluster_prefix']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster_prefix']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster_prefix']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster_prefix']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'IR-[field_cluster_prefix][nid]';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Indicator Status */
  $handler->display->display_options['fields']['field_ind_status']['id'] = 'field_ind_status';
  $handler->display->display_options['fields']['field_ind_status']['table'] = 'field_data_field_ind_status';
  $handler->display->display_options['fields']['field_ind_status']['field'] = 'field_ind_status';
  $handler->display->display_options['fields']['field_ind_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_ind_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_status']['field_api_classes'] = 0;
  /* Field: Content: Unit of Measurement */
  $handler->display->display_options['fields']['field_ind_unit']['id'] = 'field_ind_unit';
  $handler->display->display_options['fields']['field_ind_unit']['table'] = 'field_data_field_ind_unit';
  $handler->display->display_options['fields']['field_ind_unit']['field'] = 'field_ind_unit';
  $handler->display->display_options['fields']['field_ind_unit']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_unit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_unit']['field_api_classes'] = 0;
  /* Field: Content: Sectors/Sub-sectors */
  $handler->display->display_options['fields']['field_ind_sector']['id'] = 'field_ind_sector';
  $handler->display->display_options['fields']['field_ind_sector']['table'] = 'field_data_field_ind_sector';
  $handler->display->display_options['fields']['field_ind_sector']['field'] = 'field_ind_sector';
  $handler->display->display_options['fields']['field_ind_sector']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_sector']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_sector']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_ind_sector']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ind_sector']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ind_sector']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ind_sector']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_ind_sector']['field_api_classes'] = 0;
  /* Field: Content: Type of Indicator */
  $handler->display->display_options['fields']['field_ind_type']['id'] = 'field_ind_type';
  $handler->display->display_options['fields']['field_ind_type']['table'] = 'field_data_field_ind_type';
  $handler->display->display_options['fields']['field_ind_type']['field'] = 'field_ind_type';
  $handler->display->display_options['fields']['field_ind_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_ind_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_type']['field_api_classes'] = 0;
  /* Field: Content: Source Authority */
  $handler->display->display_options['fields']['field_ind_app_authority']['id'] = 'field_ind_app_authority';
  $handler->display->display_options['fields']['field_ind_app_authority']['table'] = 'field_data_field_ind_app_authority';
  $handler->display->display_options['fields']['field_ind_app_authority']['field'] = 'field_ind_app_authority';
  $handler->display->display_options['fields']['field_ind_app_authority']['label'] = 'Approving authority';
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_app_authority']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_app_authority']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ind_app_authority']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ind_app_authority']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ind_app_authority']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'indicator_registry' => 'indicator_registry',
  );
  /* Filter criterion: Content: Indicator Status (field_ind_status) */
  $handler->display->display_options['filters']['field_ind_status_value']['id'] = 'field_ind_status_value';
  $handler->display->display_options['filters']['field_ind_status_value']['table'] = 'field_data_field_ind_status';
  $handler->display->display_options['filters']['field_ind_status_value']['field'] = 'field_ind_status_value';
  $handler->display->display_options['filters']['field_ind_status_value']['value'] = array(
    'Approved' => 'Approved',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cluster_prefix' => 'field_cluster_prefix',
    'nid' => 'nid',
    'title' => 'title',
    'field_ind_status' => 'field_ind_status',
    'field_ind_unit' => 'field_ind_unit',
    'field_ind_sector' => 'field_ind_sector',
    'field_ind_type' => 'field_ind_type',
    'field_ind_app_authority' => 'field_ind_app_authority',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cluster_prefix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_unit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_sector' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_app_authority' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Sectors/Sub-sectors (field_ind_sector) */
  $handler->display->display_options['filters']['field_ind_sector_tid']['id'] = 'field_ind_sector_tid';
  $handler->display->display_options['filters']['field_ind_sector_tid']['table'] = 'field_data_field_ind_sector';
  $handler->display->display_options['filters']['field_ind_sector_tid']['field'] = 'field_ind_sector_tid';
  $handler->display->display_options['filters']['field_ind_sector_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ind_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ind_sector_tid']['expose']['operator_id'] = 'field_ind_sector_tid_op';
  $handler->display->display_options['filters']['field_ind_sector_tid']['expose']['label'] = 'Sectors/Sub-sectors';
  $handler->display->display_options['filters']['field_ind_sector_tid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_ind_sector_tid']['expose']['operator'] = 'field_ind_sector_tid_op';
  $handler->display->display_options['filters']['field_ind_sector_tid']['expose']['identifier'] = 'field_ind_sector_tid';
  $handler->display->display_options['filters']['field_ind_sector_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_ind_sector_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_ind_sector_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_ind_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ind_sector_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_ind_sector_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_ind_sector_tid']['error_message'] = 1;
  /* Filter criterion: Content: Indicator Status (field_ind_status) */
  $handler->display->display_options['filters']['field_ind_status_value']['id'] = 'field_ind_status_value';
  $handler->display->display_options['filters']['field_ind_status_value']['table'] = 'field_data_field_ind_status';
  $handler->display->display_options['filters']['field_ind_status_value']['field'] = 'field_ind_status_value';
  $handler->display->display_options['filters']['field_ind_status_value']['value'] = array(
    'Approved' => 'Approved',
  );
  $handler->display->display_options['filters']['field_ind_status_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'indicator_registry' => 'indicator_registry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'indicator-registry';

  /* Display: Indicator Registry Data export */
  $handler = $view->new_display('views_data_export', 'Indicator Registry Data export', 'views_data_export_1');
  $export['indicator_registry'] = $view;

  $view = new view;
  $view->name = 'indicators_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Indicators list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'indicator_registry' => 'indicator_registry',
  );
  /* Filter criterion: Content: Indicator Status (field_ind_status) */
  $handler->display->display_options['filters']['field_ind_status_value']['id'] = 'field_ind_status_value';
  $handler->display->display_options['filters']['field_ind_status_value']['table'] = 'field_data_field_ind_status';
  $handler->display->display_options['filters']['field_ind_status_value']['field'] = 'field_ind_status_value';
  $handler->display->display_options['filters']['field_ind_status_value']['value'] = array(
    'Approved' => 'Approved',
  );

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['indicators_list'] = $view;

  return $export;
}
