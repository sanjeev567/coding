//this code is taken from node.js official site  of about page.
const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');  //inside " " you have to write and text/html to load page in the server.
  res.end(`<!DOCTYPE html>   
  <html lang="en">
  <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>Height, width, border, background</title>
      <style>
          #firstpara{
              background-color: rgb(234,23,43);
              height: 100px;
              width: 400px;
              border: 4px solid green;  /*Instead of writing below three line this line enough*/
              /* border-width: 4px;
              border-color: green;
              border-style: solid; */
              border-radius: 13px;
          }
          #secondpara{
              background-color: rgb(194, 157, 160);
              height: 100px;
              width: 400px;
              border-left: 4px solid rgb(234, 234,23);
              border-top: 4px solid rgb(2, 19, 32);
              border-right: 4px solid rgb(217, 8, 224);
              border-bottom: 4px solid rgb(8, 8, 8);
             border-top-right-radius: 12px;
             border-top-left-radius: 5px;
             border-bottom-left-radius: 18px;
             border-bottom-right-radius: 18px;
              
          }
      #thirdpara{
          height: 500px;
          width: 600px;
          background-color:rgb(34,234,241);
          background-image: url('https://cdn.pixabay.com/photo/2013/08/20/15/47/poppies-174276__340.jpg');
          border: 2px solid red;
          background-repeat: no-repeat; /*you can repeat it in x and y or x or y direcotion only*/
          /* background-position: center center; */
          /* background-position: top center; */  /*first cols for x and second for y */
          
          background-position: top center;
  
      }
  
      </style>
  </head>
  <body>
      <h3>this is first box</h3>
      <p id="firstpara">this is first para</p>
      <h3>this is second box</h3>
      <p id="secondpara">this is second para</p>
      <h3>this is third box</h3>
      <p id="thirdpara">this is third para</p>
      
  </body>
  </html>`);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});

//repl -> read evalute print loop 
//( when we wrtie just node and start computing value like a=8 , b=9 and a+b it first reads the value then store then print and again ready for next work that is loop)
// _(underscore means previous variable a=5 ; _+5 now a becomes 10) give the previous result .
// like matlotlip ans
// double tab to open all global veriable