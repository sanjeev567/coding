#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    vector<int> vec1;
    while (T--)
    {   
        int n;
        cin>>n;
        for (int i=0; i<n; i++){
            int y;
            cin>>y;
            vec1.push_back(y);
        }
        reverse(vec1.begin(), vec1.end());
        for(auto &x : vec1) cout<<x;
    }
    


    return 0;
}