#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int res1 = 0, res2 = 0;

    string s1;
    cin >> s1;
    int n = (int)s1.size();

    if (n < 4)
    {
        cout << "Error" << endl;
        return;
    }
    if (s1[0] == '<' && s1[1] == '/' && s1[n - 1] == '>')
        res1 = 1;
    else
    {
        cout << "Error" << endl;
        return;
    }

    for (int i = 2; i < (n - 1); i++)
    {
        if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= '0' && s1[i] <= '9'))
            res2 = 1;
        else
        {
            cout << "Error" << endl;
            break;
        }
    }
    if (res1 == 1 && res2 == 1)
        cout << "Success" << endl;
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