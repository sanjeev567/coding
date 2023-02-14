// Datatypes in js
/*
primitive datatypes 
    -> strings
    -> numbers
    -> boolean
    -> undefined
    -> Null
    -> symbol
    -> Bigint

Reference datatypes
    -> Arrays
    -> Objectliterals
    -> functions
    -> dates



*/


// you should check each datatype type


// Primitive datatype
// string
var Name = "sanjeev";
console.log("my name is " + Name)
console.log("type of name variable is: " + (typeof Name));

// numbers
let mynum = 3423;
console.log("type of mynum variable is: " + (typeof mynum));

// Boolean
let mybool = true;
console.log("type of mybool is: " + (typeof mybool));

// undefined
let myundefined = undefined;
let myundefined1;
console.log(`type of myundefined is: ${typeof (myundefined)} and type of myundefined1 is: ${typeof (myundefined1)}`);
// here in the above eg you can see that both myundefined and myundefined1 are of type undefined

// Null
let mynull = null
console.log("type of mynull is: " + (typeof mynull));
// here null is primitive datatype and its type shows in the console is object( which is of reference datatype) so this is bogas or Bug in js



// Reference datatype
// array
var myarr = [1, 2, 3, 4, 5,1.2, 'sanjeev', 'santosh'];
console.log(myarr)

// Object literals
let stmarks = {
    rohan: 23,
    sohan: 34,
    sanjeev: 90,
    rahul: 99
};
console.log(stmarks);
console.log(typeof(stmarks));
console.log(stmarks.sanjeev);
console.log(stmarks['sohan'])


// function
function FuncName() {

}
console.log(typeof(FuncName));

// dates
let dates = new Date();
console.log(typeof( dates))