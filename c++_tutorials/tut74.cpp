// STL IN C++
//<VERY IMPOETANT FOR COMPETETIVE CODING;

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{

    vector<int> vec1 = {1, 2, 34, 4, 3, 9, 6, 5, 10};
    // cout<<vec1[1]<<endl;
    sort(vec1.begin(), vec1.end()); //this will sort in increasng order
    //sort(vec1.begin(),vec1.end(),greater<int>());  //this will in decreasing order.

    // for (int i=0; i<9; i++){
    //     cout<<vec1[i]<<" ";
    // }
    bool present = binary_search(vec1.begin(), vec1.end(), 10); //to check whether the element is present or not

    // present = binary_search(vec1.begin(),vec1.end(),33); //this will return 0
    if (present == 1)
        cout << "yes it is present" << endl;
    else
        cout << "not present: " << endl;
    vec1.push_back(100);
    vec1.push_back(100);
    vec1.push_back(100);
    vec1.push_back(202);
    vec1.push_back(178);

    //   1,2,34,4,3,9,6,5,10,100,200,201,202,178;
    vector<int>::iterator iter = lower_bound(vec1.begin(), vec1.end(), 100); //since lower_bound return a pointer or you can say iterator
    //so we have to point it with the help of iterator.
    // lower_bound point to just >= element in this case it will points to 100 at 9 index.
    vector<int>::iterator iter2 = upper_bound(vec1.begin(), vec1.end(), 100); // upper_bound points to strickly > than the element
    // in this case it will points to 200
    cout << *iter << " " << *iter2 << endl;

    cout << iter2 - iter << endl; //this will gives us the how many times does the 100 occur

    return 0;
}