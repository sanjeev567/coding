//                      <-----------------Pointers and Arrays------------------>

#include<stdio.h>

int main(){
    int A[5]={1,2,3,4,5};
    int *ptr=A;
    // A++  -->we could not increament this(Error!!!)
    ptr++;   //this is valid.
    for (int i=0; i<5; i++){
        printf("%d\n",&A[i]); //these 2 lines gives same output.
        printf("%d\n",A+i);

        printf("%d\n",*(A+i));  //these 2 lines gives same output.
        printf("%d\n",A[i]);
    }
}