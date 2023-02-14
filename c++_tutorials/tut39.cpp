//<----------------copy constructors-------------------->
#include<iostream>
using namespace std;
class student{
private:
int data;
public:

student(){}
student(int a){
    data=a;

}
void display(){
    cout <<"value of data is: "<<data<<endl;

}
student(student &obj){
    data=obj.data;
    cout<<"This is copy constructor !!!"<<endl;    //when we do not write any copy constructor compiler sends automated copy constructor.
}
};



int main(){
    student s1,s2(30),s3(45);
    s1=student(s2);  //this will called copy constructor
    s1.display();
    s2.display();
    s3.display();

    return 0;
}