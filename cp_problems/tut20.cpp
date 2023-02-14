#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        float res1, res2, Y = 0.5;
        cin >> A >> B;

        float X = (float(A) / B);
        if (X > 0 && X < 1 && (__gcd(A, B) == 1))
        {
            res1 = X + Y;
            res2 = X - Y;
            if (res1 == 0 || res1 == 1 || res2 == 0 || res2 == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}