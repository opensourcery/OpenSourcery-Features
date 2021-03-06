<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _os_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Details'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
