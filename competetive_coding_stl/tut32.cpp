// cpp code to find the duplicate value using unordered_set
#include<bits/stdc++.h>
using namespace std;

void show_dup(int a[], int n){
    unordered_set<int> matched;
    unordered_set<int> dub;
    for(int i=0; i<n; i++){
        if (matched.find(a[i])==matched.end())
            matched.insert(a[i]);
        else
            dub.insert(a[i]);
    }
    cout<<"no of dublicate value is: ";
    for(auto it=dub.begin(); it!=dub.end(); it++)
        cout<<*it<<" ";
}


int main(){
    int arr[]={2,3,4,5,2,5,6,7,3,4,7,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    show_dup(arr, n);
    
}