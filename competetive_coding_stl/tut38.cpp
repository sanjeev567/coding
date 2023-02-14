// problem to add two array element into third array 
// constraint --> both array of same type and same size
// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={5,6,7,8};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int res[n];

    // for (int i=0; i<n; i++){
    //     res[i]=arr1[i]+arr2[i];
    // }
    
    cout<<endl;

    // using transform we can add these two array in sinle line;
    transform(arr1, arr1+n, arr2, res, modulus<int>());
    // using transform we can plus, minus, multiplies, divides, uppercase, lowercase, modulus and many more.
    for (int i=0; i<n; i++){
        cout<<res[i]<<" ";

    }
     cout<<endl;

    return 0;
}