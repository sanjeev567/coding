//<------------------pinters and multidimentional arrays-------------->
#include<stdio.h>

int main(){
    int A[5]={2,4,6,8,10};
    int* p=A;
    // A=p;  --> this will throw a compiler error.
    // here A will not either increment or decrement it or the value of A will also not change.
    // p++
    // *p=20;  -->this will change value at p ie A[0].
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
}