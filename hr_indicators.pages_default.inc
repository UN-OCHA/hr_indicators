<?php
/**
 * @file
 * hr_indicators.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function hr_indicators_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hr_indicators';
  $page->task = 'page';
  $page->admin_title = 'Indicators';
  $page->admin_description = '';
  $page->path = 'node/%node/indicators';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
      'keyword' => 'node',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hr_indicators_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hr_indicators';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0ecab9a0-d86e-46a9-a32f-9f1bc3420dad';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c443a84a-2297-4eba-8972-4dad3e062950';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_indicators-table';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c443a84a-2297-4eba-8972-4dad3e062950';
    $display->content['new-c443a84a-2297-4eba-8972-4dad3e062950'] = $pane;
    $display->panels['contentmain'][0] = 'new-c443a84a-2297-4eba-8972-4dad3e062950';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c443a84a-2297-4eba-8972-4dad3e062950';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hr_indicators'] = $page;

  return $pages;

}
