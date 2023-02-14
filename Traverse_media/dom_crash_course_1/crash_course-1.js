// there are lots of stuff but more of that we know already so only important one i noted here



// textContent vs innerText

 a = document.getElementById('h2-heading');
 //console.log(a.innerText);  // this doesn't show the entire text 

 //console.log(a.textContent)  //This will show whole text inside h2 even span display was nono


 a.style.borderBottom = '2px solid red';  //here we neeed to write style in camelCase type otherwise it will not work
 
//  getElementByClassName
ul_li = document.getElementsByClassName('ul-li-a');

console.log(ul_li[0].textContent);
// console.log(ul_li[3].textContent);  //so if we have multiple element with same class we can access them like this in array way
// ul_li[2].textContent = 'hello';
// ul_li[2].style.textDecoration = 'none';
// ul_li[2].style.fontSize = '26px';
// ul_li[2].style.backgroundColor = 'cyan';

// same way we can read/write/ manipulate getElementByTagName

// querySelector  {things how we can change our input }
// here doesn't work as above like array base bcoz querySelector is a single Selector 
// formItem = document.querySelector('input');
// formItem.value = 'winnnersanjeev';
// formItem1 = document.querySelector('input[type="submit"]');
// formItem1.value = 'Send';


// let's change our ul or li part 

// ulLi = document.querySelector('.ul-li-a');
// ulLi.style.color = 'red'
// ulLi = document.querySelector('.ul-li-a:last-child');
// ulLi.style.borderTop = '2px solid magenta';
// ulLi = document.querySelector('.ul-li-a:nth-child(1)');
// ulLi.style.borderTop = '2px solid grey';


// inorder to change style of each element we use loop
// ulLi = document.querySelectorAll('.ul-li-a');

// for(let i=0; i<ulLi.length; i++){
//     ulLi[i].style.textDecoration = 'none';
//     ulLi[i].style.fontSize = '2rem';
       
// }

// also we can use odd and even in the nth-child

odd = document.querySelectorAll('.ul-li-a:nth-child(odd)');
odd = document.querySelectorAll('.ul-li-a:nth-child(even)');

// for(let i=0; i<odd.length; i++){
//     odd[i].style.color = 'red';
// }


