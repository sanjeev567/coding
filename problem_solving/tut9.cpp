// greatest factor
// where N must be greator than 1:
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10], N;
    cin >> N;
    if (N >= 2)
    {

        for (int i = 0; i < 10; i++)
        {
            if (N % (i+1) == 0)
            {
                arr[i] = (i+1);
                // mod++;
            }
            else
            {
                // mod++;
                arr[i] = 0;
            }
        }

        cout << *max_element(arr, arr + 10);
    }
    else
        return -1;

    return 0;
}