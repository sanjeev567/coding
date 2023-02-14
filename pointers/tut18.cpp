//<--------------Dynamically allocation of memory in c++-------------->

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int *q = new int; //the way to create a single variable dynamically of int type.
    *q=10;
    cout<<"value of p is: "<<*q<<endl;
    delete q;

    int *p =new int[10];  //the way to create an array dynamically.
     for (int i=0; i<5; i++){
        *(p+i)=i+1;
    }
    for (int i=0; i<5; i++){
        // printf("value of *q[%d] is:%d\n",i,*(p+i));
        cout<<"value of *p["<<i<<"] is: "<<*(p+i)<<endl;

    }
    delete[]p;  //the way to delete an array in c++
}