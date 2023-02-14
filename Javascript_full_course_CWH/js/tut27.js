// sycronous and Asyncronuous
// syncronous means line by line 
// Asyncronous means random do or not be idle for request or any work done 


console.log('we are in tut27.js');
// syncronous code 

for(let i =0; i<4000; i++){
    console.log(i);
}
console.log('work done !');

// Asyncronous code
setTimeout(() => {
    for(let i =0; i<4000; i++){
        console.log(i);
    }
}, 1000);
console.log('work done !');


/* Three ways to write Asyncronous code in js
1. Async/await
2. callbacks
3. promises
*/