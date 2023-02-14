// this is part 3 dom js

// button  = document.getElementById('button');


// one way of adding event listener
// button.addEventListener('click',function(){
//     console.log('123');
// })



// another way of adding eventListener 
// button.addEventListener('click', buttonClick);


// buttonClick function
// function buttonClick(e){
// console.log('1232');
// now we can do lot more what we had previously learn
// document.getElementById('header-title').textContent = 'changed'
// document.getElementById('items').style.color = 'red';
// console.log(e.target)  //this gives actual element where eventListener applied
// console.log(e.target.id)


// let's create a div element after ul.class = 'items' and output that in the dom using eventListener
//document.getElementById('output').innerHTML = '<h1>'+e.target.id+'</h1>'


//console.log(e.type);  //this prints type of eventListener


// clientX and clientY is print related to dom i.e where click happened
// console.log(e.clientX);
// console.log(e.clientY);

// offsetX and offsetY is related to the actual element on which eventListern is add on
// console.log(e.offsetX);
// console.log(e.offsetY);


// return true on pressing<key> + click else return false
// console.log(e.altKey);
// console.log(e.ctrlKey);
// console.log(e.shiftKey);

// }

// let's look some of other eventType

var button = document.getElementById('button');
// button.addEventListener('click',runEvent)
// button.addEventListener('dblclick',runEvent)
// button.addEventListener('mousedown',runEvent)
// button.addEventListener('mouseup',runEvent)

box = document.getElementById('box');
// mouseenter and mouseover both same for div class but if we have child element inside div and we go to hover over it then only over will fire
// basically mouseenter fires when we enter to div 
// but mouse over fires on both while entering to div also while going to child element 


// box.addEventListener('mouseenter',runEvent)
// box.addEventListener('mouseleave',runEvent)

// mouseleave  and mouseout are same like above discuss.
// mouseleave for div as well as child 
// mouseout for div only
// box.addEventListener('mouseover',runEvent)
// box.addEventListener('mouseout',runEvent)

// function runEvent(e) {
//     console.log('Event Type: ' + e.type);
// }


// we are now display to browser x and y position

// box.addEventListener('mousemove',runEvent)
// function runEvent(e) {
    // console.log('Event Type: ' + e.type);
//    output.innerHTML = ('<h3>MouseX: '+ e.offsetX+'</h3><h3>MouseY: '+e.offsetY+'</h3>');

// color changing display of box (you can make it to the body also )
// box.style.backgroundColor = 'rgb('+e.offsetX+','+e.offsetY+',40)'

// textInp = document.querySelector('input[type = "text"');
// form = document.querySelector('form');

// }


// 

textInp = document.querySelector('input[type = "text"');
form = document.querySelector('form');
select = document.querySelector('select');

// here we are reading the text whatever it is writing inside input tag type = text
// textInp.addEventListener('keydown',runEvent)  //invoke when key press down
// textInp.addEventListener('keyup',runEvent)   //invoke when key press up
//textInp.addEventListener('keypress',runEvent)   //invoke when key is pressed
//textInp.addEventListener('focus',runEvent)   // make active our input field
//textInp.addEventListener('blur',runEvent)   // make deactive our input field when click outside to input field
//textInp.addEventListener('cut',runEvent)   // invoke when you cut something in the input field
//textInp.addEventListener('paste',runEvent)   // invoke when you paste something in the input field

//textInp.addEventListener('input',runEvent)  //cut, paste or type anything to that element will litsen to that event
// select.addEventListener('change',runEvent) //invoke when selecting different options
// select.addEventListener('input',runEvent)


form.addEventListener('submit',runEvent) //add preventDefault to write on console (by default it submiting to external file which is not present here)
function runEvent(e) {
    e.preventDefault();
    console.log('Event Type: ' + e.type);
    // console.log(e.target.value);  

    // document.querySelector('#output').innerHTML = e.target.value;
}
