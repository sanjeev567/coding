//<------------------how many times does the array is rotated----------------------->

#include<iostream>
using namespace std;

int Binarysearch(int A[],int n){
    int low=0, high=n-1;
    while(low <=high){
        if (A[low] <= A[high])
        return low;
        int mid=(low +high)/2;
        int next=(mid+1)%n, prev=(mid+n-1)%n;
        if(A[mid]<=A[next] && A[mid]<= A[prev])
            return mid;
        else if(A[mid]<=A[high])
        high=mid-1;
        else if(A[mid] >= A[low])
            low = mid +1;
        
    }
    return -1;
}

int main(){
    int A[] ={11,12,13,2,3,4,5,6,7,8,9,10};
    int n= sizeof(A)/sizeof(A[0]);
    cout<<"no of times array is rotated is: "<<Binarysearch(A,n);
    
    return 0;
}