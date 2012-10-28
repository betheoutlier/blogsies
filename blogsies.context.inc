<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function blogsies_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = 'This is the main blog context for Blogsies';
  $context->tag = 'Blogsies';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_post' => 'blog_post',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'blog' => 'blog',
        'blog/*' => 'blog/*',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'blog_categories' => 'blog_categories',
        'blog_tags' => 'blog_tags',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blogsies');
  t('This is the main blog context for Blogsies');
  $export['blog'] = $context;

  return $export;
}
