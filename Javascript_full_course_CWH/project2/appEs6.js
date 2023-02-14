console.log('we are now in es6 ')
/*
save it to local storage 
add delete and edit button 
add a scroll bar to the page in booklist */
// constructor
// constructor
function Book(Gname, Gauthor, Gtype) {
    this.name = Gname;
    this.author = Gauthor;
    this.type = Gtype;
}

class display {
    validate(bookObj) {
        if (bookObj.name.length < 2 || bookObj.author.length < 2) return false;
        else return true;
    }
    show(alertMode, msg) {
        let msgAlert = document.querySelector('.msgalert');
        msgAlert.innerHTML = `<div class="alert alert-${alertMode} alert-dismissible fade show" role="alert">
        <strong>${alertMode}!</strong> ${msg}
        <button type="button" class="btn-close" data-bs-dismiss="alert" aria-label="Close"></button>
      </div>`
        setTimeout(() => {
            msgAlert.innerHTML = '';
        }, 3000);
    }
    clear() {
        const addBookbtn = document.getElementById('addBookbtn');
        addBookbtn.reset();  // clear the field
    }
    add(bookObj) {
        let tableBody = document.getElementById('tableBody');
        let uiString = `<tr>
            <td>${bookObj.name}</td>
            <td>${bookObj.author}</td>
            <td>${bookObj.type}</td>
        </tr>`
        tableBody.innerHTML += uiString;


    }
}

// add event listerner on add book button
const addBookbtn = document.getElementById('addBookbtn');
addBookbtn.addEventListener("submit", addbooklist);

function addbooklist(e) {
    e.preventDefault();
    // console.log('we are inside')
    const bookName = document.getElementById('bookName').value;
    const authorName = document.getElementById('Author').value;

    // here we take all three type of book that we have i.e fiction, programming and cooking
    const Fiction = document.getElementById('Fiction');
    const programming = document.getElementById('Programming');
    const Cooking = document.getElementById('Cooking');

    // if conditional to get the checked value 
    let type;
    if (Fiction.checked) {
        type = Fiction.value;
    }
    else if (programming.checked) {
        type = programming.value;
    }
    else if (Cooking.checked) {
        type = Cooking.value;
    }
    const bookObj = new Book(bookName, authorName, type)
    // console.log(bookObj)
    let displayObj = new display();
    if (displayObj.validate(bookObj)) {
        displayObj.add(bookObj);
        displayObj.clear();
        displayObj.show('success', 'your book has been added successfully');

    }
    else {
        displayObj.show('danger', 'Sorry your book and author name should be greater than 2 character !');

    }


}