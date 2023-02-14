console.log("tut3");
// variables in js
// let var and const
// var is globally defined variable let and const are block scope
// const means value can not be change further once defined.
// whenever we create a const variable we must have to define it there otherwise it gives an error.



let v1 = 34;
var v2 = `this is sanjeev here`;
const v3  = 'this is const variable';

console.log(v1, v2, v3);
{
    let v2 = 'this is let variable';
    console.log(v2); //here let v2 will be called.
}
console.log(v2); //here var v2 will be called
// Rules for creating variable in js
/*
1) should not start with numbers
2) can start with _, letters, or $    --> but with _ we create private variables in object oriented js and $ is use in Jquery frameworks so avoid using these two.
3) are case sensitive
*/

//v3 = 'this is not possible';//this will give an error


// but if we declare a const array this we can push element in it
const v4 = ['rohan','sohan','geet','anshuman'];
v4.push('aditya');
console.log(v4);


/*
Most common programming casing types
1) camelCase  //recommended
2) kebab-case
3) snake_case
4) PaskalCase
*/

// datatypes in js

// primitive datatypes
/*
1. string 
2. Numbers
3. Null
4. Undefined
5. boolean
6. symbol // newly introduced 

*/

// reference datatypes
/*
1. Arrays
2. functions
3. Object literals 
4. Dates


*/

