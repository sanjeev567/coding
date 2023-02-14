// vector of array
// vector<int> v[N]; here we make N vector whose size was not declared here eg- v[1],v[2],v[3],.....v[N];

#include<bits/stdc++.h>
using namespace std;


void printVec(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
    
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int N;
    cin>>N;
    vector<int> v[N]{5,0};
    for (int  i = 0; i < N; i++)
    {
        int n;cin>>n;
        // for (int j = 0; j < n; j++)
        // {
        //     int x;
        //     cin>>x;
        //     v[i].push_back(x);
        // }
        // sort(v[i].begin(),v[i].end());
        printVec(v[i]);
        
    }

    
    return 0;
}