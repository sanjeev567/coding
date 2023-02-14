// prototype --> means its feature which is already been there or created already and we also can create 
// it is recommended that we should not change object.prototype we should define our own prototype of the 
//object that we created either constructor, array or something else

console.log("This is tutorial 28");

// Object literal : Object.prototype
let obj = {
    name: "harry",
    channel: "Code With Harry",
    address: "Mars"
}

function Obj(givenName){
    this.name = givenName
}

Obj.prototype.getName = function (){
    return this.name;
}

Obj.prototype.setName = function (newName){
  this.name = newName;
}

let obj2 = new Obj("Rohan Das");
console.log(obj2);
 