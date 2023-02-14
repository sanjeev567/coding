
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

bool f(int x, int y)
{
    return x>y;
}
int main()
{

    vector<int> vec1 = {1, 2, 34, 4, 3, 9, 6, 5, 10};
    // cout<<vec1[1]<<endl;
    // sort(vec1.begin(), vec1.end(),f);
    // for (int i =0; i<vec1.size();i++){

    // cout<<vec1[i]<<" ";
    // }
    bool present = binary_search(vec1.begin(), vec1.end(), 10); //to check whether the element is present or not
    vec1.push_back(100);
    vec1.push_back(100);
    vec1.push_back(100);
    vec1.push_back(202);
    vec1.push_back(178);
// lower_bound and upper_bound --> prerequisite is to be vector is sorted....
    auto iter = lower_bound(vec1.begin(), vec1.end(), 100); //auto is automatic detect that since lower_bound takes iterator so iter is iterator.
    auto iter2 = upper_bound(vec1.begin(), vec1.end(), 100);
    // cout << *iter << " " << *iter2 << endl;

    // cout << iter2 - iter << endl;
    // for (int &x : vec1){
    //     // x++;
    //     cout<<x<<" ";
    // }
    for (int x : vec1){
        x++;
        cout<<x<<" ";
    }
    return 0;
}