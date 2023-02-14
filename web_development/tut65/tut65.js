console.log("this is tut65.js tutorial... and this is the best tuorial ever");
// as we write npm init in the terminal it ask some question and then create a .json file which contains all the
// info about this module and package which we require (called dependencies).

//what does slugify 1.2.3 means 
//  it means slugify[major].[minor].[patch or bug_fixes]
//major cantains major changes like removal of some fns or addition of some another fns and classes.
//minor means addition of some fns.
// patch means removal of some bugs which is out there.

// if we install some packages or module then that will be written inside dependencies in .json file.
//also if we uninstall some packages or module then that will be removed from the dependencies.
//we can install specific version using command--> npm install <package_name>@1.3.5

// <---node_modules--> list of all the packages which we install and also some dependent packages automatically installed are out there


//<--nodemon--> used to reflects changes automatically without again loading of server.
//way to install it  1) npm install nodemon --save-dev
//save-dev are another dependencies which will be written in package.json file which are required during development time not production time.

//2) npm install nodemon --global  --> this will install globally so that we can use it from anywhere in our computer.

// nodemon^2.3.3 this will install exactly same version
// <package_name~2.3.3 this will install the latest version 
// <package_name>2.3.3 this will install version greater than 2.3.3

// npm i --> will install all the dependencies packages which is written inside the package.json file.
//npm <package_name> view version   --> this will display the version of your package.