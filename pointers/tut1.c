//<---------------introduction to pointers------------>
// pointers is a type of variables that stores address of another variable of same type.

#include<stdio.h>

void main(){
    int a;
    int *p; //here i make pointer variable of integer type which points a;
    p=&a;
    printf("a= %d\n",a);
    printf("address of a = %d\n",p);
    //here we get garbage value of a. and any location of a ie p
    *p=10;
    printf("updated value of a=%d\n",a);
    printf("updated value of a=%d\n",*p); //*p means a (dereferencing operator--> properties of pointer.)
    
    printf("address of a = %d\n",p);


}