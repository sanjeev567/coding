// Exercise we have to print all the links containing a certain text that we need 
// eg- we have to print all the links containing harry in that..


// let suppose the text is 'python'
let str = 'python';
let links = document.links;

let href;
Array.from(links).forEach(function (element) {
    href = element.href;
    if (href.includes(str)) {
        console.log(href);
    }
});

// another way 
let links1 = document.links;
let str1 = 'google';
function strdetect(element){
    let href1 = element.href;
    if(href1.includes(str1))
    {
        console.log(href1);
    }
}

Array.from(links1).forEach(strdetect);


// another method
let a = document.links.length;

for(let i =0; i<a; i++){
        let linkall = document.links[i].href;
        if(linkall.includes('google')){
            // console.log(document.links[i].href);
            console.log(linkall);
        }

    }
