//<-----------Arrays as a function arguements------------->
#include<stdio.h>


int sumofelements(int A[],int size){
    int i, sum =0;
    for (i=0; i<size; i++){
    sum+= A[i];

    }
    return sum;
}


int main(){
    int total,size;
    int A[]={1,2,3,4,5};
    size = sizeof(A)/sizeof(A[0]);   //here size means no of elements in A array.
    total= sumofelements(A,size);
    printf("sum of elements are: %d\n",total);



}