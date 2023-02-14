#include<stdio.h>
int main(){

int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};
int (*ptr)[4];
ptr = arr;
printf("%d\n",ptr);
printf("%d\n",*ptr[0]);
}