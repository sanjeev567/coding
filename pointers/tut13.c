//                          <-------------2-D Array------------------>
#include<stdio.h>

int main(){
    int B[2][3]={{1,2,3},{4,5,6}};   //this will create B[0]={1,2,3}
                                 //   B[1]={4,5,6}    1-D array of 3 integer types

    // ex--  int c[3][4] this will create c[0],c[1],c[2] 1-D array of 4 integer types.

    // int* B; --> this will not a valid for 2-D array pointer (this will create B[0] pointer of 1-D integer)
    int (*P)[3];
    
    P = B;
    printf("%d\n",B);  //return us int* B[2,3]  ie it is also point to the base element of the B[0] of 1D array
    printf("%d\n",&B[0]);  //this is simple think about it as we know from many times ago. same as earlier.


    printf("%d\n",*B);  // return us int* B[2] derencing one time will point at B[0] index it will same as above.
    // printf("%d\n",B[0]); //       ||
    // printf("%d\n",&B[0][0]);  //  ||


    printf("%d\n",*B+1);  //this will points B[0] base elments to the just next address.
    printf("%d\n",B+1);     //this will point B[1] first element address 
    printf("%d\n",&B[1]);   //this will points address of B[1] element.
}