// next_permutaion and prev_permutaion
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {2, 4, 3, 7, 6, 8, 8, 6, 9, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    // initialising vec1 with array arr
    vector<int> vec1(arr, arr + n);
    cout << "\n given vector is: " << endl;
    for (int i = 0; i < vec1.size(); i++)
        cout << vec1[i] << " ";
    
    cout<<"\n vector after next_permutation: "<<endl;
    next_permutation(vec1.begin(), vec1.end());
    for (int i = 0; i < vec1.size(); i++)
        cout << vec1[i] << " ";
    
    cout<<"\n vector after prev_permutation: "<<endl;
    prev_permutation(vec1.begin(), vec1.end());
    for (int i = 0; i < vec1.size(); i++)
        cout << vec1[i] << " ";
    
    return 0;
}