#include<iostream>
using namespace std;
int Linear_search(int *A, int n, int x){
    for (int i=0; i<n; i++){
        if (A[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int A[]={1,3,4,5,2,10,11,12};
    int n=sizeof(A)/sizeof(A[2]), x=19;
    int result=Linear_search(A, n, x);
    if (result==-1)
    cout<<"not found:";
    else
    cout<<"got it";
    return 0;
}