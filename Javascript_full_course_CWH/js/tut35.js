console.log("This is tutorial 44");
// error handeling in js

// Pretend this is coming from a server as response
let a = "Harry bhai";
a = undefined;
if (a !=undefined){
    throw new Error('This is not undefined');
}
else{
    console.log('This is undefined');
}


try {
    null.console
    console.log("We are inside try block");
    
    functionHarry();
    
} catch(error) {
    console.log(error)
    console.log("Are you okay?");
    console.log(error.name);
    console.log(error.message);
    
} finally { //finally will run irrespective of if there is an error or not 
    console.log("Finally we will run this")
}