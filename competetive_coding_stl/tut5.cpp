// some manipulating algorithms
// erase and erase(unique)

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int arr[]={2,4,3,7,6,8,8,6,9,19};    
    int n =sizeof(arr)/sizeof(arr[0]);

    // initialising vec1 with array arr
    vector <int> vec1(arr, arr+n);
    sort(arr, arr+n);
    cout<<"vector before erasing is: "<<endl;
    for(int i=0; i<vec1.size(); i++){
        cout<<vec1[i]<<" ";
    }

    vec1.erase(vec1.begin()+2);
    cout<<"\n vector after erasing 3 "<<endl;
    for(int i=0; i<vec1.size(); i++){
        cout<<vec1[i]<<" ";
    }
    cout<<"\n vector after erasing duplicate value in the vector "<<endl; //this will erase if no repeated continuously. not in anywhere.
    vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());
    for(int i=0; i<vec1.size(); i++){
        cout<<vec1[i]<<" ";
    }

    return 0;
}