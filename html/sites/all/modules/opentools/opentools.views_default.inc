<?php
/**
 * @file
 * opentools.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opentools_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'event_fields';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Event Fields';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Details';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Date and Time */
  $handler->display->display_options['fields']['field_datetime']['id'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['fields']['field_datetime']['field'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_datetime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_datetime']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_datetime']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_datetime']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_datetime']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_text_location']['id'] = 'field_text_location';
  $handler->display->display_options['fields']['field_text_location']['table'] = 'field_data_field_text_location';
  $handler->display->display_options['fields']['field_text_location']['field'] = 'field_text_location';
  $handler->display->display_options['fields']['field_text_location']['label'] = '';
  $handler->display->display_options['fields']['field_text_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_text_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_text_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_text_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_text_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_text_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_text_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_text_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_text_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_text_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_text_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_text_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_text_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_text_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_text_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_text_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_text_location']['field_api_classes'] = 0;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'events' => 'events',
  );

  /* Display: Date and Time */
  $handler = $view->new_display('block', 'Date and Time', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Date and Time';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Date and Time */
  $handler->display->display_options['fields']['field_datetime']['id'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['fields']['field_datetime']['field'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_datetime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_datetime']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_datetime']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_datetime']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_datetime']['field_api_classes'] = 0;

  /* Display: Event Image */
  $handler = $view->new_display('block', 'Event Image', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;

  /* Display: Details */
  $handler = $view->new_display('block', 'Details', 'block_2');
  $export['event_fields'] = $view;

  $view = new view;
  $view->name = 'event_forum_activity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Forum Activity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wiki-Forum Wiki Node Blocks';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Forums (taxonomy_forums) */
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['id'] = 'taxonomy_forums_tid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['table'] = 'field_data_taxonomy_forums';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['field'] = 'taxonomy_forums_tid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['required'] = 1;
  /* Relationship: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['required'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
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
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return menu_get_object(\'taxonomy_term\', 2)->field_events_to_forum[\'und\'][0][\'tid\'];';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
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
    'forum' => 'forum',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_topic_type_value']['id'] = 'field_topic_type_value';
  $handler->display->display_options['filters']['field_topic_type_value']['table'] = 'field_data_field_topic_type';
  $handler->display->display_options['filters']['field_topic_type_value']['field'] = 'field_topic_type_value';
  $handler->display->display_options['filters']['field_topic_type_value']['operator'] = 'in';
  $handler->display->display_options['filters']['field_topic_type_value']['value'] = array(
    'general' => 'general',
  );

  /* Display: Tool Forum Activity - Ideas  */
  $handler = $view->new_display('block', 'Tool Forum Activity - Ideas ', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Information and/or Ideas for this Tool';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    18 => '18',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';

  /* Display: Tool Forum Activity - Questions */
  $handler = $view->new_display('block', 'Tool Forum Activity - Questions', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Questions for this Tool';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    0 => '19',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';

  /* Display: Tool Forum Activity - Research */
  $handler = $view->new_display('block', 'Tool Forum Activity - Research', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Field Trials & Feedback on this Tool';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    20 => '20',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';

  /* Display: Tool Forum Activity - How To Build */
  $handler = $view->new_display('block', 'Tool Forum Activity - How To Build', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'How to build this Tool';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    17 => '17',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';

  /* Display: Tool Forum Activity - How To Use */
  $handler = $view->new_display('block', 'Tool Forum Activity - How To Use', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'How to use this Tool';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    30 => '30',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';

  /* Display: Event Forum Activity - Event Groups  */
  $handler = $view->new_display('block', 'Event Forum Activity - Event Groups ', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event Groups';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    32 => '32',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';
  $export['event_forum_activity'] = $view;

  $view = new view;
  $view->name = 'events_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Events Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_image' => 'field_image',
    'field_datetime' => 'field_datetime',
    'field_event_season' => 'field_event_season',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datetime' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_season' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Field: Taxonomy term: Date and Time */
  $handler->display->display_options['fields']['field_datetime']['id'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['fields']['field_datetime']['field'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_datetime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_datetime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_datetime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_datetime']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_datetime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_datetime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_datetime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_datetime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_datetime']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_datetime']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_datetime']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_datetime']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_datetime']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_datetime']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Season */
  $handler->display->display_options['fields']['field_event_season']['id'] = 'field_event_season';
  $handler->display->display_options['fields']['field_event_season']['table'] = 'field_data_field_event_season';
  $handler->display->display_options['fields']['field_event_season']['field'] = 'field_event_season';
  $handler->display->display_options['fields']['field_event_season']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_season']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_season']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_season']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_season']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_season']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_season']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_season']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_season']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_season']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_season']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_season']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_season']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_season']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_season']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_season']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_season']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_season']['field_api_classes'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'events' => 'events',
  );

  /* Display: Events Page */
  $handler = $view->new_display('page', 'Events Page', 'page');
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '-5';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['events_page'] = $view;

  $view = new view;
  $view->name = 'events_wiki';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events Wiki';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<a href=\'/node/!1/revisions\'><img width=20 src="/sites/default/files/styles/icon/public/alarm-clock_0.png">Revisions</a>
<a href=\'/node/!1/edit\'><img width=20 src="/sites/default/files/styles/icon/public/pencil_0.png">Edit This Wiki</a>
';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return menu_get_object(\'taxonomy_term\', 2)->field_event_to_wiki[\'und\'][0][\'target_id\'];';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'wiki' => 'wiki',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['events_wiki'] = $view;

  $view = new view;
  $view->name = 'forum_topic_type_actions';
  $view->description = '';
  $view->tag = 'opentools';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Action Links - Create Forum Topic Types';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['group_rendered'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Forum Section (field_forum_section) */
  $handler->display->display_options['relationships']['field_forum_section_tid']['id'] = 'field_forum_section_tid';
  $handler->display->display_options['relationships']['field_forum_section_tid']['table'] = 'field_data_field_forum_section';
  $handler->display->display_options['relationships']['field_forum_section_tid']['field'] = 'field_forum_section_tid';
  $handler->display->display_options['relationships']['field_forum_section_tid']['required'] = 1;
  /* Field: Taxonomy term: Forum */
  $handler->display->display_options['fields']['field_tool_to_forum']['id'] = 'field_tool_to_forum';
  $handler->display->display_options['fields']['field_tool_to_forum']['table'] = 'field_data_field_tool_to_forum';
  $handler->display->display_options['fields']['field_tool_to_forum']['field'] = 'field_tool_to_forum';
  $handler->display->display_options['fields']['field_tool_to_forum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tool_to_forum']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tool_to_forum']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tool_to_forum']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tool_to_forum']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Action Text */
  $handler->display->display_options['fields']['field_action_text']['id'] = 'field_action_text';
  $handler->display->display_options['fields']['field_action_text']['table'] = 'field_data_field_action_text';
  $handler->display->display_options['fields']['field_action_text']['field'] = 'field_action_text';
  $handler->display->display_options['fields']['field_action_text']['label'] = '';
  $handler->display->display_options['fields']['field_action_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_action_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_action_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_action_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_action_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_action_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_action_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_action_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_action_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_action_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_action_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_action_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_action_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_action_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_text']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_action_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_action_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_action_text']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_action_text']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$context = opentools_get_context();
$tid = $context[\'forum\'];
print \'<a href="/node/add/forum?edit[field_forum_topic_type][und]=\' . $row->tid . \'&edit[taxonomy_forums][und]=\' . $tid . \'">\' . taxonomy_term_load($row->field_action_text)->field_action_text[\'und\'][0][\'value\'] . \'</a>\'; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_forum_section_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '$context = opentools_get_context();
if(is_numeric($context[\'forum\'])) {
  $ancestry = opentools_get_forum_context_ancestry($context["forum"]);
  return implode(\',\', $ancestry);
}
elseif (arg(0) == "forum" && is_numeric(arg(1))) {
  $ancestry = opentools_get_forum_context_ancestry(arg(1));
  $ancestry[] = arg(1);
  return implode(\',\', $ancestry);
}

';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'forum_topic_types' => 'forum_topic_types',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['forum_topic_type_actions'] = $view;

  $view = new view;
  $view->name = 'recent_event_forum_comments';
  $view->description = 'Contains a block and a page to list recent comments; the block will automatically link to the page, which displays the comment body as well as a link to the node.';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Recent Event Forum comments';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent comments';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Relationship: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['required'] = 0;
  /* Relationship: Content: Forums (taxonomy_forums) */
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['id'] = 'taxonomy_forums_tid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['table'] = 'field_data_taxonomy_forums';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['field'] = 'taxonomy_forums_tid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['required'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'Topic';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = 'Comment';
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['external'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['subject']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['html'] = 0;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['subject']['hide_empty'] = 0;
  $handler->display->display_options['fields']['subject']['empty_zero'] = 0;
  $handler->display->display_options['fields']['subject']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['subject']['link_to_comment'] = 1;
  $handler->display->display_options['fields']['subject']['link_to_node'] = 0;
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'comment';
  $handler->display->display_options['fields']['timestamp']['field'] = 'changed';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  /* Sort criterion: Comment: Updated date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'comment';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'changed';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return menu_get_object(\'taxonomy_term\', 2)->field_events_to_forum[\'und\'][0][\'tid\'];';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['recent_event_forum_comments'] = $view;

  $view = new view;
  $view->name = 'recent_tool_forum_comments';
  $view->description = 'Contains a block and a page to list recent comments; the block will automatically link to the page, which displays the comment body as well as a link to the node.';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Recent Tool Forum comments';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent comments';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Relationship: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['required'] = 0;
  /* Relationship: Content: Forums (taxonomy_forums) */
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['id'] = 'taxonomy_forums_tid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['table'] = 'field_data_taxonomy_forums';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['field'] = 'taxonomy_forums_tid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['required'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'Topic';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = 'Comment';
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['external'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['subject']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['html'] = 0;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['subject']['hide_empty'] = 0;
  $handler->display->display_options['fields']['subject']['empty_zero'] = 0;
  $handler->display->display_options['fields']['subject']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['subject']['link_to_comment'] = 1;
  $handler->display->display_options['fields']['subject']['link_to_node'] = 0;
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'comment';
  $handler->display->display_options['fields']['timestamp']['field'] = 'changed';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  /* Sort criterion: Comment: Updated date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'comment';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'changed';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return menu_get_object(\'taxonomy_term\', 2)->field_tool_to_forum[\'und\'][0][\'tid\'];';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'Reply to';
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'comment';
  $handler->display->display_options['fields']['timestamp']['field'] = 'changed';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['link_to_comment'] = 1;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment']['label'] = '';
  $handler->display->display_options['path'] = 'comments/recent';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['recent_tool_forum_comments'] = $view;

  $view = new view;
  $view->name = 'tool_fields';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Tool Fields';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Tool type (field_tool_type) */
  $handler->display->display_options['relationships']['field_tool_type_tid']['id'] = 'field_tool_type_tid';
  $handler->display->display_options['relationships']['field_tool_type_tid']['table'] = 'field_data_field_tool_type';
  $handler->display->display_options['relationships']['field_tool_type_tid']['field'] = 'field_tool_type_tid';
  $handler->display->display_options['relationships']['field_tool_type_tid']['required'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_tool_type_tid';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_1']['field_api_classes'] = 0;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tools' => 'tools',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['tool_fields'] = $view;

  $view = new view;
  $view->name = 'tools_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Tools Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tools';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Tool Name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Taxonomy term: Tool type */
  $handler->display->display_options['fields']['field_tool_type']['id'] = 'field_tool_type';
  $handler->display->display_options['fields']['field_tool_type']['table'] = 'field_data_field_tool_type';
  $handler->display->display_options['fields']['field_tool_type']['field'] = 'field_tool_type';
  $handler->display->display_options['fields']['field_tool_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tool_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tool_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tool_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tool_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tool_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tool_type']['field_api_classes'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tools' => 'tools',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tools';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tools';
  $handler->display->display_options['menu']['weight'] = '-5';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['tools_page'] = $view;

  $view = new view;
  $view->name = 'tools_tool_forum_activity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tool Forum Activity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wiki-Forum Wiki Node Blocks';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Forums (taxonomy_forums) */
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['id'] = 'taxonomy_forums_tid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['table'] = 'field_data_taxonomy_forums';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['field'] = 'taxonomy_forums_tid';
  $handler->display->display_options['relationships']['taxonomy_forums_tid']['required'] = 1;
  /* Relationship: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['relationships']['field_forum_topic_type_tid']['required'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'icon',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
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
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'taxonomy_forums_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return menu_get_object(\'taxonomy_term\', 2)->field_tool_to_forum[\'und\'][0][\'tid\'];';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
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
    'forum' => 'forum',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_topic_type_value']['id'] = 'field_topic_type_value';
  $handler->display->display_options['filters']['field_topic_type_value']['table'] = 'field_data_field_topic_type';
  $handler->display->display_options['filters']['field_topic_type_value']['field'] = 'field_topic_type_value';
  $handler->display->display_options['filters']['field_topic_type_value']['operator'] = 'in';
  $handler->display->display_options['filters']['field_topic_type_value']['value'] = array(
    'general' => 'general',
  );

  /* Display: Tool Forum Activity - Ideas  */
  $handler = $view->new_display('block', 'Tool Forum Activity - Ideas ', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Information and/or Ideas for this Tool';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    18 => '18',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';

  /* Display: Tool Forum Activity - Questions */
  $handler = $view->new_display('block', 'Tool Forum Activity - Questions', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Questions for this Tool';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    0 => '19',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';

  /* Display: Tool Forum Activity - Research */
  $handler = $view->new_display('block', 'Tool Forum Activity - Research', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Field Trials & Feedback on this Tool';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    20 => '20',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';

  /* Display: Tool Forum Activity - How To Build */
  $handler = $view->new_display('block', 'Tool Forum Activity - How To Build', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'How to build this Tool';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    17 => '17',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';

  /* Display: Tool Forum Activity - How To Use */
  $handler = $view->new_display('block', 'Tool Forum Activity - How To Use', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'How to use this Tool';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Topic Type (field_forum_topic_type) */
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['id'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['table'] = 'field_data_field_forum_topic_type';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['field'] = 'field_forum_topic_type_tid';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['value'] = array(
    30 => '30',
  );
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_forum_topic_type_tid']['vocabulary'] = 'forum_topic_types';
  $export['tools_tool_forum_activity'] = $view;

  $view = new view;
  $view->name = 'wiki_files_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Wiki File Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wiki File Images';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['uri']['alter']['text'] = '<a href="[uri]" rel="lightbox"><img src=[uri]></a>';
  $handler->display->display_options['fields']['uri']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uri']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uri']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uri']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uri']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uri']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uri']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uri']['link_to_file'] = 0;
  $handler->display->display_options['fields']['uri']['file_download_path'] = 0;
  /* Contextual filter: File: File ID */
  $handler->display->display_options['arguments']['fid']['id'] = 'fid';
  $handler->display->display_options['arguments']['fid']['table'] = 'file_managed';
  $handler->display->display_options['arguments']['fid']['field'] = 'fid';
  $handler->display->display_options['arguments']['fid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['fid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['fid']['default_argument_options']['code'] = '$node = node_load(arg(1));
foreach($node->field_images[\'und\'] as $file) {
  $fids .= $file->fid . ",";
}
return $fids;';
  $handler->display->display_options['arguments']['fid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['fid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['fid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['fid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['fid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['fid']['not'] = 0;

  /* Display: wikifileimagews */
  $handler = $view->new_display('block', 'wikifileimagews', 'wiki_file_images');
  $export['wiki_files_images'] = $view;

  $view = new view;
  $view->name = 'wiki_node_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Wiki Node Images';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'lightbox2__lightbox__thumbnail__large';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_images']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$context = opentools_get_context();
return $context[\'wiki\'];';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'wiki' => 'wiki',
  );

  /* Display: Wiki Node Images */
  $handler = $view->new_display('block', 'Wiki Node Images', 'block');
  $export['wiki_node_images'] = $view;

  return $export;
}
