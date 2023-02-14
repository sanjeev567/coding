//<------dip drive in malloc, calloc and realloc------------>
#include<stdio.h>
#include<stdlib.h>

int main(){
    //      <----------------malloc-------------->
    // int *p = (int*) malloc(sizeof(int));  //malloc takes only one arguement
    int *p = (int*) malloc(5*sizeof(int));
                      //   ^         ^
                      //   |         |
                //no of elements    type of or may be here written as 4 -> as int takes 4 bytes of memory.
    *p=10;
    printf("value of p is: %d\n",*p);
    free(p);

//                  <-----------  CALLOC---------->
    int *q=(int*) calloc(3,sizeof(int));
             //   here 3 is no of elements and int indicates 4 bytes of memory have to allocate 
             // incase of sizeof(int) we can use 4 but this is not the right way.       

    *q =20;
    printf("value of q is: %d\n",*q);
    free(q);
    //                      <------------REALLOC------------->
    // realloc is used when we need to change the size of block that we already dynamically allocated
        // it can be extend the array if there space has or create a new entire block and copy the 
        // the value of existing block.
        int *r=(int*) realloc(q, 5);  //now size of q has 5 block of memory using realloc 
       
         for (int i=0; i<5; i++){
        *(q+i)=i+1;
    }
    for (int i=0; i<5; i++){
        printf("value of *q[%d] is:%d\n",i,*(q+i));

    }
    free(q);
}
