#include<iostream>
using namespace std;

class Employee{
private:
    int Id;
    int salary;
public:
    void setdata(){
        cout<<"Enter Id of the employee: "<<endl;
        cin>>Id;
    }
    void getdata(){
        salary=122;
        cout<<"Id of your employee is: "<<Id<<endl;
        cout<<"salary  of your employee is: "<<salary<<endl;

    }
};

int main(){
    // Employee sanjeev, rahul, aniket, roshan;
    // sanjeev.setdata();
    // sanjeev.getdata();
    Employee gk[4];
    for (int i=0; i<4; i++){
        gk[i].setdata();
        gk[i].getdata();
    }
    
    return 0;
}