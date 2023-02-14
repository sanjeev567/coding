// promises in js
/*
Promises - Best video ever on promises  {either resolve means satisfied or reject means not good or may be in pending means till the time you are watching the video}
    - resolve
    - reject
    - pending
*/

function func1(){
    return new Promise(function(resolve, reject){
        setTimeout(() => {
            const error = true;
            if(!error){
                resolve();
                console.log('your promises has been resolved');
            }
            else {
                reject('your promises has been rejected !');
            }
        }, 2000);
    })
}
func1().then(function(){
    console.log('Hurrey ! our promises get resolved ');
}).catch(function(error){
    console.log('Sorry bro your promises is rejected !'+ error);
});
/*
if func1 promises resolve then it will print then function 
 if func1 promises get rejected then it will print catch funciton with the error message that we pass inside reject(error)
simply if func1 resolve then resolve will be callback
if func1 get rejected then reject fn will be callback
*/