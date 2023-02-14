// part two 
// dom.js contains part 1 code and part 2 code as well

// parentNode selecting
item  = document.querySelector('#items');

//item.parentNode.style.color = 'magenta';

// console.log(item.parentNode.parentNode);

// childNode and children

//console.log(item.childNodes);  //this counts whitespace also and named them as text go to console and check that
// console.log(item.children)  //this gives only element present in html (now it is also html collection)

//item.children[1].style.backgroundColor = 'yellow';

// firstChild
//console.log(item.firstChild)   //again this gives text as whitespace so useless almost
// item.firstChild.textContent ='romy';  // no use

// firstElementChild
// console.log(item.firstElementChild);
//item.firstElementChild.textContent = 'romy'; // now this will change the textContent of the li child item

// lastChild
//console.log(item.lastChild)    //agin same as firstChild gives text no use
// item.lastChild.textContent ='romy';  // no use

// lastElementChild
// console.log(item.lastElementChild);
//item.lastElementChild.textContent = 'romy'; // now this will change the textContent of the li child item

// nextSibling vs nextElementSibling
//console.log(item.nextSibling);  //again gives text no use

//console.log(item.nextElementSibling) //gives next element sibling (which is not here if you add then you can see)


// previuosSibling
// console.log(item.previousSibling); //same as nextSibling, firstChild ...
// console.log(item.previousElementSibling);
// item.previousElementSibling.style.backgroundColor = 'red';


// createElement

// create a div
const newdiv = document.createElement('div')

// add a class
newdiv.className = 'new-div';

// add id
newdiv.id = 'new-div1';

// add attrib.
newdiv.setAttribute('title','hello div');

// create a textNode
divTextNode = document.createTextNode('hello div this is me');

// appending child inside newdiv
newdiv.appendChild(divTextNode);

var cont = document.querySelector('header .container');
var h1 = document.querySelector('header h1');

// insert before h1
cont.insertBefore(newdiv, h1);

console.log(newdiv);