#include<iostream>
using namespace std;

void solve(){
     int N, A, B, res, end;
        cin>>N>>A>>B;
        res = (2*(180+N));
        end = A+B;
        cout<<(res-end)<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
       solve();
    }
    return 0;
}