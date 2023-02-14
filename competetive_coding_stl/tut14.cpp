// cpp code to demostrate apply() and sum() functions in valarray:
#include<iostream>
#include<valarray>
#include<vector>


using namespace std;

int main(){
    // intializing the valarray
    valarray <int> varr= {2,4,5,2,5,6,7,7,8};
    
    // declaring another valarray:
    valarray <int> varr1;

    // using apply() fn to manipulate old varrr:
    varr1 = varr.apply([](int x) {return x=x+5;});
    
    // displaying varr and varr1
    cout<<"\n varr content are: ";
    for(int &x: varr) cout<<x<<" ";
    cout<<"\n varr1 content are: ";
    for(int &x: varr1) cout<<x<<" ";
    cout<<endl;
    // sum fn using in varr and varr1
    cout<<varr.sum()<<endl;
    cout<<varr1.sum()<<endl;
    
    return 0;
}