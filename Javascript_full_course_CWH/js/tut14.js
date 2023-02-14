console.log("we are at tut14.js")


/*
Element Selectors
1. single element selectors
2. multi element selectors

*/

// single element selector
let element = document.getElementById('myitem');
// let element = document.getElementsByClassName('red');  
// element = element.className; //this will diplay the whole classname which have the item myitem
// element = element.parentNode;  // this will gives parentNode i.e container div (here)
// element = element.childNodes;  // this will gives childNode i.e nothing here but length 1 (for text written inside here.)


// element.style.color = 'red';  //using js we can change css like color
// element.innerText = "sanjeev kumar singh";   //changing inner text with js
// element.innerHTML = "<b> sanjeev kumar singh</b>"; // cahnging inner html with here written text...
// console.log(element.innerHTML);

// let dsel = document.querySelector('#myitem'); //this will returns the first element with id = myitem not second third if present for that we need to use multi element selectors
// dsel = document.querySelector('.red');
// dsel = document.querySelector('div');  //again no matter how much you have div this will return the first div of the document...
// again here we can pass the element like b -bold, l - list, etc.
// console.log(dsel);


// Multi element selectors
// way to identify --> see at the last of element in the functions like get elements here s i.e plural.

let elems =document.getElementsByClassName('item');
elems = document.getElementsByTagName('div');
console.log(elems);
Array.from(elems).forEach(element => {  //here we use Array.from() bcoz we can't access document collection directly 
    console.log("this is console...");
    element.style.color = 'red'
})