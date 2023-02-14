#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while (T--){
        int A, B, X;
        cin>>A>>B>>X;
        int res = (B-A)/X;
        cout<<res<<endl;

    }
    return 0;
}