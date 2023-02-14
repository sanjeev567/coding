#include <iostream>
#include <algorithm>
using namespace std;

int result(int *a, int *b, int n1)
{
    if (*max_element(a, a + n1) > *max_element(b, b + n1))
        return 1;
    else
        return 2;
}

int main()
{
    int t, i = 0, j = 0, k = 0;
    cin >> t;
    int A[t], B[t], C[t];
    int n = sizeof(C) / sizeof(C[0]);
    while (t--)
    {
        int a1, b1;
        cin >> a1 >> b1;
        A[i] = a1;
        B[j] = b1;
        if (A[i] > B[j])
            C[k] = A[i] - B[j];
        else
            C[k] = B[j] - A[i];
        i++;
        j++;
        k++;
    }

    cout << result(A, B, n) << " " << *max_element(C, C + n);

    return 0;
}