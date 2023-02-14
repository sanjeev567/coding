#include<stdio.h>
#include<stdlib.h>

int add(int a, int b){
    int c=(a+b);    //a, b and c are local to add here.
    printf("print the address of a is: %d and b is: %d in add\n",&a, &b);
    return c;
}

int main(){
    int a=2;
    int b=3;        //a b and c are local to main here
    int c= add(a,b); // call by value;               //here value of a and b of main is copied to a and b of add;
    //this can we check by printing address of both a and both b;
    printf("print the address of a is: %d and b is: %d in main\n",&a, &b);
    printf("sum of a and b is: %d\n",c);
    return 0;
}