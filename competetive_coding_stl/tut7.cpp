// distance fn in algorithm 
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int arr[]={2,3,4,2,55,6,7,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector <int> vec1(arr, arr+n);
    // sort(vec1.begin(), vec1.end());

    cout<<"distance from the begining to the max element in the vector: "<<endl;
    // cout<<distance(vec1.begin(), find(vec1.begin(), vec1.end(), 3));
    cout<<distance(vec1.begin(), max_element(vec1.begin(), vec1.end()));
    
    return 0;
}