#include<bits/stdc++.h>
using namespace std;

void solve(int N, int P, int K, int i, int ctr){

    if (i==P) cout<<ctr; 
    if (i>N) return;
    else solve(N, P, K, i+K, ctr+1);
}
int main(){
    int T;
    cin>>T;
    while (T--){
        int n, p, k,i=0,ctr=1;
        cin>>n>>p>>k;
        solve(n,p, k,i,ctr);
        cout<<endl;
    }

    return 0;
}