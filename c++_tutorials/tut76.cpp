#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{

    set<int> st1; //set gives us sorted type of array so no need to sort it
    st1.insert(12);
    st1.insert(32);
    st1.insert(-1);
    st1.insert(-10);
    st1.insert(24);
    st1.insert(32);
    for (int x : st1)
    {
        cout << x << " ";
    }
    cout << endl;
    auto it = st1.find(-1);
    if (it == st1.end())
    {
        cout << " not present in the set: " << endl;
    }
    else
        cout << " present : " << *it << endl;
    auto it2 = st1.lower_bound(-1); //since here set is all ready sorted so no need to write
    //st1.begin(), st1.end()
    auto it3 = st1.upper_bound(-1);
    cout << *it2 << endl;
    cout << *it3 << endl;
    auto it4 = st1.upper_bound(13);
    st1.erase(24);
    if (it4 == st1.end())
    {
        cout << "not found in the set: " << endl;
    }
    else
        cout << "yes it is found: " << endl;
    return 0;
}