#include<iostream>
using namespace std;

void solve(){
    int A, B, C, D;
    cin>>A>>B>>C>>D;
    if(A+C==180 && B+D==180) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}

int main(){
    int T;
    cin>>T;
    while (T--)
    {
        solve();
    }
    

    return 0;
}