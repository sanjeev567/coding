console.log('you are in tut17.js');

// here we see different types of events in js


// first of all we get the element using getElementById -> then add event lisner 
// addEventListner takes two argument first event, second a function which takes one argument on which
// various method will  fire like target, offsetX, offsetY, ....

document.getElementById('first-heading').addEventListener('click', function (e) {
    let variable1;
    console.log("you have clicked the heading...")
    // console.log(e);
    variable1 = e.target;  //gives you element that you have clicked on.
    variable1 = e.offsetX //how in in X you had clicked.
    variable1 = e.offsetY //how in in Y you had clicked.
    variable1 = e.clientX
    console.log(variable1);
    // location.href ='//www.google.com'; //to redirect on clicking to heading

});
