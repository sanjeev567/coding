// https://www.codechef.com/problems/MARARUN
//marathon game 
// first question of may cook off

#include<bits/stdc++.h>
using namespace std;


 int result(int res1 ,int A, int B, int C){
        if(res1 <10 ) return 0;
        else if(res1 >=10 && res1<21) return A;
        else if(res1 >=21 && res1<42) return B;
        else return C;
}

int main(){
    int D, d, A, B, C,T;
    cin>>T;
    while(T--){
    cin>>D>>d>>A>>B>>C;
    int res=D*d;
    cout<<result(res, A, B, C);
    cout<<endl;
    }

    return 0;
}