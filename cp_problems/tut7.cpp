#include<bits/stdc++.h>
using namespace std;


string solve(int x1,int x2,int y1,int y2,int z1,int z2){


        if ((x1<=x2) && (y1<=y2) && (z1>=z2))
            return "YES";
        else 
            return "NO";
      

}


int main(){
    long int T;
    cin>>T;
    while(T--){
        
        int x1, x2, y1,y2, z1, z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        cout<<solve(x1, x2, y1,y2, z1, z2)<<endl;
    }

    return 0;
    
}