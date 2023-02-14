//          <----------------------selection sort---------------->

#include <iostream>
using namespace std;

void selectionsort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++) //we need to do this for n-2 times only
    {
        int min = i; //setting the min element to the array for comparing ;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j; //updating min element to the array;
            }
        }
        int temp = A[i]; //swaping the min element to its appropriate position
        A[i] = A[min];
        A[min] = temp;
    }
}

int main()
{
    int A[] = {2, 1, 4, 8, 7, 6, 5};
    int n = sizeof(A) / sizeof(A[0]);
    selectionsort(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }

    return 0;
}