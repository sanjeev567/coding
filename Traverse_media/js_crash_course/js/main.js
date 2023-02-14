// Dom manipulation


/* Element selector
     this is of two type
    1. single element selector (getElementById(), querySelector())
    2. Multiple element selector (getElementByClassName(),getElementByTagName(), querySelectorAll())
*/
// come to our work --> let's change some dom element 


// remove ul with class="items"

// ul = document.querySelector('.items');

//ul.remove(); //this remove first item element

// ul.lastElementChild.remove();
// btn = document.querySelector('.btn');
// btn.style.color = 'red';
// btn.style.background = 'yellow';
// btn.addEventListener('click',(e) =>{
//     e.preventDefault();
//     document.querySelector('#my-form').style.background = 'yellow';
//     document.querySelector('body').classList.add('bg-dark'); //here we add bg-dark class to adhere the css property of that
//     document.querySelector('.items').children[0].style.color = 'green';
// })



// this is very important
// saving userList <name, email>  in the bottom part of the dom where item are are right now
// for that we first remove ul with class='item'


// first of all we grab all the element from the dom i.e form , name field , email field and ul with calss users
const myForm = document.querySelector('#my-form');
const nameInp = document.querySelector('#name');
const emailInp = document.querySelector('#email');
const msg = document.querySelector('.msg');
const userList = document.querySelector('#users');

myForm.addEventListener('submit', formSubmit);

function formSubmit(e) {
    e.preventDefault();

    // msg.classList.add('error')
    if (nameInp.value === '' || emailInp.value === '') {
        //alert('Enter the fields')//this is old method we will do some latest
        msg.classList.add('error')
        msg.innerHTML = 'please Enter the required fields !';
        setTimeout(() => {
            msg.remove();
        }, 3000);
        // console.log('success');
    }
    else {
        //below if are optional this check whether email field contains @ or not
        // if (((emailInp.value).toString()).includes('@')) {

            const li = document.createElement('li');
            //li.appendChild(document.createTextNode(`${nameInp.value} ${emailInp.value}`)); //written by traverse media
            li.innerText = `${nameInp.value} ${emailInp.value}`;  //written by me

            userList.appendChild(li);

            // clear data 
            nameInp.value = '';
            emailInp.value = '';
        }
        // else {
        //     msg.innerHTML = 'Email field must contain @ !';
        //     setTimeout(() => {
        //         msg.remove();
        //     }, 3000);
           

        // }





}
