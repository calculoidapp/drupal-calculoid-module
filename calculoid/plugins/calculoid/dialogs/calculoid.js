/**
 * @file
 * expandablecontent.js
 */

CKEDITOR.dialog.add('calculoid', function (editor) {
  'use strict';
  return {
    title: 'Calculoid Calculator',
    minWidth: 400,
    minHeight: 200,
    contents: [
      {
        id: 'settings',
        label: 'Settings',
        elements: [
          {
            type: 'text',
            id: 'calcId',
            label: 'Calc Id',
            validate: CKEDITOR.dialog.validate.integer(Drupal.t('Enter Calc Id'))
          },
          {
            type: 'text',
            id: 'prefilledValues',
            label: 'Prefilled Values'
          }
        ]
      }
    ],
    // Called when user clicks OK from within the dialog. Insert our template
    // into the editor.
    onOk: function () {
      var dialog = this;
      // Get Settings from dialog.
      var calcId = dialog.getValueOf('settings', 'calcId');
      var prefilledValues = dialog.getValueOf('settings', 'prefilledValues');
      // Our template for the expandable content section.
      var calculoid_shortcode = '[calculoid id=' + calcId + ' title=@title description=@description values=' + prefilledValues + ']';
      // Insert our HTML into the editor.
      editor.insertHtml(calculoid_shortcode);
    }
  };
});
