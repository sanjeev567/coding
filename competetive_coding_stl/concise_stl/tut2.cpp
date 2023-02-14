// vector
// nothing special what we studies earlier are same with vector

// lets see vector<pair<int, int>>


#include<bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
    
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    vector<pair<int,int>> v={{1,2},{2,3},{3,4}};  //one way of defining vector

    int N;
    cin>>N;
    vector<pair<int,int>> v1;
    for (int i = 0; i < N; i++)
    {
        cin>>v1[i].first>>v1[i].second;
    }
    for (int i = 0; i < N; i++)
    {
        int x,y;cin>>x>>y;
        // v1.push_back({x,y}); //another way of storing pair in vector
        v1.push_back(make_pair(x,y)); //3rd way of storing pair in vector.
    }
    
    

    printVec(v);
    printVec(v1);
    // cout<<v[0].first<<" "<<v[0].second<<endl;
    return 0;
}