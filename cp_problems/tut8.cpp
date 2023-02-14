#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    vector<int> vec1(7);
    
    while (T--)
    {
        int N, count = 0;
        cin >> N;
        if (N >= 7 && N <= 15)
        {

            int a[N];
            for (int i = 1; i <= N; i++)
            {
                int x;
                cin >> x;
                a[i] = x;
            }
            for (int j = 1; j <= N; j++)
            {
                if (a[j] >= 1 && a[j] <= 7)
                {

                    vec1.push_back(a[j]);
                    count++;
                }
               
                if (count == 7)
                {

                    cout << j;
                    break;
                }
            }
            cout << endl;
        }
    }

    return 0;
}