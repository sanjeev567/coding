// unordered set
// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> s1;
    s1.insert("hello");
    s1.insert("ji");
    s1.insert("kaise");
    s1.insert("sare");

    string key = "slow";

    if (s1.find(key)==s1.end())
        cout<<key<<" Not found in s1: "<<endl;
    else
        cout<<key<<" found in s1: "<<endl;
        
    key = "kaise";
    if (s1.find(key)==s1.end())
        cout<<key<<" Not found in s1: "<<endl;
    else
        cout<<key<<" found in s1: "<<endl;


    for(auto i=s1.begin(); i!=s1.end(); ++i)
    cout<<*i<<" ";
    cout<<endl;


    return 0;
}