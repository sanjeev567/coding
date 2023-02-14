const express = require('express');

const app = express();
const port ="80";

app.get('/', (req, res)=>{
    res.status(200).send("this is my home page with express app: ");
});
app.get('/about', (req, res)=>{
    res.send("this is my about page with express app: ");
});
app.post('/about', (req, res)=>{
    res.send("this is my post request of about page with express app: ");
});
app.get('/this', (req, res)=>{
    res.status(404).send("this page is not found: ");
});

app.listen(port, ()=>{
    console.log(`server is listening on port:${port}`);
});