//<----------Merge sort ------------>
// O(nlogn)
//not for sort problem, need auxiliary array space 
// based on recusion, divide and conquer.

#include <iostream>
using namespace std;

void merging(int *L, int *R, int *A, int nl, int nr, int nA)
{
    int i, j, k;
    i = j = k = 0;
    while (i < nl && j < nr)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
            k++;
        }
        else
        {
            A[k] = R[j];
            j++;
            k++;
        }
    }
    while (i < nl)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < nr)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}
void print_arr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void Merge_sort(int *A, int n)
{
    if (n < 2)
        return;
    int mid;
    if (n % 2 == 0)
        mid = n / 2;
    else
        mid = n / 2 + 1;
    int L[mid];
    int R[n - mid];
    for (int i = 0; i < mid; i++)
    {
        L[i] = A[i];
    }

    for (int i = mid; i < n; i++)
    {
        R[i - mid] = A[i];
    }
    Merge_sort(L, mid);
    Merge_sort(R, n - mid);
    merging(L, R, A, mid, n - mid, n);
}

int main()
{
    int A[] = {5, 4, 3, 2, 7, 8, 9, 10};
    Merge_sort(A, 8);

    print_arr(A, 8);

    return 0;
}