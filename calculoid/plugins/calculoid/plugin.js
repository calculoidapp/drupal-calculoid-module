/**
 * @file
 * plugin.js
 */

(function ($) {

  'use strict';

  CKEDITOR.plugins.add('calculoid', {
    // CKEditor will look for PNG files in the icons folder.
    icons: 'calculoid',
    init: function (editor) {
      editor.addCommand('calculoid', new CKEDITOR.dialogCommand('calculoid'));
      editor.ui.addButton('calculoid', {
        label: Drupal.t('Calculoid Shortcode'),
        command: 'calculoid',
        icon: this.path + 'icons/calculoid.png',
        toolbar: 'insert'
      });
      CKEDITOR.dialog.add('calculoid', this.path + 'dialogs/calculoid.js');
    }
  });

})(jQuery);
