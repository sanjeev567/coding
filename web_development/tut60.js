// modules in node.js
//readFileSync -> a mdule which read file syncronously
//readFileAsync -> a module which read fiel asyncrously
// similary writeFileSync and writeFileAsync

//you should also explore some module by yourself how to use them.

const fs = require("fs");  //fs -> filesystem
let text = fs.readFileSync("delet.txt", "utf-8");
text = text.replace("this", "that");
console.log(text);

console.log("creating a new file...");
fs.writeFileSync("rohan.txt", text); 
