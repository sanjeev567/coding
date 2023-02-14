// type conversion and type coersion

console.log("we are in the tut5.js");

let myVar = 34;
console.log(myVar, typeof(myVar));
 myVar = String(myVar);
 console.log(`value of myVar ${myVar} ${typeof(myVar)}`);

//  similarly we can type cast any datatype to convert to string using String keyword before 
// here you can also use tostring keyword to convert tostring.
let myVar3 =233;
myVar3.toString();
console.log("type of myVar3 is: "+ typeof(myVar3));

// similarly we can convert any string or any other datatype variable to number using Number as prefix
let myvar2 = "23423";

myvar2 = Number(myvar2);
console.log("type of myvar2 is: "+ typeof(myvar2));

let myVar4 = "34243";
myVar4 = Number(myVar4);   //return NaN ( not a number)
console.log(myVar4);

let parsevar = parseInt(234.342);  //parseInt convert gives output only numeric value.

console.log(parsevar);


// similary parseFloat fn gives the flaot value 

// toFixed() return no after point value exactly same that you passed in parameter 
// for eg 2 in below case...
console.log(parsevar.toFixed(2));

// type coersion

let var1 = "2343";
let var2 = 23;
console.log(var1 +var2);
