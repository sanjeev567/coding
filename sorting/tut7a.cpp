//this code is from abdul bari sir

#include <iostream>
using namespace std;

int Partition(int *A, int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;
    while (i < j)
    {

        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);
        if (i < j)
        {
            swap(A[i], A[j]);
        }
    }
    swap(A[l], A[j]);
    return j;
}

void Quicksort(int *A, int l, int h)
{
    if (l < h)
    {
        int pin = Partition(A, l, h);
        Quicksort(A, l, pin);
        Quicksort(A, pin + 1, h);
    }
}
int main()
{
    int A[] = {2, 3, 4, 8, 7, 69, 10};
    Quicksort(A, 0, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}