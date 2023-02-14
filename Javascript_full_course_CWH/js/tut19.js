console.log("you are in tut19.js");

// here we see localstorage which is window.localStorage


// setting localStorage items
localStorage.setItem('name', 'sanjeev');
localStorage.setItem('roll', '19cs48');

// here we can't store an Array directly...
// if we store an array directly then it will store it as string --> which create problem when we want to add more element or to retrieve element 
// so we always want to store element in array function --> this will helps us to use different methods of array ect..
// so we use JSON.stringify to store first as string then JSON.parse to convert it in array.
//here confusion may arise in one's mind that again we store array as string but if you check it in localStorage 
// then you will find that using stringfy we store it as array and using json.parse we retrieve it as an array


    // the sound may be little confusing but i recommend you to store yourself an array directly and see what problem 
    // arises and using stringfy and parse how it is useful

let impArray = ['bhindi', 'lahsun', 'nenua', 'kaddu'];
localStorage.setItem('sabji', JSON.stringify(impArray));  //JSON.stringify stores object/arary as string

let imasanjeevray = JSON.parse(localStorage.getItem('sabji'));  //JSON.parse parse as object/array
console.log(imasanjeevray);


// // getting localStorage items
// let Name1 = localStorage.getItem('name');

// // to remove the specific items
// localStorage.removeItem('name');  //this will remove only name variable...

// // To clear() localStorage items --> this will erase the whole localStorage items
// localStorage.clear();  //to check go to inspect -> application -> localStorage
// console.log(Name1);  //but here sanjeev will be printed bcoz before clearing the localStorage this will store it in variable Name1


// similarly we have sessioStorage 

// main difference between localStorage and sessionStorage is that
// localStorage - it has no expiry date, it remains forever similar to cookies
// sessionStorage - it is temporary and store only till the browser is active or open once you close the browser the it will disappear..

sessionStorage.setItem('sName', 'sRahul');
sessionStorage.getItem('sName');