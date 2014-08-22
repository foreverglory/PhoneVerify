<?php

function phone_verify_settings($form, &$form_state) {
  $form['phone_verify_number_pattern'] = array(
    '#title' => '手机号码验证',
    '#type' => 'textfield',
    '#default_value' => variable_get('phone_verify_number_pattern', '/^1[3|4|5|6|7|8]\d{9}$/'),
    '#description' => '手机号码验证，正则表达式'
  );
  $form['phone_verify_expire'] = array(
    '#title' => '手机验证消息过期',
    '#type' => 'textfield',
    '#default_value' => variable_get('phone_verify_expire', 60 * 10),
    '#description' => '手机验证消息过期，单位秒'
  );
  $form['phone_verify_rate'] = array(
    '#title' => '手机消息发送频率',
    '#type' => 'textfield',
    '#default_value' => variable_get('phone_verify_rate', 60),
    '#description' => '手机消息发送频率，单位秒'
  );
  $form['phone_verify_message'] = array(
    '#title' => '手机消息发送内容',
    '#type' => 'textfield',
    '#default_value' => variable_get('phone_verify_message', '手机注册验证码：[captcha]'),
    '#description' => '手机消息发送内容，[captcha] 验证码'
  );
  return system_settings_form($form);
}
