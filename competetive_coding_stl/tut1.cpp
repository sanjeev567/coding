// cpp code for sort an array

#include<iostream>
#include<algorithm>
using namespace std;

void show(int a[], int array_size){
    for (int i=0; i<array_size; i++)
    cout<<a[i]<<" ";
}


// driver code
int main(){
    int a[]= {1,5,8,9,6,7,3,4,2,0};

    // size of the array
    int asize= sizeof(a)/sizeof(a[0]);
    cout<<"Array before sorted: "<<endl;
    show(a, asize);
    cout<<endl;
    sort(a, a+asize);
    cout<<"Array after get sorted: "<<endl;
    show(a, asize);
    return 0;
}