console.log('we are at tut18.js')
let btn = document.getElementById('btn');

btn.addEventListener('click',func1);
btn.addEventListener('dblclick',func2);
btn.addEventListener('mousedown',func3);  //mousedown is basically accepts left click right click or mid btn of mouse


function func1(e){
    console.log('you are in click',e);
     e.preventDefault();  //this prevent the event to occur (like on clicking the submit button this provokes)

}
function func2(e){
    console.log('you are in doubleclick',e);
    e.preventDefault();  

}
function func3(e){
    console.log('you are in mousedown',e);
    e.preventDefault();  

}
// document.querySelector('.listdul').addEventListener('mouseenter', function () {
//     console.log("you are in enter in listdul")
// })
// document.querySelector('.listdul').addEventListener('mouseleave', function () {
//     console.log("you left listdul")
// })

// by moving mouse you can see the window to change the color of the window 
// offsetX and offsetY are used in game to change the color...
document.querySelector('.listdul').addEventListener('mousemove', function (e) {
    console.log(e.offsetX, e.offsetY);
    document.body.style.backgroundColor = `rgb(${e.offsetX}, ${e.offsetX}, ${e.offsetY})`
})