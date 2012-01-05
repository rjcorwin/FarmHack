CCK Blocks module for Drupal 7
------------------------------

This module allows you to create blocks from fields of the currently 
displayed node.  It is very handy as a simple way to get fields
appearing in a block, instead of in the main content region.

This makes it possible to show the field's value of the currently
shown node in the block (placed left, right or in whatever region)
instead of (or next to) the node's main content area. 

Site users can add node-related block-content right from the 
node's editing page.


Examples of use:
----------------

- Adding a simple sideblock to a node form, containing Field
data.  e.g.:  A "short bio" block" (Long Text field), an
"Attached Files" block (file field), an "Icon" block (media field). 
You can use any Field type in Drupal, including fields 
provided by contrib modules!

- Giving content types a "sideblock" Long text field, with
another text field named "sideblock title" controlling the title,
so users can set their own sidebar content and title.


Field Visibility and Display Modes: 
-----------------------------------

The module does not hide the field in the node's content area anymore. 
You can do that for yourself in the display settings for your content type. 

CCK blocks will define a display mode named "CCK Blocks", which you can 
use to configure the display of fields when they are appearing as blocks.

This allows you show the field both in the node's content area and in 
the CCK block, with different display settings.

IMPORTANT:  Before any of your CCK blocks will show up, you need to set
the field in question to be visible in the CCK blocks display mode!
See "step by step", below.


Performance and Caching:
------------------------

Since many users have experienced tremendous problems when block caching is 
activated (#400858: CCK Blocks appears to be incompatible with block caching), 
we decided to disable block caching for cck blocks. 

If you wish to have block caching, please use the Block Cache Alter module 
to activate block caching for individual cck blocks.
http://drupal.org/project/blockcache_alter


Tokens:
-------
Block titles support tokens from the token module.  You can make use of this
to have a field as block, with another field value as the block title. 

To do this you must download the contrib Token module for Drupal 7.  The token
module that comes in core will not provide the field tokens that you need.
Download and install the recommended Drupal 7 release of token from:
http://drupal.org/project/token .  Enable, then set your block title as 
follows:

[node:field_yourfieldname]

where "field_yourfieldname" matches the correct machine name of the field
containing the title you wish to use.


Installation:
-------------
The usual - Download the module, place into your modules directory, and 
enable. There is no configuration page for the module, all configuration 
is done for each field (see "Step by Step" below).


Step by Step:
-------------

For each field you wish to display in a block:

1. Admin - structure - content types - your content type - manage fields

2. Edit the field in question

3. At the bottom, under "field settings" you will find a new option:

  Provide a block for this field : Disabled / Enabled

4. Set this to "Enabled" and then Save Settings

5. Now edit the display settings for your content type: 
   Admin - structure - content types - your content type - manage display

6. You probably want to hide your CCK blocks field from the Default node
   display, otherwise it will show up twice on the page - in your block
   but also in the main content!  To hide it from there, drag the field
   to the bottom so it is underneath "Hidden" and then hit Save.

7. Now Click on "CCK blocks".  This display mode controls how content
   is rendered for CCK blocks only.  By default your field will be hidden,
   which prevents it showing up.  You need to at least change this!

8. Drag your field up from Hidden into the top area so it can be shown. 
   Set a label (or set the label to None) and a format for the field 
   when it appears in a block.  (these do not have to be the same as
   in the main node content).  

9. Hit Save to save the settings.

10. Visit the Drupal blocks page to enable and set the title for the block.
    admin - structure - blocks.  Your block will be named:  
    Field:  <the field name>.  Press "Edit" next to the field.

11. Set a title for the field.  If you want to use a token, you must have
    the contrib Tokens module installed. (see "Tokens" above).  
    If you want no title, use: <none>

12. Now visit a node page that has the field set.  You should see your
    field appear as a block!

Online Tutorial:
----------------

At the time of this writing, an excellent tutorial on CCK blocks for Drupal 7
could be found here: http://www.ostraining.com/blog/drupal/cck-blocks/


Related modules:
----------------

If you want to have a field editable directly within a block, try editablefields.

You can do everything CCK block does and a whole lot more using Display Suite
(http://drupal.org/project/ds).  See the "Region as Block" functionality 
inside the ds_extras module. If you are planning on using Display Suite 
already, you should strongly consider using its Region as Block instead
of CCK blocks!

You can also accomplish what CCK Blocks does using views - by having a view
with a contextual argument on Content:nid, providing a default value of the
"Content ID from the URL".
