#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> vec1;

    for(int i=0; i<5; i++){
        vec1.push_back(i);

    }
    cout<<"\n output of begin and end: "<<endl;
    for (auto i = vec1.begin(); i!= vec1.end(); ++i)
        cout<<*i<<" ";

    cout<<"\n output of cbegin and cend: "<<endl;
    for (auto i = vec1.cbegin(); i!= vec1.cend(); ++i)
        cout<<*i<<" ";

    cout<<"\n output of rbegin and rend: "<<endl;
    for (auto i = vec1.rbegin(); i!= vec1.rend(); ++i)
        cout<<*i<<" ";
    
    cout<<"\n output of crbegin and crend: "<<endl;
    for (auto i = vec1.crbegin(); i!= vec1.crend(); ++i)
        cout<<*i<<" ";
    
    
    return 0;
}