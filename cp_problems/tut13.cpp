#include <bits/stdc++.h>
using namespace std;
// #define long long int as it;

int main()
{
    int cont1 = 0;
    vector<long int> vec1(9);
    for (auto &x : vec1)
    {
        cin >> x;
        cont1++;
    }
    vec1.resize(cont1);

    // for(int i=0; i<vec1.size())
    // if (vec1[0]==1)
    // auto it = vec1.insert(vec1.begin()+1,0);
    // else
    // auto it1 = vec1.insert(vec1.begin(), 1);

    for (auto &y : vec1)
        cout << y;

    return 0;
}