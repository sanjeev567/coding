//<---------------qsort ------------>
// this can sort any type of array either it is int, char etc.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b ){
    int A = *((int*)a);
    int B = *((int*)b);
    return A-B;   //this >0 so return in ascending order
    // return B-A;     //this <0 so return in descending order
    // return abs(A)- abs(B);
}
int main(){
    int i, A[]= {-31,22,-1,50,-6,4};
    qsort(A,6,sizeof(int), compare);
    for ( i = 0; i < 6; i++)  printf("%d ",A[i]);
    
    
}