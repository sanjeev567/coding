// welcome to Object oriented programming in js

let Obj ={
    Name: 'sanjeev',
    class: 'btech 3rd year',
    roll: '19cs48',
    design: 'web developer',
    greet: function(){
        console.log(`hello ji kaise ho saare ! this is ${this.Name}`);
    }
};
// console.log(Obj.Name);
console.log(Obj.greet());

// creating constructor for car
function cars(givenName, givenTopSpeed){
    this.Name = givenName;
    this.topSpeed = givenTopSpeed;
    this.run = function(){
        console.log(`${this.Name} is running with speed ${this.topSpeed}`);
    }
}

let car1 = new cars('maruti', 189);
let car2 = new cars('Dzire', 200);
console.log(car2);

// this is why we do oop it allows us to write generic code which is efficient if we need to change in future and also we write less code than procedural.
