//<Binary search to find first occurance of the number (or element).
#include <iostream>
using namespace std;
int Binary_search(int *A, int n, int x)
{
    int low = 0, high = (n - 1);
    int result = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == A[mid])
        {
            result = mid;
            high = mid - 1;
        }
        else if (x < A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return result;
}

int main()
{
    int A[] = {2, 3, 10, 10, 10, 18, 20};
    int n = sizeof(A) / sizeof(A[0]);
    int x;

    cout << "Enter the no which you want to search 1st occurance " << endl;
    cin >> x;
    int found = Binary_search(A, n, x);
    if (found != -1)
        cout << "the " << x << " is found in 1st occurance at index no: "<<found << endl;
    else
        cout << "the " << x << " element is  not found " << endl;
    return 0;
}