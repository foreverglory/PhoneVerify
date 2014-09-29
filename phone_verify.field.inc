<?php

/**
 * Implements hook_field_info().
 */
function phone_verify_field_info() {
  return array(
    'phone_verfiy' => array(
      'label' => t('Phone verify'),
      'description' => t('Phone verify field.'),
      'settings' => array(
        'key' => 0,
      ),
      'instance_settings' => array(
        'key' => 0,
      ),
      'default_widget' => 'phone_verify_widget',
      'default_formatter' => 'phone_verify_formatter',
    ),
  );
}

/**
 * Implements hook_field_settings_form().
 */
function phone_verify_field_settings_form($field, $instance, $has_data) {
  $defaults = field_info_field_settings($field['type']);
  $settings = array_merge($defaults, $field['settings']);
  $form = array();
  $form['key'] = array(
    '#type' => 'textfield',
    '#title' => t('Enable'),
    '#default_value' => $settings['key'],
  );
  return $form;
}

/**
 * Implements hook_field_widget_info().
 */
function phone_verify_field_widget_info() {
  return array(
    'phone_verify_widget' => array(
      'label' => t('Phone verify widget'),
      'field types' => array('phone_verfiy'),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_CUSTOM,
        'default value' => FIELD_BEHAVIOR_DEFAULT,
      ),
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'weight' => 2,
    )
  );
}

/**
 * Implements hook_field_widget_settings_form().
 */
function phone_verify_field_widget_settings_form($field, $instance) {
  $settings = &$instance['widget']['settings'];
  $form = array();
  $form['progress_indicator'] = array(
    '#type' => 'textfield',
    '#title' => t('key'),
    '#default_value' => $settings['progress_indicator'],
  );
  return $form;
}

/**
 * Implements hook_field_formatter_info().
 */
function phone_verify_field_formatter_info() {
  return array(
    'phone_verify_formatter' => array(
      'label' => t('Phone verfiy formatter'),
      'field types' => array('phone_verfiy'),
    ),
  );
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function phone_verify_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $element = array();
  return $element;
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function phone_verify_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  return '';
}

/**
 * Implements hook_field_formatter_view().
 */
function phone_verify_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  switch ($display['type']) {
    case 'phone_verify_formatter':
      break;
  }
  return $element;
}
