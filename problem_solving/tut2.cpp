// lucky 4 i.e it will print how much 4 comes in entered number;
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long int n;
    while (t--)
    {
        cin >> n;
        int count = 0;
        while (n)
        {
            int rem = n % 10;
            if (rem == 4)
            {
                count++;
            }
            n /= 10;
        }
        cout << count << endl;
    }

    return 0;
}
