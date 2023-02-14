// vector<vector<int>> v;



#include<bits/stdc++.h>
using namespace std;

void printVec(vector<vector<int>> &v){
    
    for (int i = 0; i < v.size(); i++)
    {
        vector<int> ve1(v[i]);
        for(int j=0; j<ve1.size(); j++){
        cout<<ve1[j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    // int N;
    // cin>>N;
    // // vector<vector<int>> v(N); // if we use this then we can use v[i] = ve1 instead of v.push_back(ve1) bcoz here we specify the size of the vector.
    // vector<vector<int>> v;   // if we use this then we can use v.push_back(ve1) {not v[i] =ve1;}
    // for (int i = 0; i < N; i++)
    // {
        // int n; cin>>n;
        // // vector<int> ve1(n);  //same this which is discussed above
        // vector<int> ve1;
        // for (int j = 0; j < n; j++)
        // {
        //     int x;
        //     cin>>x;
        //     // ve1[j] =x;  //above discuss when we can use this.
        //     ve1.push_back(x);

        // }
        // sort(ve1.begin(),ve1.end());
        // // v[i]=ve1;    //above discuss when we can use this.
        // v.push_back(ve1);
        //     }
        // printVec(v);


        // one another eg vector with pointer and iterater of that pair
        vector<pair<int,int>> p={{1,2},{3,4},{5,6}};
        // vector<pair<int,int>>::iterator it = p.begin();
        // cout<<it->first<<" "<<it->second<<endl;
        for(auto it: p)cout<<it.first<<" "<<it.second<<endl;
    
    return 0;
}