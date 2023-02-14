// first of all we make a directory name tut63.js
// then we make index.js
// then we create server by the help of (about page ) of official node.js site 
// then we make another html page as given below like home, about, services and contact 
// then using if else statement we create custom backend like when user click on about then we serve about.html page etc.
// but for custom backend we use another node.js module called express.js in future...

const http = require('http')
const fs = require('fs');
// const { url } = require('inspector');

const hostname = '127.0.0.1';  //this is your local host
const port = 3000;      //any arbitrary port no:
const home = fs.readFileSync('./index.html');
const about = fs.readFileSync('./about.html');
const services = fs.readFileSync('./services.html');
const contact = fs.readFileSync('./contact.html');

server = http.createServer((req, res)=>{
    console.log(req.url);  //using this we can go to different pages like home about etc... do your self 127.0.0.1/home or /services and check here what happens.
    url = req.url;
    
    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/html');
    if (url=='/')
    res.end(home);
    else if (url == '/about')
    res.end(about);
    else if (url == '/services')
    res.end(services);
    else if(url == '/contact')
    res.end(contact);
    else 
    {
        res.statusCode =404;
        res.end("<h1>Content not found</h1>");
    }
});

server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
  });

