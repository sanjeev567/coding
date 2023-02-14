// here we see promises as callback

let students = [
  { name: "sanjeev", subject: "web development" },
  { name: "rohan", subject: "machine learning" },
];

function enrollStudent(student) {
  return new Promise(function (resolve, reject) {
    setTimeout(() => {
      resolve();
      students.push(student);
      const error = false;
      if (!error) {
      } else {
        reject();
      }
    }, 3000);
  });
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

enrollStudent(newStudent)
  .then(function () {
    getStudent();
    console.log('student has been enrolled')
  })
  .catch(function () {
    console.log("some error has been found !");
  });

  /*
  function inside then run as - resolve();
  function inside catch run as - reject();
  */

