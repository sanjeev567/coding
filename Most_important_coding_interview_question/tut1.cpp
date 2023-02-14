//      prefix sum 
/* it means sum of all the previous element at any point should be equal. of the any two or more array

link of the problem is: 
https://www.codechef.com/problems/UNQEQ
*/

#include <bits/stdc++.h>
using namespace std;

void print_arr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void perfect_of_2(int *M, int n)
{
    int A[n / 2], B[n / 2];

    int k = 0;
    for (int i = 0; i < n; i = i + 2)
    {
        if (k < n / 4)
        {
            A[i] = M[k];
            A[i + 1] = M[n - (1 + k)];
        }
        else
        {
            B[i - (n / 2)] = M[k];
            B[(i - (n / 2)) + 1] = M[n - (1 + k)];
        }
        k++;
    }
    
    sort(A, A+n/2);
    sort(B, B+n/2);
    print_arr(A, n / 2);
    print_arr(B, n / 2);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int N;
        cin >> N;
        int A[N];
        for (int i = 1; i <= N; i++)
        {
            A[i - 1] = i;
        }


        int flag1 = N % 2;
        int flag2 = (N/2) % 2;

        if (N>2 && flag2 == 0)
        {
            cout<<"YES"<<endl;
            perfect_of_2(A, N);
            
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}