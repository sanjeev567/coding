console.log('welcome we are in tut25')

// create an Object proto
const proto = {
    slogan: function(){
        return `this is the best it company in the world !`;
    },
    changeName: function(newName){
        this.name = newName;
    },
    changeAddress: function(newAddress){
        this.address = newAddress;
    }
}

// creating object of proto
const objProto = Object.create(proto);
objProto.name = 'sonam';
objProto.role = 'tiktok star';
objProto.salary = 300000;
objProto.address = 'akhgaon bazar';

objProto.changeName('Ruby')
// console.log(objProto.slogan());

// console.log(objProto.name);
// objProto.changeAddress('maner maharaj nagar patna');
// console.log(objProto.address)
// console.log(objProto.role)
// console.log(objProto.salary)

// another way of creating object this is actually es5 script and we will use es6 now 

const anObj = Object.create(proto,{
    Name: {value: "sanjeev", writable: true},
    address: {value: 'akhgaon bazar', writable: true}
});

// create a constructor Employee

function Employee(name,salary, experience){
    this.name = name;
    this.salary = salary;
    this.experience = experience;
}

let saho = new Employee('saho', 9000, 2);
Employee.prototype.slogan = function(){
    return `Best place to work for fresher with regards ${this.name}`;
}
console.log(saho.slogan());