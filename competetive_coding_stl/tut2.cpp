// cpp code for searching element in  stl
#include<iostream>
#include<algorithm>
using namespace std;

void show(int a[], int a_size){
    for (int i=0; i<a_size; i++)
    cout<<a[i]<<" ";
}


// driver code
int main(){
    int a[]={5,3,2,1,8,9,90,0,1};
    int a_size=sizeof(a)/sizeof(a[0]);

    sort(a, a+a_size);
    show(a, a_size);
    int b_search=binary_search(a, a+a_size, 2);
    cout<<endl;
    if (b_search==1) cout<<"yes the element got found: "<<endl;
    else
    cout<<"not found: "<<endl;
    // show(a, a_size);

    return 0;
}