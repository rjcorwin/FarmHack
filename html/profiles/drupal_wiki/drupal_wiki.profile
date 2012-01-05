<?php

/**
 * Implements hook_form_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function drupal_wiki_form_install_configure_form_alter(&$form, $form_state) {
  // Set a default name for the dev site.
  $form['site_information']['site_name']['#default_value'] = t('Drupal Wiki');

  // Set a default country so we can benefit from it in various places.
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
}
