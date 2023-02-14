#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while (T--){
      vector<int> vec1;
      for(int i=0; i<4; i++)
      { 
          int x;
          cin>>x;
          vec1.push_back(x);
      }

     int res0 = count(vec1.begin(), vec1.end(),vec1[0]);
     int res1, res2, res3;
      res1 = count(vec1.begin(), vec1.end(),vec1[1]);
      res2 = count(vec1.begin(), vec1.end(),vec1[2]);
      res3 = count(vec1.begin(), vec1.end(),vec1[3]);
   
     vector<int> vec2{ res0, res1, res2, res3};
    int final=*max_element(vec2.begin(), vec2.end());
     if (final ==4) cout<<"0"<<endl;
     else if(final ==3) cout<<"1"<<endl;
     else if (final ==2) cout<<"2"<<endl;
     else cout<<"2"<<endl;
    }
    return 0;
}