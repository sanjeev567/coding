#include<bits/stdc++.h>
using namespace std;

int func1(int x1) { return (7 * x1);}
int func2(int d1, int y, int z) {
    return ((d1*y) + ((7-d1)* z));
}

int main(){
    int T;
    cin>>T;
    while (T--){
        int x, y, z,d;
        cin>>d>>x>>y>>z;
        if (d>7 && y<x && z>x) break;
        else{
        int res1, res2;
        res1=func1(x);
        res2=func2(d, y, z);
        if (res1>res2) cout<<res1<<endl;
        else cout<<res2<<endl;
        }
    }
    
    return 0;
}