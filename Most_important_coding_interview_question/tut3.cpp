/*
Q. you have an array of size N and you have to circularly right shift the 
array elements K times.
eg- A[5] ={1,2,3,4,5};
let k= 3;
output A[5] = {3,4,5,1,2};

*/
// one of the logic is here we take element of A from 0 to K-1 into another
// array say it B[N-k]
// then we started assinging the elements of  A from last to kth position then 
// asing the element of B arrray as follow in the below

//second approach is reverse the whole array first then reverve the element 
// from 0 to k then also reverse from k+1 to n in the same array.

#include<bits/stdc++.h>
using namespace std;


void print_arr(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
}


int main(){
    int N; cin>>N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    int k;
    cin>>k;
    int B[N-k];
    for (int i = 0; i < k; i++)
    {
        B[i] = A[i];
    }
    for (int i = 0; i < N; i++)
    {
            if(i<k) A[i] = A[(N-k)+i];
            else A[i]= B[i-k];
    }
    print_arr(A, N);

    
    
    
    return 0;
}