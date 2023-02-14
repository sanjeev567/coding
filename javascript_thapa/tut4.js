//<---Operators in javascript --->

//there are total six type of operator in js
// Assingment, Arithmetic, Logical, String, Comparison and Conditional...

// var x = 5, y = 5;
// console.log("value of x and y is same: ", x===y)
// console.log(`value of x and y is: ${x === y}`);

// Increment and Decrement Operator...
// x++ , ++x, --y, y--;
// post fix first assign then increment and prefix first increment then assign..

//conditional statement like if else 



// == vs === in js
// == checks only value but === checks value as well as datatype

// var v1 = 5, v2 = '5';

// console.log(v1 == v2);  //comparison
// console.log(v1 === v2);  //strictly comparision

// *** very IMPORTANT  -> what is truty and falsy values in javascript
// well we have 5 falsy value in js -> 0, "", undefined, null and NaN 

// if we paas the any falsy value to if statement then it will execute else part always

// if (undefined)  //since here we pass falsy value so else part will execute you can try any of the five.
// {
//     console.log("this is if part or true part: ");
// }
// else {
//     console.log("this is else part or false part")
// }


//switch case 
//Always use break statement with switch case otherwise it will print all the data...

// var Age = 17;
// switch (Age) {
//     case 17: console.log("you can't vote rightnow: "); break;
//     case 15: console.log("you can't vote now: "); break;
//     case 18: console.log("you can vote "); break;
//     case 20: console.log("you can vote "); break;
//     default: console.log("Invalid input! "); break;
// }

// loops for, do and do while;
