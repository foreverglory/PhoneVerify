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
      'default_formatter' => 'phone_verify_default',
    ),
  );
}

/**
 * Implements hook_field_widget_info().
 */
function phone_verify_field_widget_info() {
  return array(
    'phone_verify' => array(
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
 * Implements hook_field_formatter_info().
 */
function phone_verify_field_formatter_info() {
  return array(
    'file_default' => array(
      'label' => t('Phone verfiy formatter'),
      'field types' => array('phone_verfiy'),
    ),
  );
}
