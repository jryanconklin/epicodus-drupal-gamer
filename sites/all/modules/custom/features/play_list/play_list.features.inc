<?php
/**
 * @file
 * play_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function play_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function play_list_node_info() {
  $items = array(
    'game_to_play' => array(
      'name' => t('Game to Play'),
      'base' => 'node_content',
      'description' => t('A List of Games I should Play!'),
      'has_title' => '1',
      'title_label' => t('Game'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
