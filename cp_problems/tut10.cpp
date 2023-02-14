#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n, m, count=0;
        cin>>n>>m;
        for(int i=0; i<n;i++){
            for(int j=0; j<m; j++){
                char x;
                cin>>x;
                if (x=='1') count++;

            }
        }
    //   here we have only odd no of 1 to get require ans.
        if (count%2) cout<< "No"<<endl;
        else cout<<"Yes"<<endl;
    }


return 0;
}