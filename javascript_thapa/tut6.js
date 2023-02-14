//                  <---MODERN JAVASCRIPT---->


// what is ECMA ?
//ECMA is global level organisation which standardise js changes acc to times 
//some popular ECMAscript is 2015, 2016, 2017 ...

//IMPORTANT ecma 2015 changes 
// let and const
// template string or literal
// arrow function
// default arguments
// rest operators
// destructuring
// object properties
// spread operators


// difference among let, var and const...

// let and const are of block scope
// var is function scope
// const varible not changeble once you declare

// ex --
// function myFamilyNo(){
//     let roti = 5;
//     if(roti == 5){
//         roti =8;
//         console.log(roti);
//         let moti =10;
//         console.log("moti want not less than 10 roti: ",moti);

//     }
//     roti = 10;
//     console.log(roti);
//     // moti = 12;   *** here if we not change value of moti then it is not accessible from outside but if we change here like moti =12 then it is accessible.
//     //but if moti is of const type then neither we can change its value nor we can access it from outside the block or blackets.
//     console.log("moti roti is: ",moti)
    
// }
// myFamilyNo();

// Template literals or template strings 

// use backticks in console.log

// for(let i=1; i<=10; i++){
//     let tableof = 8;
//     console.log(`${tableof} * ${i} = ${tableof*i}`);
// }

// 3 > Default argruement 
//means if function takes two arguement and we pass one or nothing then it will go with default paramenters

// function default1(a, b=0){
//     return a+b+1;
// }
// console.log(default1());


// 4> Arrow function or fat function.
// const default1 = (a=0, b=0)=>{
//     return `value of the funciton is ${a+b+2}`;
// }
const default1 = (a=0, b=0)=>
   `value of the funciton is ${a+b+2}`;


// fat arrow function says if you have only one line in fn then no need to write return.
console.log(default1(4,));