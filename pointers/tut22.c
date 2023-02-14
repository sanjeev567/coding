#include<stdio.h>
#include<stdlib.h>

int add (int *a, int* b){
    int c= (*a)+(*b);
    printf(" the address of a is: %d\n",&a);  //this will gives address of a of add
    printf(" the value of a is: %d\n",a);     //this will gives address of a of main
    printf(" the value of *a is: %d\n",*a);   //this will gives value of a of main;
    return c;
}

int main(){
    int a=3, b=2;
    int c=add(&a,&b);  //call by reference
      printf("print the address of a is: %d\n",&a);
    printf("sum of a and b is: %d\n",c);
    return 0;
}