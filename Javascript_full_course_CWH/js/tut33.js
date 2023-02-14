console.log('welcome to tut33 here we will see fetch api');

let myBtn = document.getElementById('myBtn');


let content = document.getElementById('content');



// GET METHOD
// getData fn
// the this that we achieve by writing xhr method and all the related function of it like xhr.load, xhr.open ; we are done with the below line only
// simply remember fetch takes two then because it uses two promises inside it.
// function getData(){
//     url ='sanjeev.txt';
//     fetch(url).then((Response)=>{
//         return Response.text();
//     }).then((data)=>{
//         console.log(data);
//     })
// }
// function getData(){
//     url ='https://api.github.com/users';
//     fetch(url).then((Response)=>{
//         return Response.json();
//     }).then((data)=>{
//         console.log(data);
//     })
// }

// POST METHOD
function postData(){
    url ='https://dummy.restapiexample.com/api/v1/create';
    data = {"name":"dfsdalu980998","salary":"123","age":"23"}; //the error may come due to same name present in database kindly change name and try again
    params = {
        method: 'post',
        headers: {
            'Content-Type': 'application/json'
        },
        body: data
    }
    fetch(url,params).then(response => response.json())
    .then (data => console.log(data));
}


// getData();
// console.log('the above getdata running async way means this log will get printed before the getdata fn return data actually from the file sanjeev.txt')
postData();