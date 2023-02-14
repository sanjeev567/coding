#include<iostream>
using namespace std;


void merge(int* L, int* R, int* A, int nl, int nr, int nA){
    int i, j, k;
    i=j=k=0;
    while (i<nl && j< nr)
    {
        if(L[i] <= R[j]){
            A[k] = L[i]; i++; k++;
        }
        else {
            A[k++] = R[j++];
        }
    }
    while (i<nl)
    {
        A[k++] =L[i++];
    }
    while (j<nr)
    {
        A[k++] =R[j++];
    }
    
    
}
void print_arr(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
}

void Merge_sort(int* A, int n){
    if(n<2) return;
    int mid;
    if(n%2==0) mid =n/2;
    else mid=n/2+1;
    int L[mid], R[n-mid];
    for (int i = 0; i < mid; i++)
    {
        L[i] = A[i];
    }
    for (int i = mid; i < n; i++)
    {
        R[i-mid] = A[i];
    }
    print_arr(L, mid);
    Merge_sort(L, mid);
    print_arr(R,n-mid);
    Merge_sort(R, n-mid);
    merge(L, R, A, mid, n-mid, n);

    
}

int main()
{
    int A[]={6,5,4,3,2,1};
   Merge_sort(A, 6);
    print_arr(A, 6);
    
}
