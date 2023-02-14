// map in stl
// it contains pair values like <int,int> , <int, string> etc....
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    map<int,int> mp;
    for(int i=0; i<5;i++){
        int x,y;
        cin>>x>>y; mp ={x,y};
        auto it = mp;
        cout<<mp.first<<" "<<mp.second<<endl;
    }
    return 0;
}