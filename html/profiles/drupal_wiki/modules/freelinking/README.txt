# freelinking.module -- a freelinking filter for Drupal
---

## Freelinking 3 for Drupal 6

Freelinking 3 is a complete rewrite of the freelinking module.
Freelinking 3 will be released for Drupal 6 and Drupal 7, and perhaps
for future versions as well.

Freelinking 3 breaks from previous versions in some significant ways:

* There is no database table in FL3. Previous versions of Freelinking
  use a table to keep track of freelinks and their targets.
* Plugins are available to enhance FL3's functionality. See USERS.txt
  for a description of the available plugins, and DEVELOPERS.txt for the
  developer's guide.
* Freelinks made with the "nodetitle" plugin (which mimics the behavior
  of previous versions of freelinking) do not run through the
  'freelinking/' namespace.
* FL3 offers a Freelinking Prepopulate submodule that provides a "create node"
  plugin. Nodetitle may use this to provide links to create content that does
  not exist. This submodule requires Prepopulate.
* FL3 now provides partial support for alternate syntax modes, including
  double brackets, single brackets, and Markdown-style
  ([Title](indicator:target))

As of Alpha-3, some features are still missing:

* There is no consideration for freelinks made with the "nodetitle"
  plugin which did not exist at submission time but have been created
  later. This was the main reason for using the 'freelinking/' namespace
  in previous versions.
* There is no option for nodetitle to failover to search in 
  the event the user does not have permission to create a new node. Filter caching 
  prevents FL3 from running such logic for each individual user. Nodetitle may 
  failover to search, or to createnode in the event that the Freelinking Prepopulate 
  module is enabled.

## Maintainers
* eafarris <eafarris@gmail.com> (Original Creator)
* grayside <grayside@gmail.com>

vim: tw=72 syn=mkd
