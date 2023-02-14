//      <-------------Some improvements in Bubble sort ----------------->

#include<iostream>
using namespace std;

void Bubblesort(int A[], int n){
    // int i=0;
    for (int k=1; k<n-1; k++){
        for (int i=0; i<n-k-1; i++){  //improvements has been done;
            if (A[i]>A[i+1]){
                swap(A[i],A[i+1]);
            }

        }
    }
}

int main(){
    int A[]={3,2,1,4,6,5,8};
    Bubblesort(A,7);
    for (int i=0; i<7;i++){
        cout<<A[i];
    }
    
    return 0;
}