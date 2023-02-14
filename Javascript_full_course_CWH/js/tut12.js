console.log("we are at tut12.js")

let a = document;
a= document.all;  //now all is deprecated 
a = document.forms
a = document.body;
a = document.links
a = document.links[0].href;
a=  document.forms[0];  // this doesn't return array value if you want an array value then you need to convert it using below method..

Array.from(a).forEach(function (element) {
    console.log(element);
})

console.log(a);