//<-------------Linear Search------------->
//in linear search the array is sorted or not does not matter.
//best case=1 comparison
//worst case=n comparison
#include<iostream>
using namespace std;

int linear_search(int *A, int n, int x){
for(int i=0; i<n;i++){
    if(A[i]==x)
    return i;
}
    return -1;
}
int main(){
    int A[]={1,2,3,4,5,6,7,8};
    int n=sizeof(A)/sizeof(A[4]);
    int x=5;

    int result = linear_search(A,n,x);
    if (result==-1)
    cout<<"not found in the array";
    else
    cout<<"got it at index no: "<<linear_search(A,n,x);
    return 0;
}