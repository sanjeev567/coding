#include<iostream>
using namespace std;

int main(){
    int i=1,a;
    cout<<"Enter the number which you want to get table "<<endl;
    cin>>a;
    // cout <<"table using for loops"<<endl;
    // for ( i=1; i<=10; i++){
    //     cout<<a<< " x "<<i<<" = "<<a*i<<endl;
    // }
    // cout<<"table "
    // while(i<=10){
    //      cout<<a<< " x "<<i<<" = "<<a*i<<endl;
    //      i++;
    // }
    do{
         cout<<a<< " x "<<i<<" = "<<a*i<<endl;
         i++;

    }
    while(i<=10);


    return 0;
    
}