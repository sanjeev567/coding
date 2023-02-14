#include<stdio.h>

int main(){
    int a=10;
    int *p=&a;
    printf("value of a is:%d\n",a);
    printf("value at address p is: %d",*p);
    printf("address of a is: %d\n",p);

    //pointers Arithmetics
    printf("address of a is: %d\n",p+1); //here we get +4 of p bcoz p is of interger type which is containing 4 bytes of memory.
    printf("value at address p+1 is: %d",*(p+1));   //this will print some garbage value as we do not assign any value at P+1.
    
}