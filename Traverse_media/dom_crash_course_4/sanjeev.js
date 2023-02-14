// this is written or inspired by different approaches of doing things like addingItem removingItem and filtering item by sanjeev


// here we apending li inside ullist by grabing input tag of form on submiting the form
var ulList = document.getElementById('items');
var form = document.getElementById('addForm');
var filter = document.getElementById('filter');

form.addEventListener('submit',addItem);

function addItem(e){
    e.preventDefault();  

// grab input from form with id='item'
item = document.getElementById('item').value;

// create li 
li = document.createElement('li');
// set li class name
li.className = 'list-group-item';

// append textNode inside li
li.appendChild(document.createTextNode(item));

// create button
btn = document.createElement('button');
// set btn class name
btn.className = 'btn btn-danger btn-sm float-right delete';

// set inner text of btn
btn.innerText ='X';


// append button inside li
li.appendChild(btn);

// append li inside ulList
ulList.appendChild(li);

}

// this is done by sanjeev (traverse media apply eventlistner inside the event listener form.addEventListener and define fn outside form that)
ulList.addEventListener('click',deleteItem);

function deleteItem(e){
    e.preventDefault();
    btn = document.querySelector('.delete');
    if(confirm('are you sure')){
        btn.parentNode.remove();
    }
}

// filter elements
filter.addEventListener('keyup',filterItem);

function filterItem(e){
    e.preventDefault();
    searchInp = e.target.value.toLowerCase();

    // grabing all the li inside ulList
    allLi = ulList.getElementsByTagName('li'); //since allLi is htmlcollection so we convert it to an array
    Array.from(allLi).forEach(function(item){
        // if(item.toLowerCase.value == searchInp)
        var itemName = item.firstChild.textContent;
        // here we match each index of itemName to searchInp if match then display block otherwise display none
        if(itemName.toLowerCase().indexOf(searchInp) != -1){
            item.style.display = 'block';
        }
        else 
        item.style.display = 'none';
    })

}




// V.V.I - whenever we need to apply eventListener we apply it on parent element
//eg- to delete li from the ulList we apply eventListener on ulList not on button
// similarly to add new item we apply eventListener on form not on submit button