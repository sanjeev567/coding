#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);


   // int arr[n];  //we can't create dynamically array like this way;
//    int* A = (int*) malloc(n*sizeof(int)); //this will dynamically allocate memory 
//    for (int i = 0; i < n; i++)
//    {
//        A[i]=i+1;
//        printf("value of A[%d] is: %d\n",i,A[i]);
//    }
   int* A = (int*) calloc(n,sizeof(int));
   for (int i = 0; i < n; i++){


//    A[i]=i+1;
        printf("value of A[%d] is: %d\n",i,A[i]);
   }


}