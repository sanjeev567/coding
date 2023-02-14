#include <bits/stdc++.h>
using namespace std;

void solve(int N, int p, int k, int i, int ctr, int check)
{
    while (i < N)
    {
        if (p != i)
        {
            i = i + k;
            ctr++;
        }
        else
        {
            cout << ctr;
            return;
        }
    }
    check++;
    solve(N, p, k, i = check, ctr, check);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, p, k, i = 0, ctr = 1, check = 0;
        cin >> N >> p >> k;
        solve(N, p, k, i, ctr, check);
        cout << endl;
    }

    return 0;
}