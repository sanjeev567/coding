const express = require('express');  //here we import exress module or packages into express variable
const app = express();  //here we created an app using express module.

const port = 80; //setting port (at port 80 we do not require to give port no exprlicity i.e why we give here)

// for serving static files...
//static files are those files which we want to put them publically means 
//if any one get the link of that they can get access to it or download things if there.

app.use('/static', express.static('static')); //this line of code is about static file in js which can be served by input in browser localhost/singh/index.js
    // ^ (folder)(changeble)         ^(fn or keyword which make page static this can't be changed)


    // set the template engine as pug -->to know about template engine you can read pug documentation.
    //you don't have to remember all the thing just go to documentation page and do copy & paste.
    app.set('view engine', 'pug');

    //set view directory
    app.set('views', path.join(__dirname, 'views'));  //here we using path module join method




    //do check demo.pug file and also go to read documentation of pug then you will find that template written inside /demo.pug file.
app.get("/demo",(req, res)=>{ 
    res.statusCode(200).render('demo', { title: 'Hey Sanjeev', message: 'Hello there! whats up is all okay' })

});


app.get("/",(req, res)=>{  //creating a custom page on which click which page will be serve.
    res.send("This is home page of my first app using express module:")
});

app.get("/about",(req, res)=>{ 
    res.send("This is about page my first app using express module:")
});

app.post("/about",(req, res)=>{ 
    res.send("This is my post request of about page of my first app using express module:")
});

app.get("/services",(req, res)=>{ 
    res.send("This is my first app using express module:");
});
app.get("/contact",(req, res)=>{ 
    res.send("This is my first app using express module:");
});

app.get("/this",(req, res)=>{ 
    res.status(404).send("This page is not found!");
});

app.listen(port, ()=>{  //here we listen the respond of the web site
    console.log(`This app is running successfully on Port ${port}`);
});

//at here
// you should know static file and why we use static files.
// template in pug 
