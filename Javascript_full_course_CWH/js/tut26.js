// inheritane in js
// this is es 6 and it is recommend we will use this kind of interitance  
// it is similar to other programing language like cpp, python etc

class Employee{
    constructor(givenName, givenSalary, givenExperience){
        this.name = givenName;
        this.salary = givenSalary;
        this.experience = givenExperience;
    }
    slogan(){
        return `this is the best company to work with ${this.name}`;
    }
    static add(a, b){ //this is static function inside class, no need to create object of class to call this function or method
        return a+b;
    }
    dateOfJoining(){
        return 2022 - this.experience;
    }
}

let em1 = new Employee('sohan',30000, 2);
console.log(em1.dateOfJoining());

// now  create a class programmer that inherit the properties of Employee class

class programmer extends Employee{
    constructor(givenName, givenSalary, givenExperience,language, github){
        super(givenName, givenSalary, givenExperience);
        this.language = language;
        this.github = github
        
    }
    favLanguage(language){
        if (language=='python') return 'python';
        else return 'javaScript';
    }
    static multiply(a, b) {return a*b;}
}

const p1 =new programmer('mohan',5000, 2,'java','sanjeev567');
console.log(p1.favLanguage('python'));
console.log(p1.github)