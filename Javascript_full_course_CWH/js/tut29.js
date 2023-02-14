console.log("this is callbacks tutorial");
// callback means functino inside functon which hold or stop one function to let other execute then it will executes

// let we make two functions name
// enrollStudent(student)
// getStudent()

let students = [
  { name: "sanjeev", subject: "web development" },
  { name: "rohan", subject: "machine learning" },
];

function enrollStudent(student, callback) {
  setTimeout(() => {
    students.push(student);
    callback();
  }, 3000);
}

function getStudent() {
  setTimeout(() => {
    let str = "";
    students.forEach((element) => {
      str += `<li>${element.name} </li>`;
      document.getElementById("callbackImp").innerHTML = str;
    });
  }, 1000);
}

let newStudent = {
  name: "sunny",
  subject: "maths",
};
enrollStudent(newStudent, getStudent);
getStudent();

// if we remove callback from enrollStudent then the newly student created sunny will not reflect in the dom
// because till the time getSudent() is already executes
// you should do experiment like remove callback from enroll and newStudent object then invert timeOut value of
// both the function and see the effect

// So callback do is it bind or hold the function (here getStudent) untill the enrollStudent function get executed.
// i.e once enrollStudet push the newly created student then only getStudent() can execute.
