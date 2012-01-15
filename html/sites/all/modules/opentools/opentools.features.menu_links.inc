<?php
/**
 * @file
 * opentools.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function opentools_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:forum
  $menu_links['navigation:forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forums',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Forums');


  return $menu_links;
}
