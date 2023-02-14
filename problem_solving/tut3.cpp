// program to reverse the number

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long int n;
    int rem, rev;
    while (t--)
    {
        rev = 0;
        cin >> n;
        while (n)
        {

            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        cout << rev << endl;
    }
    return 0;
}