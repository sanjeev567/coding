//                          <------------3-D array---------------->
#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[3][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}};
                  
    int (*ptr)[4];
    ptr=arr;
        printf("we are going to print 12: %d\n",(ptr[2][3]));
        printf("we are going to print 9: %d\n",ptr[2][0]);
        printf("going to print 10: %d\n",*(ptr[2]+1));
        return 0;
}