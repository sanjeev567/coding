//these are two modules which require here so we import this.
const http = require('http');
const fs = require('fs');

const textcontent = fs.readFileSync('tut41.html');   //here we reading our file synchronously

const server = http.createServer((req, res)=>{    //creating a server which  takes two arguement request and response do remember that
    res.writeHead(200, {'Content-type': 'text/html'});  //tell to our server that the file is of type html
    res.end(textcontent);  //show our files on the server

});

server.listen(8000,'127.0.0.1',()=>{  //here listening our page at the given url and port 80 
    // at port 80 we do not require to give port no with url, But at other ports we have to give port no. along with our url.
    console.log(`server listening at ${'127.0.0.1'} port no 80...`);
})

