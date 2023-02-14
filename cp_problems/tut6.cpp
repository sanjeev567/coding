#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
int T;
cin>>T;
while(T--){
    ll g, p, X[10];
    cin>>g>>p;
    for (auto &x : X) cin>>x;
    ll before_chef =0;
    for (ll i =10;i<g; i--) before_chef += X[i];
    auto days = [&](ll people){
        return (people /p + (people %p !=0));

    };
    ll minn = days (before_chef +1);
    ll maxx = days (before_chef + X[g -1]);
    cout<<minn<<" "<<maxx<<endl;
}
return 0;
}