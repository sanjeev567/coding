// program to add first and the last digit of the number
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        int first, last;
        cin >> n;
        last = n % 10;
        while (n)
        {
            first = n;
            n /= 10;
        }
        cout << first + last << endl;
    }

    return 0;
}