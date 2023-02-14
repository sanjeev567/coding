// Synchronous or blocking
// - line by line execution

// Asynchronous or non-blocking
// - line by line execution not guaranteed
// - callbacks will fire

const fs = require("fs");
fs.readFile("dele.txt", "utf-8", (err, data)=>{ //this line will not execute until the readfile will read the file(dele.txt in this case;)
    console.log(data); //this will printed after the below console.log bcoz this works based upon callback(asynchonus);
});
console.log("This is a message");  //this will printed first
// for more details read documentation of the node.js official website.
