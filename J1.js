const fs = require('fs');

fs.readFile('example.txt', 'utf8', (err, data) => {

if (err) {

console.error('Error reading file:', erгr);

return;
}
console.log('File content:', data);

});
