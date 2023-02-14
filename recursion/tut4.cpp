//Recursion with memoization
// this is as faster as iterative way now we had improve it...
#include<iostream>
using namespace std;

int F[51];  //declaring a global variable so that it has only one copy and can be accessed from anywhere.
int fib(int n){
    if (n<=1) return n;

    if (F[n]!=-1) return F[n];  //now if F[n] is not equal to -1 that means it is found in past so no need to find again simply return F[n];
    else{
    F[n] = fib(n-1) +fib(n-2);  // if not found it past then find it and save it in the memory for future. 
    return F[n];  //then return it.
    }
}


int main()
{
    for (int i = 0; i < 51; i++)
    {
        F[i]=-1;  //here we set all the index value with -1 to check whether F[n] is found or not for each one.
    }
    
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
