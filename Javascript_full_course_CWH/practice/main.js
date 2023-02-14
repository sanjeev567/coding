const contactUs = document.querySelector('.navbar');

const li = document.createElement('li');
const a1 = document.createElement('a');
const a1_content = document.createTextNode("newAdded");
li.className = 'new-li';
li.setAttribute('id', 'new-1');
a1.href = '#';
a1.appendChild(a1_content);
li.appendChild(a1);
const ul = document.querySelector('.navbar').firstElementChild.appendChild(li);



