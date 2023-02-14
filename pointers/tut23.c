//<------------------------pointer as a function return-------------->
#include<stdio.h>
#include<stdlib.h>
                                                                                        
// int* add (int *a, int* b){                                                           |
//     int c= (*a)+(*b);                                                                |
//     printf(" the address of a is: %d\n",&a);  //this will gives address of a of add  |
//     printf(" the value of a is: %d\n",a);     //this will gives address of a of main  | this will mot work.
//     printf(" the value of *a is: %d\n",*a);   //this will gives value of a of main;
//     return &c;
// }
int* add (int *a, int* b){ // creating a fn which return a pointer
    int* c= (int*) malloc(sizeof(int));   //dynamically allocated memory using malloc
    *c=(*a)+(*b);
    return c;
}



int main(){
    int a=3, b=2;
    int(*ptr) = add(&a,&b);  //call by reference
    printf("sum of a and b is: %d\n",(*ptr));   //this will work fine
    return 0;
}