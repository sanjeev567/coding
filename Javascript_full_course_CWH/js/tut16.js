console.log('we are at tut16');

// here we create element (i.e div, heading, list ect...)
let element = document.createElement('li');
let text = document.createTextNode('this is another way of filling some text inside our newly created list')
element.appendChild(text);

// adding className and Id to the element 
element.className = 'listdul';
element.id = 'newly-1';

// element.innerText = "this is newly created list dynamically using js..."
element.innerHTML = "<b>this is newly created list dynamically using js...</b>"  //this is another way to fill some text inside newly created list.

let ul = document.querySelector('ul.ulclass');
ul.appendChild(element);  //adding element to the child of ul 
console.log(ul)
console.log(element);

// replacing one Element to another...
let elem2 = document.createElement('h3');
elem2.className = 'elemclass';
elem2.id ='elemid';
let telem = document.createTextNode('this is text inside the element elem2 that is heading h3');
elem2.appendChild(telem);

element.replaceWith(elem2);

// replacing one child with another child (can be element, )
// replaceChild
let myul = document.getElementById('myul'); //here myul is the id of parentNode i.e <ul>
myul.replaceChild(element, document.getElementById('sanjeevId')); //the second parament should be child of Node on which you operated this method...

// removing any child Node 
myul.removeChild(document.getElementById('rahulId'));

// Attributes
let at = element.getAttribute('class');
at = element.hasAttribute('class');
element.removeAttribute('id');
element.setAttribute('title','mytitle')
console.log(element,at);


// this is the quiz
// in which you have to set heading and link to any website 
// for that we do this
// createElement  -> createTextNode('adding text inside it')  --> appendChild()(linking the child to the method...)


let CWH = document.createElement('h3');
let CWH_con = document.createTextNode('this is heading for the code with harry')
CWH.appendChild(CWH_con);
let link = document.createElement('a');
let a_con = document.createTextNode('Go to codeWithHarry.com');
link.appendChild(a_con);

link.href = "https://www.codewithharry.com";
// link.appendChild(link.href);
// console.log(CWH, link);
document.body.appendChild(CWH);
document.body.appendChild(link);