$(document).ready(function() {
  // Add new item
  $('#add_item').click(function() {
    $('UL.my_list').append('<li>Item</li>');
  });

  // Remove last item
  $('#remove_item').click(function() {
    $('UL.my_list li:last-child').remove();
  });

  // Clear all items
  $('#clear_list').click(function() {
    $('UL.my_list').empty();
  });
});
