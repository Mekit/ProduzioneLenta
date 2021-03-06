<?php
/**
 * @file
 * multismtpconfignode.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function multismtpconfignode_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function multismtpconfignode_node_info() {
  $items = array(
    'multismtp_config' => array(
      'name' => t('Smtp Configuration'),
      'base' => 'node_content',
      'description' => t('Configuration node for MultiSmtp module.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
