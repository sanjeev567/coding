//<--------------find element in a circulatory sorted array------------->

#include <iostream>
using namespace std;
//using binary search
int circulatory_search(int A[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == A[mid])   //case 1:
            return mid;
        if (A[mid] <= A[high])   //case 2: right half is sorted
        {
            if (x > A[mid] && x <= A[high])
                low = mid + 1;      //go and search right
            else
                high = mid - 1;    //go and search left
        }
        // if (A[low] <= A[mid])
        else                //case 3: left half is sorted
        {
            if (A[low]<=x && x < A[mid])
                high = mid - 1;       // go and search left
            else
                 low = mid + 1;         //go and search right
        }
    }
    return -1;    //if while is nothing returning then return -1 is for element is not found in the array 
}

int main()
{
    int A[] = {10, 11, 12, 13,14,15,18,21,24, 7, 8, 9};
    int x;
    int n= sizeof(A)/sizeof(A[0]);
    cout << "Enter the no: which you are looking for: " << endl;
    cin >> x;
    int index = circulatory_search(A, n, x);
    if (index == -1)
        cout << "Element doesn't found: " << endl;
    else
        cout << "Element "<<x<<" have been found at index: " << index;

    return 0;
}