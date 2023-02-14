#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    vector<int> a(n+1);
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }
    int des;
        cin>>des;
    
    if (a[des]==1 || a[des]==2){
        cout<<" 0 min "<<endl;
    }
    
    while (m--)
    {
        
   

        int x;
    vector<int> left, right;
    for(int i=a[1]; i<a[des]; i++){
        right.push_back(a[x]);
    }
    // reverse(right.begin(), right.end());
    for(auto it5 = right.begin(); it5 != right.end(); ++it5){
        cout<<*it5<<" ";
    }
    
    cout<<endl;
    int y;
    for(int i=a[(des+1)]; i<=a[n]; i++){
        left.push_back(a[y]);
    }
    for(auto it4 = left.begin(); it4 != left.end(); ++it4){
        cout<<*it4<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it1;
    it1= find(right.begin(), right.end(),1);
    int rt = (it1 - right.begin()) +1;

    vector<int> :: iterator it2;
    it2 = find(left.begin(),left.end(), 2);
    cout<<endl;
    
    int lft = (it2 - left.begin())+1;
    cout<<rt<<endl;
    cout<<lft<<endl;
    int ans = min(rt, lft);
    cout<<ans<<" ";
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
}