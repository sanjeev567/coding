//      <---------pointere to pointer----------------->
#include<stdio.h>
int main(){
    int x=6;
    int *p;
    p=&x;
    printf("value of x is: %d\n",x);
    printf("address of x is: %d\n",p);
    printf("value at address %d is: %d\n",p,*p);
    
    int**q=&p;
    printf("address of p is: %d\n",q);
    printf("value at address %d is: %d\n",q,*q);    //garbage
    printf("value at address %d is: %d\n",p,**q);   //6
    int ***r=&q;
    printf("address of q is: %d\n",r);
    printf("value at address %d is: %d\n",r, *r);    //*r-->q
    printf("value at address %d is: %d\n",q, **r);      //**r-->p
    printf("value at address %d is: %d\n",p, ***r);     //***r-->x 

    //here i modify x with help of r ;
    ***r=10;
    printf("value of x is: %d\n",x);
    ***r=(*p)+3;    //here ***r-->x and *p is also points x.
    printf("value of x is: %d\n",x);

}