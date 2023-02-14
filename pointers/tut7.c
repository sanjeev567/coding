//<-----------Arrays as a function arguements------------->
#include<stdio.h>


int sumofelements(int A[]){
    int i, sum =0;
    int size = sizeof(A)/sizeof(A[0]);   
    printf("size of A in this function is: %d, and size of A[0] is: ",sizeof(A),sizeof(A[0]));
    /*
    here we find the output  above printf is--> 
    sizeof(A)--> 4 bytes which means it assume it as a *A[0] ie it just consider it as a base pointer and return its value as well.
    In the main if we look we find A[0]=1;
    therefore no of elements = sizeof(A)/sizeof(A[0])==1;
    hence it sum only base element of the array.
    */

    for (i=0; i<size; i++){
    sum+= A[i];

    }
    return sum;
}


int main(){
    int total,size;
    int A[]={1,2,3,4,5};
    printf("size of A in main function is: %d, and size of A[0] is: ",sizeof(A),sizeof(A[0]));
    total= sumofelements(A);
    printf("sum of elements are: %d\n",total);

    return 0;
}