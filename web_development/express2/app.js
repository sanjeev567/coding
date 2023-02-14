const express = require('express');  
const app = express();  
const path = require("path");

const port = 80; 

app.use('/static', express.static('static')); 

    app.set('view engine', 'pug');

    app.set('views', path.join(__dirname, 'views'));


app.get(port, ()=>{
    console.log(`server is running at ${port}`);
})
