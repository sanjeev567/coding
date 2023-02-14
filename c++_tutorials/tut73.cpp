//<-------------Funtion objects (functor)---------------->

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;



int main(){
    //Function object: - function wrapped with class such that it is 
    //available as an object
    int arr[] ={2,3,1,5,4,7,6,9,11,13};
    // sort(arr,arr+10);   -->this will sort in increasing order
    sort(arr,arr+10, greater<int> ());   //this will sor 

    for (int i =0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}