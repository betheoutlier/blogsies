<?php

/**
 * Implementation of hook_field_group_default_field_groups().
 */
function blogsies_field_group_default_field_groups() {
  $field_groups = array();

  // Exported field_group: 'node-blog_post-form-group_blogsies_tags_categories'
  $field_groups['node-blog_post-form-group_blogsies_tags_categories'] = array(
    'group_name' => 'group_blogsies_tags_categories',
    'entity_type' => 'node',
    'bundle' => 'blog_post',
    'mode' => 'form',
    'parent_name' => '',
    'label' => 'Tagging and Categorization',
    'weight' => '3',
    'children' => array(
      '0' => 'group_blogsies_thetags',
      '1' => 'group_blogsies_thecategory',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => NULL,
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  // Exported field_group: 'node-blog_post-form-group_blogsies_thecategory'
  $field_groups['node-blog_post-form-group_blogsies_thecategory'] = array(
    'group_name' => 'group_blogsies_thecategory',
    'entity_type' => 'node',
    'bundle' => 'blog_post',
    'mode' => 'form',
    'parent_name' => 'group_blogsies_tags_categories',
    'label' => 'Category',
    'weight' => '3',
    'children' => array(
      '0' => 'field_blogsies_blog_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Category',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );

  // Exported field_group: 'node-blog_post-form-group_blogsies_thetags'
  $field_groups['node-blog_post-form-group_blogsies_thetags'] = array(
    'group_name' => 'group_blogsies_thetags',
    'entity_type' => 'node',
    'bundle' => 'blog_post',
    'mode' => 'form',
    'parent_name' => 'group_blogsies_tags_categories',
    'label' => 'Tags',
    'weight' => '4',
    'children' => array(
      '0' => 'field_blogsies_blog_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );

  return $field_groups;
}
