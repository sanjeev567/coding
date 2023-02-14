#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    if (T >= 1 && T <= 15000)
    {
        for (int i = 0; i < T; i++)
        {
            int xa, xb, Xa, Xb;
            cin >> xa >> xb >> Xa >> Xb;
            if ((xa >= 100 || xa <= 200) && (xb >= 400 || xb <= 500) && (Xa >= 1000 || Xa <= 1200) && (Xb <= 1000 || Xb <= 1500))
            {

                if (Xa % xa == 0 && Xb % xb == 0)
                    cout << (Xa / xa) + (Xb / xb) << endl;
                else
                    return -1;
            }
            else
                return -1;
        }
    }

    return 0;
}