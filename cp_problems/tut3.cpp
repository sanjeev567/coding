#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;

    int i;
    vector<int> a(n + 1);
    for (i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> right, left;
    for (i = 1; i <= n; i++)
    {
        if (a[i] == 1)
            right.push_back(i);
        else if (a[i] == 2)
            left.push_back(i);
    }
    while (m--)
    {

        int destination;
        cin >> destination;
        int dis1 = INT_MAX, dis2 = INT_MAX;

        auto it = lower_bound(left.begin(), left.end(), destination);
        if (it != left.end())
        {
            dis1 = (*it) - destination;
        }
        auto jt = lower_bound(right.begin(), right.end(), destination);

        if (jt != right.end() && (*jt) == destination)
            dis2 = 0;
        else
        {
            if (jt != right.begin())
            {
                jt--;
                dis2 = destination - (*jt);
            }
        }
        int ans = min(dis1, dis2);
        if (ans == INT_MAX)
            ans = -1;
        if (destination == 1)
            ans = 0;
        cout << ans << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
    solve();

    }

    return 0;
}