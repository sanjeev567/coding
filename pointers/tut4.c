#include<stdio.h>

void swap_numbers(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}
void swap_numbers_reference(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

int main(){
    int x=5,y=6;
    
    // int temp=x;
    // x=y;
    // y=temp;

    // printf("value of x is: %d\n",x);
    // printf("value of y is: %d\n",y);

//here i'm using function .......
//              <--------------Basically call by value-------------->
    swap_numbers(x,y);  //this will not change the value of x and y.
    printf("value of x is: %d\n",x);
    printf("value of y is: %d\n",y);

    //Here i'm using call by reference..
    swap_numbers_reference(&x,&y);  //this will change the value of x and y.
    printf("value of x is: %d\n",x);
    printf("value of y is: %d\n",y);



}