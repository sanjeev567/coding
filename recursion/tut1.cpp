// this code is showing actually how recursion works in very simple way...

#include<iostream>
using namespace std;

int factorial(int n){
    int f;
// base condition
    if (n==0){
        return 1;
    
    }
    else {
        cout<<"I'm calculating f("<<n<<")"<<endl;
        f =n*factorial(n-1);
        cout<<"I'm done with f("<<n<<")"<<endl;
        }
    return f;
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);

    
    return 0;
}