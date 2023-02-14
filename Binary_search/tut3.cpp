//<---------------Binary Search------------------>
//array must be sorted
//asking user to input a number to find the no exist in the array or not

#include<iostream>
using namespace std;

int Binary_sear(int* A, int n, int x){
    int start=0,end=(n-1);
    while(start<=end){
        int mid =end +(start-end)/2;  //(start+end) may cause overflow for the higher intergers.
    if (A[mid]==x)
        return mid;
    else if(x<A[mid])
        end= mid -1;
    else 
        start=mid +1;
    }
    return -1;
}
int main(){
    int A[]={1,2,3,4,5,6,7,8};
    int n=sizeof(A)/sizeof(A[2]);
    int x;
    cout<<"Enter a number which you want to search for: "<<endl;
    cin>>x;
    int res=Binary_sear(A,n,x);
    if (res==-1)
        cout<<"not found in the array";
    else
        cout<<"got it";
        return 0;
    
}