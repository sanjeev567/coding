console.log('complete Ajax tutorial in one video !');
// what is ajax and why we should use it 
// ajax a kind of technique used to write asyncronous javaScript code 
// ajax allows us write async code in js 
            // used to request or respond small chunks of code 
    
            // why use AJAX
            /*
            -* No need to reload page
            -> it save network bandwidth (by reloading or fetching small chunks of data that required)
            -> Better user experiece
            -> very interactive
            */
            


let fetchData = document.getElementById('fetchData');

fetchData.addEventListener('click', bttonClickHandler);

function bttonClickHandler(){
    console.log('you have click the button fetchData');

    // insstantiate an xhr object
    const xhr = new XMLHttpRequest();

    // open xhr object
    //xhr.open('GET','https://jsonplaceholder.typicode.com/todos/1',true)   //xhr.open('request_method', 'file_name', 'true or false (true means async and false means sync')


    // way to open POST request
    xhr.open('POST','https://dummy.restapiexample.com/api/v1/create',true)
    xhr.getResponseHeader('Content-type','application/json');
    // onprogress
    xhr.onprogress = function(){
        console.log('on progress');
    }
    // onreadystatechange is old method to see the different state while loading file there are 5 state you can go to the morzila to see that
    // we barely use it
    // xhr.onreadystatechange = function(){
    //     console.log('this is now on state',this.readyState)
    // }
    // what to do when response are ready
    xhr.onload = function(){
        if(this.status  ===200){

            console.log(this.responseText);
        }
        else{
            console.log('some error found !');
        }
    }

    // send the request
    params =`{"name":"test","salary":"123","age":"23"}`;
    xhr.send(params); //params parameter we pass when we call post request

    // now this will show data in the console whatever contains sanjeev.txt otherwise return error

}

let popBtn = document.getElementById('popBtn');
popBtn.addEventListener('click', pophandler);

function pophandler(){
    const xhr = new XMLHttpRequest();

    // open xhr object
    xhr.open('GET','https://jsonplaceholder.typicode.com/todos/1',true)   //xhr.open('request_method', 'file_name', 'true or false (true means async and false means sync')


    xhr.onload = function(){
        if(this.status  ===200){
            let obj = JSON.parse(this.responseText);
            console.log(obj);
            let ulList = document.getElementById('list');
            let str ='';
            for (key in obj){
              str+=`<li>${obj[key]}</li>`;
    //   further improovement can be done using table and all the data fetch in table format 

            }
            ulList.innerHTML = str;
        }
        else{
            console.log('some error found !');
        }
    }

    // send the request
    xhr.send();

}

