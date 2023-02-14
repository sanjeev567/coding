#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int i = 0, j = 0;
        int N, p, k, rem;
        cin >> N >> p >> k;
        int ctr = 1;
        while (j != N)
        {
            i = j;
            while (i < N)
            {
                if (i == p)
                {
                    rem = i;
                    cout << ctr << endl;
                    break;
                }
                else
                {
                    ctr++;
                    i = i + k;
                }
            }
            if (rem == p)
                break;
            else
                j++;
        }
    }

    return 0;
}