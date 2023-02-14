#include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

int compare(int a, int b)
{
    if (a > b)
        return 1;  //chage value 1 to -1 to print output in descending order
    else
        return -1;
}
void Bubblesort(int *A, int n, int (*compare)(int, int))  //arguements-- (A--array, no of elements, fn pointer)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (compare(A[j], A[j + 1]) > 0)
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main(){
    int i, A[] ={3,2,1,5,6,4};
    Bubblesort(A,6, compare);
    for(i=0; i<6; i++) printf("%d ",A[i]);
    
}