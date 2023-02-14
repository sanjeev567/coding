console.log('We are in tut7.js and lets discuss about arrays');
let marks = [34, 23, 24, 93 ,73, 25];
const fruits = ['Orange', 'Apple', 'Pineapple'];
const mixed = ['str', 89, [3, 5]];

const arr = new Array(23,123,21, 'Orange');
// console.log(marks);
// console.log(mixed);
// console.log(fruits[1]);

// console.log(arr.length);
// console.log(Array.isArray('dfdf')); //this return boolean value true if with that name array exist otherwise false
arr[0] = 'harry';
let arrelement = arr[0];
// console.log('element :', arrelement);
// console.log(arr);

let value = marks.indexOf(73);
// console.log(value)

// Mutating or Modifying arrays
// marks.push(3564);
   marks.unshift(1009);    // unshift used to store at the beginning 
// marks.pop()
// marks.shift()    //to delete element at the beginning
// marks.splice(2, 3);   // remove from the the given parameter index
// splice(index, no of element to remove, element to insert)
// marks.reverse()
let marks2 = [1, 2,3, 7];
marks = marks.concat(marks2);
// console.log(marks);

let myobj = {
    'first name': 'harry', 
    channel: 'CodeWithHarry',
    isActive: true,
    marks: [1,5,3,6]
}

console.log(myobj)
console.log(myobj['channel'])   //2nd way to access element of the object.
console.log(myobj.channel)
           
