// here we see first different types of containers in cpp stl
// pair
// pair<int, int>
// pair<string, int>
// pair<vecotr<int>, int>
// pair<set<int>, int>
// pair<set<int>, map<int,int>>
// means inside <> there could be either datatype or other container as well 

#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

pair<int, string> p;
p=make_pair(1, "str"); //one way to store element in pair

p = {2,"str2"}; //another way to store element in pair

p.first = 3;
p.second ="str3";
// for (int i = 0; i < 3; i++)
// {
//     cout<<p.first<<" "<<p.second<<endl; //this will print three times 3 str3
// }


// let suppose we want to make an array which cotains two value of either same or different data types.
pair<int,int> P_array[3];
P_array[0]={1,2};
P_array[1]={2,2};
P_array[2]={1,4};
for (int i = 0; i < 3; i++)
{
    cout<<P_array[i].first<<" "<<P_array[i].second<<endl;
}


    
    return 0;
}