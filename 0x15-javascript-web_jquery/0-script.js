// Select the <header> element using document.querySelector
const headerElement = document.querySelector('header');

// Check if the <header> element exists
if (headerElement) {
  // Update the text color of the <header> element to red
  headerElement.style.color = '#FF0000';
} else {
  console.log('Header element not found.');
}
