// cpp code to demonstrate set funciton (associative container: )
#include <set>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    set<int, greater<int>> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(40);
    s1.insert(40);
    s1.insert(60);
    s1.insert(12);
    s1.insert(30);

    // printing all the elements of s1

    // set<int, greater<int>>::iterator it;
    // for(it =s1.begin(); it!=s1.end(); it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    cout << "set s1 is: ";
    for (auto i = s1.begin(); i != s1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;

    // assigning all the elements from s1 to s2( a new set);
    set<int, greater<int>> s2(s1.begin(), s1.end());
    cout << "set s2 is: ";
    for (auto i = s2.begin(); i != s2.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    s2.erase(10);
    cout << "after erasing 10 from s2";
    for (auto i = s2.begin(); i != s2.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;

    s1.erase(s1.begin(), s1.find(30));
    cout << "after erasing element upto 30 from s1 is: ";
    for (auto i = s1.begin(); i != s1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;

    //lower bound and upper bound for set s1;
    cout << "s1.lowerbound(40) is: " << *s1.lower_bound(12) << endl;
    // lowerbound points to the same element where upper bound points to next element.
    cout << "s1.upperbound(40) is: " << *s1.upper_bound(12) << endl;

    return 0;
}