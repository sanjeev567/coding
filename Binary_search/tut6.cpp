//<-----------finding no of times an element is occurs in a array------------>
//INTERVIEW QUESTION

#include <iostream>
using namespace std;

int BinarySearch(int A[], int n, int x, bool searchfirst)
{

    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (A[mid] == x)
        {

            if (searchfirst)
                high = mid - 1; //this is for left searching of same element
            else
                low = mid + 1; //this is for right searching of same element
            result = mid;
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
    int A[] = {1, 1, 3, 3, 5, 5, 5, 5, 5, 9, 9, 11};
    int n = sizeof(A) / sizeof(A[0]);
    int x;
    cout << "Enter the no for which you want to search for: " << endl;
    cin >> x;
    int index_first = BinarySearch(A, n, x, true);
    if (index_first == -1)
        cout << "the element is not found in the array: " << endl;
    else
    {
        int index_last = BinarySearch(A, n, x, false);
        cout << "no of occurance of the element " << x << " is: " << index_last - index_first + 1 << endl;
    }

    return 0;
}