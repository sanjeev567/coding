// this is from Mycodeschool

//<----------Quick sort ----------->



#include <iostream>
using namespace std;

int partition(int *A, int start, int end)
{
    int pivot = A[end];
    int pindex = start;
    for (int i = start; i < end; i++)
    {
        if (A[i] <= pivot)
        {
            swap(A[i], A[pindex]);
            pindex++;
        }
    }
    swap(A[pindex],A[end]);
    return pindex;
}

void quicksort(int *A, int start, int end)
{
    if (start < end)
    {
        int pindex = partition(A, start, end);
        quicksort(A, start, pindex - 1);
        quicksort(A, pindex + 1, end);
    }
}

int main()
{
    int A[] = {7, 5, 4, 6, 8, 11, 23, 12, 21,43,54,77,66,99,78,102,434,44,65,63};
    int n = sizeof(A) / sizeof(A[0]);
    cout << n << endl;

    quicksort(A, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}