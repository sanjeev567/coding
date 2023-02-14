//const avg = require("./mod");  //here we get only function average as avg

// console.log(avg([3,4])); //so we use avg not dot


const avg3 = require("./mod");
console.log(avg3.name);   //But here we we have to define what we want to use like name, roll or avg1. 
// because here we get avg3 as object not fn.
console.log(avg3.avg1([4,5]));
console.log("This is index.js");
console.log("code is ",avg3.code);