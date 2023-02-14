// <-----------program to reverse the string----------------->
// using stack (one of the use case of stack...)

#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

void reverse(char *A, int n){
    stack<char> S;

    // pushing in the stack
    for(int i=0; i<n; i++){
        S.push(A[i]);
    }
    // inserting string into the array
    for (int i=0; i<n; i++){
        A[i]=S.top();
        S.pop();
    }
}

int main(){
    char A[51];
    cout<<"Enter the string: "<<endl;
    gets(A);  //it reads and stores  the stdin until the newline character found or line get end.
    reverse(A,strlen(A));
    cout<<"output of the string is: "<<A;
    return 0;
}