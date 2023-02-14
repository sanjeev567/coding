console.log("data types in js");
// there are six primitive datatypes 
// Undefined, boolean, string, bigint(intro in ecma 2015), number and symbol(also in ecma 2015);


// <--Interview Question ---> 
// what is difference between null and undefined.
// null means empty and undefined means variable doesnt exists
//null is internal absence of value of variable
//undefined is global object.
// null== undefined but null===undefined   means null and undefined are equal but not identical.

var var1 = null;  //here typeof(var1) is object which is not its primitive datatype and this is another kind of bug in js.
var var2 = undefined;


console.log(var1, var2);

// var1= 5;
// var2 =5;
// console.log(var1-var2);

if (var1 ===var2) console.log(true);
else console.log(false);




var var1 = "sanjeev kumar";
console.log(typeof(var1));
console.log(var1);

var var2 = 23;
console.log(typeof(var2));
// similarly you can check any datatype with typeof() operator.

// let's do some question type

console.log(10 + "20"); //here + operator concatenate only but not add here output--> 1020

console.log(10 - "5");  //bug no logic why output--> 5 because 10 is number and "5" is string

console.log(" "+" "); //output --> nothing
console.log(" "+0); //output--> 0


console.log("rahul" - "kumar"); //output --> NaN - Not a number 

console.log(true +true) //output--> 2 ;  one true = 1


console.log(false -true) //output--> -1 ;  one true = 1 and false =0;

