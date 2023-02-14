// lower_bound and upper_bound

#include<iostream>
#include<algorithm>
#include<vector>  
#include<numeric> 
using namespace std;

void show_vec(vector <int> &vec1)  
{
    for (int i=0; i<vec1.size(); i++)
    cout<<vec1[i]<<" ";
    cout<<endl;
}

int main(){
 // initialising vector with array values
    int arr[]={5, 10,11,20,22,33,44,45, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector <int> vect(arr, arr+n);
    // sort(vect.begin(), vect.end());
    for(auto it=vect.begin(); it!= vect.end(); ++it)
        cout<<*it<<" ";
        cout<<endl;

    // first occurance of 20 
    auto p= lower_bound(vect.begin(), vect.end(),20);


    // last occurance of 20 
    auto q= upper_bound(vect.begin(), vect.end(),20);

    cout<<"the lower bound is at the position: "<<endl;
    cout<<p-vect.begin()<<endl;

    cout<<"the upper bound is at the position: "<<endl;
    cout<<q-vect.begin()<<endl;

return 0;
}