console.log("hello ji kaise ho sare");


let var1 = "sanjeev";
let var2 = "sagar";
let var3 = "rahul";
let var4 = "Rohan";
// console.log(var1 + " is a good boy");
// console.log(var2 + " is a good boy");
// console.log(var3 + " is a good boy");
// console.log(var4 + " is a good boy");

// Instead of writing so many these thing we can make a function which will call all

function greet(gana, wish= "greeting from javascript:" /*default argument*/){
    console.log( wish + " " + gana );
    console.log(gana +" is a good boy");

}
let wish1 =" Good Morning!";
let wish3 = "good night!";
greet(var1, wish1);
greet(var2, wish1);
greet(var3, wish1);
greet(var4,wish3);
greet(var1,wish3)