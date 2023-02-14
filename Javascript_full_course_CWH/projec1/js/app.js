console.log("Welcome to app.js");
showNotes();
// if user adds a note add it to the localStorage...
let addBtn = document.getElementById('addBtn');
addBtn.addEventListener('click', function (e) {

    let addTxt = document.getElementById('addTxt');
    let addtitle = document.getElementById('title');
    let notes = localStorage.getItem('notes');

    if (notes == null) {
        notesObj = [];
    }
    else {
        notesObj = JSON.parse(notes);

    }
    myObj={
        title : addtitle.value,
        text : addTxt.value
    }
    notesObj.push(myObj);
    localStorage.setItem('notes', JSON.stringify(notesObj));
    addTxt.value = '';
    title.value = '';
    console.log(notesObj);
    showNotes();
});

// to show cards or your notes box...
function showNotes() {
    let notes = localStorage.getItem('notes');

    if (notes == null) {
        notesObj = [];
    }
    else {
        notesObj = JSON.parse(notes);

    }
    let html = '';
    notesObj.forEach(function (element, index) {
        html += `
    <div class="notesCard my-2 mx-2 card" style="width: 18rem;">
    <div class="card-body">
      <h5 class="card-title">${element.title}</h5>
      <p class="card-text"> ${element.text}</p>
      <button id="index" onClick="deleteNote(this.id)" class="btn btn-primary">Delete note</button>
    </div>
  </div>
    `
    });
    var notesElem = document.getElementById('notes');
    if (notesObj.length != 0) {
        notesElem.innerHTML = html;
    }
    else {
        notesElem.innerHTML ='nothing to show...'
        
    }
}
// deleting a note
function deleteNote(index){
    // console.log("i am deleting",index);

    let notes = localStorage.getItem('notes');
    if (notes==null) {
        notesObj =[];
    }
    else{
        notesObj = JSON.parse(notes);
    }
    notesObj.splice(index, 1);
    localStorage.setItem('notes',JSON.stringify(notesObj));
    showNotes();
    
}


// add searching in our notes
let search = document.getElementById('searchTxt');

search.addEventListener('input',function(){
    // console.log('i am searching...');
    let inputVal = search.value;
    let notesCard = document.getElementsByClassName('notesCard');
    Array.from(notesCard).forEach(function(element){
        let cardTxt = element.getElementsByTagName('p')[0].innerText;
        if(cardTxt.includes(inputVal)){
            element.style.display = "block";
            
        }
        else{
            element.style.display = "none";

        }
    })


})
// further improvements
/*
1. add title to each notes
2. add feature to mark notes as important
3. separate notes by user name
4. host and sync with web server...  //where you can add notes in databses not localstorage...
5. think yourself if any...

*/