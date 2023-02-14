console.log('we are at tut15');

let diul = document.querySelector('.container');
//console.log(diul.childNodes); //childNodes give the no of element() + comment + empty spaces(newline) (you should go to console and see what happens)
//console.log(diul.children); //this gives you only elements (i.e div, heading, ect...)
// To get this well about above two line you should go to console and see what is difference between children and chilNodes



let nodeName = diul.childNodes[1].nodeName;
let nodeType = diul.childNodes[1].nodeType;

 console.log(nodeName);
 console.log(nodeType);  //this gives 0,1,2,3,4,.... reason given below


//  Nodes type
/*
1. Element (div, h1, ect...)
2. Attributes
3. Text nodes
8. Comment
9. document
10. docType

*/
let container = document.querySelector('div.container');

// console.log(container.children[1].children[0].children); //this way we can traverse the children of children of children of any element 

// console.log(container.firstChild); //this will return the first child (whether text, comment or element)
// console.log(container.firstElementChild); //this will return the first element (i.e div, heading ect...)

// similarly lastChild and lastElementChild will also in js

// console.log(container.lastChild);
// console.log(container.lastElementChild);
// console.log(container.childElementCount);  //this will return no (no of element);



// nextSibling and nextElementSibling also parentNode
// nextSibling --> gives next Sibling(space, text, comments or element)
// nextElementSibling --> gives next Element in Sibling (i.e div, headings, etc...)
//parentNode --> return the element of the parent Node....

console.log(container.firstElementChild.nextSibling.parentNode)
console.log(container.firstElementChild.nextSibling.nextSibling.nextElementSibling)