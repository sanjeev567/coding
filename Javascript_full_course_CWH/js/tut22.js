// here we create an editable div which is different from CWH so you can go and watch if you want to follow along

console.log('welcome to tut22')
editdiv = document.querySelector('.edit-div');

let html = editdiv.innerHTML;

// add eventListener
editdiv.addEventListener('click',(e)=>{
    e.preventDefault();
    clickCount = document.getElementsByClassName('textar1').length;
    if(clickCount==0){
    editdiv.innerHTML = `<textarea name="text" class="textar1" id="text" cols="50" rows="5">${html}</textarea>`
    }

    // blur event 
    // let text1=document.getElementsByClassName('textar1');
    let textar1 = document.getElementById('text');
    textar1.addEventListener('blur',()=>{
        html = textar1.value;
       editdiv.innerHTML = textar1.value;
    })

})
