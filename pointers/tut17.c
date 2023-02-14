//<----------Dynamically memory allocation in c------------->

#include<stdlib.h>
#include<stdlib.h>

int main(){
    int *p;
    p=(int*) malloc(sizeof(int));
    // here int* in the above line indicates that we do typecasting here bcoz malloc return a void pointer.
    *p=10;
    printf("value of p is: %d\n",*p);
    free(p); //as a good programmer its our responsibility that we should free the allocated space 
    // after its work is over and no required further otherwise the heap will not delete the space.
    p=(int*) malloc(sizeof(int));
    *p = 20;
    printf("value of p is: %d\n",*p);
    free(p);
    int *q;
    q=(int*) malloc(5*sizeof(int));  //this will create an array of int type of 5 element.
    for (int i=0; i<5; i++){
        *(q+i)=i+1;
    }
    for (int i=0; i<5; i++){
        printf("value of *q[%d] is:%d\n",i,*(q+i));

    }
    free(q);
    return 0;

}