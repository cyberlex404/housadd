<?php
/**
 * Created by PhpStorm.
 * User: Lex
 * Date: 26.04.2016
 * Time: 19:22
 */

function housadd_configure_form($form, &$form_state) {
  $form['#tree'] = TRUE;
  $conf = variable_get('yandex_pdd_hous');
  $form['yandex_pdd_hous'] = array(
    '#type' => 'fieldset',
    '#title' => 'Yandex PDD',
  );

  $form['yandex_pdd_hous']['domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Domain'),
    '#default_value' => $conf['domain'],
    '#required' => TRUE,
  );

  $form['yandex_pdd_hous']['pdd_token'] = array(
    '#type' => 'textfield',
    '#title' => t('PDD token'),
    '#default_value' => $conf['pdd_token'],
  );

  return system_settings_form($form);

}