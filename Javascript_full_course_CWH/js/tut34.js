console.log('welcome to tut34.js')

// here we learn about async await and will see how we can avoid using two then that we are using previously

// async function means it return a promise simply

async function Sanjeev(){
    console.log('inside Sanjeev function');
    const response = await fetch('https://api.github.com/users')
    console.log('before response');
    const user = await response.json();
    console.log('user resolved')
    return user;
}

console.log('Before calling Sanjeev');
let a = Sanjeev();
console.log('After calling Sanjeev');
console.log(a);
a.then(data => console.log(data));

console.log('last line of the js file...');

/*
let's understand the flow of execution of the code
-> first log - welcome to tut34.hs
-> As we know whenever we write async in front of function it will return a promise
-> inside Sanjeev fn log inside sanjeev functon..
-> as control see await it will return out of the function to complete another work or we can say await runs asuncronously
-> log will printed After calling Sanjeev
-> again control goes to await check whether it finishes it work if yes then response will be printed if no it will be in pending
-> log will be printed last line of the js file
-> since there is nothing to do after so control goes to 2nd await and this time response and user is resolved 
-> go to console to see the action and also do some change to get better understanding


*/ 
