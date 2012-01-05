; Use this file to build a full distribution including Drupal core and the
; Drupal Wiki install profile using the following command:
;
; drush make distro.make <target directory>

api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = "7"

; Add Commerce Kickstart to the full distribution build.
projects[drupal_wiki][type] = profile
projects[drupal_wiki][version] = 1.x-dev
projects[drupal_wiki][download][type] = git
projects[drupal_wiki][download][url] = http://git.drupal.org/project/drupal_wiki.git
projects[drupal_wiki][download][branch] = 7.x-1.x
