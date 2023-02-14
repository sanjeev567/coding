// print all the links containing python in it
const str = "python";

const a = document.links;
Array.from(a).forEach(ele =>{
    if(ele.href.includes('google')){
        console.log(ele.href);
    }
})