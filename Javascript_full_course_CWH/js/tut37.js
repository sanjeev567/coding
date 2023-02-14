console.log("welcome to tut37 here we will see regular expression in js");

//
let regular = /harry/; // regular expression (we use it to search purpose);
regular = /harry/g; // g is flag which is used to search in entire string this word as many time we call the exec fundtion and
// when str is finish no more word is present then it return null (this is also for our simplicity so that we can run while loop and when we get null we get out of the loop)

//regular = /harry/i; // i another flag used to make search insensitive (means it search or return irrespective the found word is capital letter or small)

// console.log(regular);
// console.log(regular.source);

let str = "this is best tutorial in js with code with harry also harry bhai ";

let result = regular.exec(str);
// console.log(result);

// result = regular.exec(str);
// console.log(result);

// result = regular.exec(str);
// console.log(result);
// if (result) {
//   console.log(result.input); //if false it return error
//   console.log(result.index);
// }

// 2. test
let result2 = regular.test(str); // return true when regular is present in str else return false
// console.log(result2)

// 3. match --> it will return array of match or null 

let result3 = str.match(regular)  //its syntax is different but kindly remember.
// console.log(result3)

// 4. Search --> return index else -1
let result4 = str.search(regular);
// console.log(result4);

// 5. replace --> replace all the str with the parameter passed only when you add flag f in regular expression

let result5 = str.replace(regular, 'Sanjeev');
console.log(result5)
