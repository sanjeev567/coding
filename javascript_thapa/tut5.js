
// functions in js

function summation(a, b){
    // console.log(`the sum of ${a} and ${b} is: ${a+b}`);
    return (a+b);
}
// IMPORTANT if we just assign function value which do not return only print then if we run terminal we will get 
//the value. our fn must return something i order to not get printed which we want or when we assign
var sum1 = summation(4,5);
console.log("the sum of numbers is: "+sum1);

// annonymous function in js
// a fn which not have name eg-:
var substraction = function(a, b) {return a-b;}

console.log(substraction(10,6));

// funciton paramenter vs function arguments
// see whatever we paased values in funtion that are function arguemnt 
// var which we you during function definition that are function paramenter

function multiply(a, b)  //here a and b are function arguments
{ return a*b};

function multi1()
{
    var a=10, b=7;  //here a and b are function parameter 
    console.log(a*b);
}
// now you can tell the advantages or disadvantages of these two also.

