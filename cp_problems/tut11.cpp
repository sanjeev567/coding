// Lunch Time 2021
// jai Maa Sharade !!!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, k;
        cin >> N >> M >> k;

        int arr[N][M];
        int(*ptr)[N][M] = &arr;
        for (int i = 0; i < (N * M); i++)
        {
            // int x, y;
            // cin>>x>>y;
            int ct1 = 0;
            for (int i1 = 0; i1 < N; i1++)
            {
                for (int j1 = 0; j1 < M; j1++)
                {
                    if (ct1 % 2 == 0)
                    {
                        // arr[i1][j1] = int("A");
                        cin >> arr[i1][j1];
                        (*ptr)[i1][j1] = int("B");
                    }
                    else
                    {
                        cin >> arr[i1][j1];
                        (*ptr)[i1][j1] = int("A");
                    }
                }
            }
        }
    }
    return 0;
}