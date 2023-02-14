// https://www.codechef.com/LTIME97C/problems/UNONE
// remove ugliness of the no(Lunch time)

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    vector<int> vec1(N);
    for (auto &x : vec1)
        cin >> x;
    stable_partition(vec1.begin(), vec1.end(), [&](auto y) { return y % 2 == 0; });
    for (auto &res : vec1)
        cout << res<<" ";
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}