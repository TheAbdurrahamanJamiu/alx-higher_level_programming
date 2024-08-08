$(document).ready(function() {
  // Function to fetch and display the translation
  function fetchTranslation() {
    var langCode = $('#language_code').val();
    $.get('https://www.fourtonfish.com/hellosalut/hello/', { lang: langCode }, function(data) {
      $('#hello').text(data.hello);
    });
  }

  // Click event for the translate button
  $('#btn_translate').click(function() {
    fetchTranslation();
  });

  // Keypress event for the language input field
  $('#language_code').keypress(function(event) {
    if (event.which === 13) { // 13 is the Enter key
      event.preventDefault(); // Prevent default form submission
      fetchTranslation();
    }
  });
});
