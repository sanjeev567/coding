//<-----------------function pointer--------------->
#include<stdio.h>

int Add( int a, int b){
    return a+b;
}

int main(){
    int c;
     int (*p)(int, int);  // the return type and arguement must be same as we declare above when making fn.
    //  p=Add; this will also work fine as we know earlier that an array related with pointer.
    p=&Add;  //now p --> Add (p will point to to Add)
    // c=*p(2,3);  -->declaring a function that would return int*;
    //we need to use paranthesis inorder to indicate compiler that it is a pointer function.
    c=(*p)(2,3);  // pointer fn called;
    // c=p(2,3);  pointer fn called this will same as above.
    printf("%d\n",c);
}