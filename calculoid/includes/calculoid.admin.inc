<?php

/**
 * @file
 *  Admin Configuration form.
 */

/**
 * add calculoid calculator form
 */
function calculoid_admin_configuration_form($form, $form_state) {
  $form = [];
  $form['calculoid_fieldset'] = [
    '#type' => 'fieldset',
    '#title' => t('Calculoid Configuration'),
    '#description' => t('Enter the API key for the calculoid.'),
  ];
  $form['calculoid_fieldset']['calculoid_api_key'] = [
    '#type' => 'textfield',
    '#title' => t('API Key'),
    '#default_value' => variable_get('calculoid_api_key', ''),
    '#required' => TRUE,
  ];
  $form['calculoid_fieldset']['calculoid_app_name'] = [
    '#type' => 'textfield',
    '#title' => t('Angular App Name'),
    '#default_value' => variable_get('calculoid_app_name', 'calculoid'),
    '#required' => TRUE,
    '#description' => t('Only change value of these if any changes made on the Calculoid official Embed code.'),
  ];
  $form['calculoid_fieldset']['calculoid_app_controller'] = [
    '#type' => 'textfield',
    '#title' => t('Angular App Controller'),
    '#default_value' => variable_get('calculoid_app_controller', 'CalculoidMainCtrl'),
    '#required' => TRUE,
    '#description' => t('Only change value of these if any changes made on the Calculoid official Embed code.'),
  ];
  $form['calculoid_fieldset']['calculoid_show_title'] = [
    '#type' => 'radios',
    '#title' => t('Show Title'),
    '#default_value' => variable_get('calculoid_show_title', 0),
    '#required' => TRUE,
    '#options' => [0 => 'No', 1 => 'YES'],
  ];
  $form['calculoid_fieldset']['calculoid_show_description'] = array(
    '#type' => 'radios',
    '#title' => t('Show Description'),
    '#default_value' => variable_get('calculoid_show_description', 0),
    '#required' => TRUE,
    '#options' => [0 => 'No', 1 => 'YES'],
  );
  $form['calculoid_fieldset']['calculoid_add_external_scripts'] = array(
    '#type' => 'radios',
    '#title' => t('Add Calculoid Scripts on Load'),
    '#default_value' => variable_get('calculoid_add_external_scripts', 1),
    '#required' => TRUE,
    '#options' => [0 => 'No', 1 => 'YES'],
  );
  return system_settings_form($form);
}

function calculoid_admin_configuration_form_validate($form, &$form_state) {
  
}
