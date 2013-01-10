<?php
/**
 * @file
 * stanford_events_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_events_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'stanford_events_calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Events Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Calendar of Events';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime']['id'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_stanford_event_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date and Time -  start date (field_stanford_event_datetime) */
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['id'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['field'] = 'field_stanford_event_datetime_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_event' => 'stanford_event',
  );

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value' => 'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value',
  );
  $handler->display->display_options['path'] = 'stanford-events/calendar';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value' => 'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-stanford-event-datetime/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value' => 'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-stanford-event-datetime/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime']['id'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_stanford_event_datetime']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value' => 'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-stanford-event-datetime/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value' => 'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value' => 'field_data_field_stanford_event_datetime.field_stanford_event_datetime_value',
  );
  $export['stanford_events_calendar'] = $view;

  $view = new view;
  $view->name = 'stanford_events_views';
  $view->description = 'List-style page and sidebar block';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Events List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
[field_stanford_event_datetime_2] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['id'] = 'field_stanford_event_datetime_2';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['text'] = '[title]
[field_stanford_event_datetime_2]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['field_api_classes'] = 0;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime']['id'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['text'] = '<div class="clearfix">[field_stanford_event_datetime]</div>';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field_api_classes'] = 0;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['id'] = 'field_stanford_event_datetime_1';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['text'] = '[field_stanford_event_datetime]
[field_stanford_event_datetime_1]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['settings'] = array(
    'format_type' => 'day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date and Time -  start date (field_stanford_event_datetime) */
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['id'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['field'] = 'field_stanford_event_datetime_value';
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
    'stanford_event' => 'stanford_event',
  );
  /* Filter criterion: Content: Date and Time -  start date (field_stanford_event_datetime) */
  $handler->display->display_options['filters']['field_stanford_event_datetime_value']['id'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['filters']['field_stanford_event_datetime_value']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['filters']['field_stanford_event_datetime_value']['field'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['filters']['field_stanford_event_datetime_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_stanford_event_datetime_value']['default_date'] = 'now';

  /* Display: Upcoming Events List Page */
  $handler = $view->new_display('page', 'Upcoming Events List Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_stanford_event_image']['id'] = 'field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['table'] = 'field_data_field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['field'] = 'field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stanford_event_image']['settings'] = array(
    'image_style' => 'sm-square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_stanford_event_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
[field_stanford_event_datetime_2] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['id'] = 'field_stanford_event_datetime_2';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['text'] = '[title]
[field_stanford_event_datetime_2]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['field_api_classes'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_stanford_event_location']['id'] = 'field_stanford_event_location';
  $handler->display->display_options['fields']['field_stanford_event_location']['table'] = 'field_data_field_stanford_event_location';
  $handler->display->display_options['fields']['field_stanford_event_location']['field'] = 'field_stanford_event_location';
  $handler->display->display_options['fields']['field_stanford_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_location']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
<div>
<div class="event-image">[field_stanford_event_image]</div>
</div>
<div>
<div class="event-title">[title]</div>
<div class="descriptor">
<div class="event-date-long">[field_stanford_event_datetime_2]</div>
<div class="event-location">[field_stanford_event_location]</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['path'] = 'stanford-events';

  /* Display: Upcoming Block */
  $handler = $view->new_display('block', 'Upcoming Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
[field_stanford_event_datetime_2] ';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['id'] = 'field_stanford_event_datetime_2';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['text'] = '[title]
[field_stanford_event_datetime_2]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['field_api_classes'] = 0;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime']['id'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['text'] = '<div class="clearfix">[field_stanford_event_datetime]</div>';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['settings'] = array(
    'format_type' => 'stanford_month_short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field_api_classes'] = 0;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['id'] = 'field_stanford_event_datetime_1';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['text'] = '[field_stanford_event_datetime]
[field_stanford_event_datetime_1]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['settings'] = array(
    'format_type' => 'stanford_day_number',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_stanford_event_datetime_1']['field_api_classes'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_stanford_event_location']['id'] = 'field_stanford_event_location';
  $handler->display->display_options['fields']['field_stanford_event_location']['table'] = 'field_data_field_stanford_event_location';
  $handler->display->display_options['fields']['field_stanford_event_location']['field'] = 'field_stanford_event_location';
  $handler->display->display_options['fields']['field_stanford_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_stanford_event_location']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stanford_event_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stanford_event_location']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
<div class="date-stacked">
<div class="date-month">[field_stanford_event_datetime]</div>
<div class="date-day">[field_stanford_event_datetime_1]</div>
</div>
<div>
<div class="event-title">[title]</div>
<div class="descriptor">
<div class="event-date-long">[field_stanford_event_datetime_2]</div>
<div class="event-location">[field_stanford_event_location]</div>
</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_stanford_event_datetime) */
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['id'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['field'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['block_description'] = 'Upcoming Events - Date Stacked';

  /* Display: Upcoming Feed */
  $handler = $view->new_display('feed', 'Upcoming Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'stanford-events/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['stanford_events_views'] = $view;

  return $export;
}
