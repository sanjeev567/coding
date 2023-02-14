//<------------------Single Inheritance----------------------->
//privately inherited.
#include<iostream>
using namespace std;
class Base1{
int data1;
public:
int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base1:: setdata(){
    data1=10;
    data2=20;

}
int Base1:: getdata1(){
    return data1;
}
int Base1:: getdata2(){
    return data2;
}
class Derived : public Base1{
int data3;
public:
    void process();
    void display();
};
void Derived:: process(){
    data3=data2*getdata1();
}
void Derived:: display(){
    cout<<"value of data1 is: "<<getdata1()<<endl;
    cout<<"value of data2 is: "<<data2<<endl;
    cout<<"value of data3 is: "<<data3<<endl;
}

int main(){
    // Base1 b1;
    Derived d1;
    d1.setdata();
    d1.process();
    d1.display();
    Base1 b1;
    b1.setdata();
    cout<<"value of data1 through base class is"<<b1.getdata1()<<endl;
    cout<<"value of data2 through base class is"<<b1.getdata2()<<endl;
    return 0;
}