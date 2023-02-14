#include<iostream>
using namespace std;

template<class T1, class T2>
float Average(T1 a, T2 b){
    return (a+b)/2.0;
}
template <class T >
 void swapp(T &a, T &b){
     T temp =a;
     a=b;
     b=temp;

 }

int main(){
    int a1=5,b1=2;
    cout<<"avg of a1 and b1 is: "<<Average(a1,b1);
    cout<<endl;

    float a2=5.1,b2=2.1;
    cout<<"avg of a2 and b2 is: "<<Average(a2,b2);

    cout<<endl;
    swapp(a1,b1);
    cout<<a1<<endl<<b1<<endl;

    return 0;
}