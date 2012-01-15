<?php
/**
 * @file
 * opentools.box.inc
 */

/**
 * Implements hook_default_box().
 */
function opentools_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'events_forum_title';
  $box->plugin_key = 'simple';
  $box->title = 'Event\'s Forum';
  $box->description = 'Event\'s Forum Title';
  $box->options = array(
    'body' => array(
      'value' => '<a name="forum"></a>
<?php

global $user;

// Get forum context
$tid = opentools_get_context();

$query = "
SELECT * FROM notifications_subscription 
INNER JOIN notifications_subscription_fields 
WHERE notifications_subscription.uid=" . $user->uid . " 
AND notifications_subscription_fields.value = \'" . $tid . "\';";

$results = db_query($query);
$records = array();
foreach($results as $record) {
  $records[] = $record;
}

if(count($records) > 0) {
$link = "/notifications/unsubscribe/" . $records[0]->sid . "?destination=" . current_path();
print "<div class=\'subscribe-title\'>";
print "<a href=\'$link\'><img src=\'/sites/all/modules/opentools/images/mail-250-white.png\' width=\'70\'><div class=\'unsubscribe-text\'>Unsubscribe from Event\'s Forum</div></a>";
print "</div>";
}
else {
$link = "/notifications/subscribe/taxonomy_term?0=" . $tid . "&destination=" . current_path();
print "<div class=\'subscribe-title\'>";
print "<a href=\'$link\'><img src=\'/sites/all/modules/opentools/images/mail-250-white.png\' width=\'70\'><div class=\'subscribe-text\'>Subscribe to Event\'s Forum</div></a>";
print "</div>";
}

?>',
      'format' => 'php_code',
    ),
  );
  $export['events_forum_title'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'events_wiki_title';
  $box->plugin_key = 'simple';
  $box->title = 'Event Wiki';
  $box->description = 'Event\'s Wiki Title';
  $box->options = array(
    'body' => array(
      'value' => '<a name="wiki"></a>
<?php

global $user;

// Get wiki context
$context = opentools_get_context();
$nid = $context[\'wiki\'];

$query = "
SELECT * FROM notifications_subscription 
INNER JOIN notifications_subscription_fields 
WHERE notifications_subscription.uid=" . $user->uid . " 
AND notifications_subscription_fields.value = \'" . $nid . "\';";

$results = db_query($query);
$records = array();
foreach($results as $record) {
  $records[] = $record;
}

if(count($records) > 0) {
$link = "/notifications/unsubscribe/" . $records[0]->sid . "?destination=" . current_path();
print "<div class=\'subscribe-title\'>";
print "<a href=\'$link\'><img src=\'/sites/all/modules/opentools/images/mail-250-white.png\' width=\'70\'><div class=\'unsubscribe-text\'>Unsubscribe this Event\'s Wiki updates</div></a>";
print "</div>";
}
else {
$link = "/notifications/subscribe/content_thread?0=" . $nid . "&destination=" . current_path();
print "<div class=\'subscribe-title\'>";
print "<a href=\'$link\'><img src=\'/sites/all/modules/opentools/images/mail-250-white.png\' width=\'70\'><div class=\'subscribe-text\'>Subscribe to changes in this Event\'s Wiki</div></a>";
print "</div>";
}

?>',
      'format' => 'php_code',
    ),
  );
  $export['events_wiki_title'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'license';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'License';
  $box->options = array(
    'body' => array(
      'value' => '<a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/"><img alt="Creative Commons License" style="border-width:0" src="http://i.creativecommons.org/l/by-sa/3.0/88x31.png"></a>
<p>This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/">Creative Commons Attribution-ShareAlike 3.0 Unported License</a>. Specific works on this site may be released or dedicated under different licenses, but only if such alternatives are clearly indicated by their authors.</p>',
      'format' => 'full_html',
    ),
  );
  $export['license'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'tools_forum_title';
  $box->plugin_key = 'simple';
  $box->title = 'Tool\'s Forum';
  $box->description = 'Tool\'s Forum Title';
  $box->options = array(
    'body' => array(
      'value' => '<a name="forum"></a>
<?php

global $user;

// Get forum context
$context = opentools_get_context();
$tid = $context[\'forum\'];

$query = "
SELECT * FROM notifications_subscription 
INNER JOIN notifications_subscription_fields 
WHERE notifications_subscription.uid=" . $user->uid . " 
AND notifications_subscription_fields.value = \'" . $tid . "\';";

$results = db_query($query);
$records = array();
foreach($results as $record) {
  $records[] = $record;
}

if(count($records) > 0) {
$link = "/notifications/unsubscribe/" . $records[0]->sid . "?destination=" . current_path();
print "<div class=\'subscribe-title\'>";
print "<a href=\'$link\'><img src=\'/sites/all/modules/opentools/images/mail-250-white.png\' width=\'70\'><div class=\'unsubscribe-text\'>Unsubscribe from Tool\'s Forum</div></a>";
print "</div>";
}
else {
$link = "/notifications/subscribe/taxonomy_term?0=" . $tid . "&destination=" . current_path();
print "<div class=\'subscribe-title\'>";
print "<a href=\'$link\'><img src=\'/sites/all/modules/opentools/images/mail-250-white.png\' width=\'70\'><div class=\'subscribe-text\'>Subscribe to Tool\'s Forum</div></a>";
print "</div>";
}

?>',
      'format' => 'php_code',
    ),
  );
  $export['tools_forum_title'] = $box;

  return $export;
}
