const a = 'this is a pen';

const tech = "computer, mobile, ipad, iphone, itouch, ilit";

// we have the given string tech and we want to make array from it so we use split(<delimeter) here <comma and space>
let arr = Array.from(tech.split(', '));
console.log(arr);


// console.log(a);

// Object literals 

const person ={
    firstname : 'sanjeev',
    lastname : 'singh',
    age: 23,
    like: ['oranges', 'almonds', 'banana'],
    address :{
        country: 'india',
        state: 'bihar',
        city : 'ara'
    }
}
person.email = 'sanjeevsingh.ss@gmial.com';
// console.log(person.firstname);
// console.log(person.address.city);

// destructure variable
const {firstname, lastname, address,like}=person;
// console.log(firstname,lastname,address.city, like[1] );


// make todo  {here each element of array is an object}
const todos = [
    {
        id:1,
        text: 'meeting with boss',
        isCompleted: true
    },
    {
        id:2,
        text: 'make youtube vidios',
        isCompleted: false
    },
    {
        id:3,
        text: 'Go to home',
        isCompleted: true
    },
]

// console.log(todos[1].text);

// converting above todos into json so that it can send to the sever
// JSON is very similar to object in js only difference is that we can't use '' (single commas) and also we have to specify our key in ""

const todosJson = JSON.stringify(todos);
// console.log(todosJson);


// forEach, map and filter

// forEach
todos.forEach(element => {
    // console.log(element.id)
});

// another syntax of forEach
todos.forEach(function(element){
    // console.log(element.id, element.text, element.isCompleted);
})

// map {returns the array of determined object <eg- below return array of text obj>}
const todoText = todos.map(function(element){
    return element.text;
});

// console.log(todoText[0]);

// filter {returns the filter version of array of determined object <eg- here it returns array of isCompleted obj. but in filtered way i.e whose isCompleted is true}

const todoCompleted = todos.filter(function(element){
    return element.isCompleted === true;
});

// console.log(todoCompleted[0].text);


// 

const todoCompleted1 = todos.filter(function(element){
    return element.isCompleted === true;
}).map(function(element){
    return element.text
});
// console.log(todoCompleted1); //this return array of text element of the obj of filtered version 


// simple function
function addsum(v1 =1, v2=1){
    return v1+v2;
}

// console.log(addsum(51,51));

// arrow function 
const addsum1 = (v1=1, v2=1) =>{
    return v1+v2;
}
// console.log(addsum(51,51));
// another way of arrow function
const addsum2 = (v1=1, v2=1) => v1+v2; //here we don't need { return }
// console.log(addsum(51,51));


const addFive = v1 => v1+5; //for one parameter we don't need parenthesis also
// console.log(addFive(5));



// Object oriented programming 

// constructor function

// function personInfo(firstname, lastname, dob){
//     this.firstname = firstname;
//     this.lastname = lastname;
//     this.dob = new Date(dob);
//     this.dobYear =function(){
//         return this.dob.getFullYear();
//     }
//     this.getFullName = function(){
//         return `${this.firstname} ${this.lastname}`;
//     }
// }

const person1 = new personInfo('john','doe','2-1-2002');
//console.log(person1);  //this return object name person with given firstname, lastname and dob as key value
// console.log(person1.firstname) //this return firstname and dob of person1
// console.log(person1.dob.getDate());

// console.log(person1.dobYear());
// console.log(person1.getFullName());

// since we have declare or made our function inside personInfo 
// what we can do is we can declare both functin in prototype such that 
// it goes in protype value



// prototype way to defined function

function personInfo(firstname, lastname, dob){
    this.firstname = firstname;
    this.lastname = lastname;
    this.dob = new Date(dob);
  
}
// const person2 = new personInfo('john','doe','2-1-2002');

// personInfo.prototype.dobYear = function(){
//     return this.dob.getFullYear();

// }
// personInfo.prototype.getFullName = function(){
//     return `${this.firstname} ${this.lastname}`;

// }
// console.log(person2); // i recommend you to search more on protype oops in js

// console.log(person2.dobYear());
// console.log(person2.getFullName());


// another way of doing this i.e not like this--> personInfo function way or fucntion prototype way


// But by using class

// Class
class personInfo1{
    constructor(firstname, lastname, dob){
        this.firstname = firstname;
        this.lastname = lastname;
        this.dob = new Date(dob);
    }
    dobYear = function(){
        return this.dob.getFullYear();
    }
    getFullName = function(){
        return `${this.firstname} ${this.lastname}`
    }
}
const person2 = new personInfo1('john','doe','2-1-2002');

// console.log(person2.dobYear());
// console.log(person2.getFullName());

