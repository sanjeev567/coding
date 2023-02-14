//this code is from gfg
//this is the most eficient interms of simplicity.
#include<iostream>
using namespace std;

int partition(int* A, int l, int h){
    int pivot = A[h];
    int i =l-1;
    for (int j = l; j < h; j++)
    {
        if (A[j]<pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
        
    }
    swap(A[i+1], A[h]);
    return i+1;
    
}
void Quick_sort(int*A, int l, int h){
    if (l<h){
        int pindex = partition(A, l, h);
        Quick_sort(A, l, pindex-1);
        Quick_sort(A, pindex+1, h);
    }
}

int main(){
    // int A[]={6,5,4,3,3,6,9,10};
    int A[]= {10,9,8,7,6,5,4,3};
    Quick_sort(A, 0, 8);
    for (int  i = 0; i < 8; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}