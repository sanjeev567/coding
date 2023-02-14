// array in javascript...


// array definiton
var mylist = ['ram', 'shyam', 'shohan','geeta', 'sita'];

// console.log(mylist[3]);

// using for in , for of and forEach loop...

// for(let elements in mylist)
// console.log(elements);  //here for in gives index no i.e 0, 1, 2, 3...

// for (const iterator of mylist) {
//     console.log(iterator);  //here for of give value at that particular index.
// }


// using fn callbacks
// mylist.forEach(function(element, index, mylist){console.log(element, index,mylist)}); //here you can print any of the three element, index or whole mylist

//using arrow fn or fat arrow function...
// mylist.forEach((element, index, array)=> console.log(element,index, array));
//in forEach we can't use break statement
// we can pas either elemnet only or two or three acc  to our need.



// some methods of loop like searching or sorting 

// searching and filter in an array

// indexOf (method of searching)
// indexOf method returns the first occurance of that string if present else returns -1;
// it search from the 0th index no if we do not provide the second argument i.e number else from that index no
// var myfav =['apple', 'milk', 'cow','cow', 'dog','cow', 'fish'];
// var res = myfav.indexOf('cow');
// console.log(res);

// lastIndexOf method return the occurance of last index of that string or element in that array if present else return -1
// all other properties are same as indexOf method.
// var res = myfav.lastIndexOf('cow');
// console.log(res);

// includes in javascript
//this returns true if present that element else return false;
// var myfriend  =["romi", "rahul", "manish", "raushan","Ram", "shyam"];
// console.log(myfriend.includes('romi',-6)); //returns true since at -6 position there is 'romi'
// console.log(myfriend.includes('romi'));

// unshift and push method in js
// unshift method is used to add one or more element at the begining of the array 
//push method is used to add at the last of the array
const animals = ['tiger','lion', 'fox','dog','sheep'];

// animals.unshift('sanjeev','sonam', 'sangeeta');
// animals.push('rubi','santosh');
// console.log(animals);

// pop and shift in js
// pop removes the last element of the array while shift removes the first element of the array.
// animals.pop();
// console.log(animals);
// animals.shift();
// console.log(animals);

// splice method in js
// this method is used for adding removing or replacing any element at any location in the array

const monthName = ['jan','march','apr','june','august', 'sept','oct','nov','dec'];

monthName.splice(1, 0, 'feb');
console.log(monthName);
monthName.splice(4,1,'may', 'june','july');
console.log(monthName);
