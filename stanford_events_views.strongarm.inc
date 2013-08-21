<?php
/**
 * @file
 * stanford_events_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_events_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_stanford_date_year_time';
  $strongarm->value = 'F j, Y - g:ia';
  $export['date_format_stanford_date_year_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_stanford_day_number';
  $strongarm->value = 'd';
  $export['date_format_stanford_day_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_stanford_month_short';
  $strongarm->value = 'M';
  $export['date_format_stanford_month_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_stanford_short_month_';
  $strongarm->value = 'M';
  $export['date_format_stanford_short_month_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_stanford_time';
  $strongarm->value = 'g:ia';
  $export['date_format_stanford_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_stanford_time_12hour';
  $strongarm->value = 'g:i a';
  $export['date_format_stanford_time_12hour'] = $strongarm;

  return $export;
}
