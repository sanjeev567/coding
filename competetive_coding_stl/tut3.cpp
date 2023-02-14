// cpp code to implement all 5 components of algorithm that we discuss
// i.e sort, reverse, min, max, and accumulate;
#include<iostream>
#include<algorithm>
#include<vector>  //nothing but dynamic array.
#include<numeric>  //for accumulate operation
using namespace std;

void show_vec(vector <int> &vec1)  //it is good idea to pass vector by reference instead of direct.
{
    for (int i=0; i<vec1.size(); i++)
    cout<<vec1[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[]={10, 20, 5, 23, 42, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    // initialising vector with array values
    vector <int> vect(arr, arr+n);
    
    cout<<"the vector is: "<<endl;
    show_vec(vect);
    // for(int i=0; i<n; i++){
    //     cout<<vect[i]<<" ";
    // }
    

    // sorting the vector in ascending order:
    sort(vect.begin(), vect.end());
    cout<<"vector after sorting is: "<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<vect[i]<<" ";
    // }
    show_vec(vect);

    // Reversing the vector
    reverse(vect.begin(), vect.end());
    cout<<"vector after reversing is: "<<endl;
    show_vec(vect);

    // to get the maxm element in the vector:
    cout<<"maximam no  of the vector is: "<<endl;
    cout<<*max_element(vect.begin(), vect.end())<<endl;

    // to get the mim element in the vector:
    cout<<"minimum no  of the vector is: "<<endl;
    cout<<*min_element(vect.begin(), vect.end())<<endl;


    // starting the summation from the 0
    cout<<accumulate(vect.begin(), vect.end(), 0)<<endl;  //3rd parameter is initial value of the sum.

    cout<<"Occurance of 2 in the vector is: ";
    cout<<count(vect.begin(), vect.end(), 2)<<endl;

    find(vect.begin(), vect.end(), 99) !=vect.end() ? cout<<"element found: " : cout<<"not found: "<<endl;  
    //here we use tertiary operator 
    // <condition> ?--> if  :--> else 
    return 0;
}