#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> vec1, int q)
{
    map<int, int> Map;
    // binary search will take log(n) time complexity.
    if (binary_search(vec1.begin(), vec1.end(), q))
        return 0;
    else if (auto it = lower_bound(vec1.begin(), vec1.end(), q) - vec1.begin())
        return it;
    else if (q < 0)
        return (2 * (-1) * q);
    else
        return -1;
}

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> vec1(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec1[i];
    }
    // sorting will take nlog(n) time complexity.
    sort(vec1.begin(), vec1.end());

    while (Q--)
    {
        int q;
        cin >> q;
        if (solve(vec1, q) == 0)
            cout << "0";
        else if (solve(vec1, q) % 2 == 0)
            cout << "positive";
        else
            cout << "negative";
        cout << endl;
    }
    // overall time complexity is nlog(n) + qlog(n) {qlog(n) because will performing binary_search for each query.}

    return 0;
}