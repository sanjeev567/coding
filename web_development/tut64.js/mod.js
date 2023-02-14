

function average(arr){
    sum=0;
    arr.forEach(element => {
        sum+=element;
    });
    return sum/arr.length;
}

//module.exports = average;  //try to run before  this code see what is difference.
module.exports ={
    avg1: average,
    name: "sanjeev",
    roll:  19105126015
}
module.exports.code = "19cs48";  //this is also an object named code.