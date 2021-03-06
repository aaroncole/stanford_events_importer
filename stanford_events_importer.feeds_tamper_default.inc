<?php

/**
 * Implementation of hook_feeds_tamper_default().
 */
function stanford_events_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'stanford_event_importer-xpathparser_0-html_entity_decode';
  $feeds_tamper->importer = 'stanford_event_importer';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = FALSE;
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['stanford_event_importer-xpathparser_0-html_entity_decode'] = $feeds_tamper;

  return $export;
}
