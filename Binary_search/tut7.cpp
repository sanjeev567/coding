//<------------------how many times is a sorted array is rotated----------------------->

#include <iostream>
using namespace std;

//first method which is linear

int Linearsearch(int A[], int n)
{
    int min = A[0];
    int min_index = 0, i;
    for (i = 1; i <= n - 1; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            min_index = i;
        }
    }
    return min_index;
}

int main()
{
    int A[] = {10, 11, 12, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "no of time array is rotated is: " << Linearsearch(A, n);
    return 0;
}