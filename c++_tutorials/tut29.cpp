//<------------------more on friend functiion-------------->
#include<iostream>
using namespace std;
class Y;
class X{
    private:
    int val1;
    public:
    friend void exchange(X &x1, Y &y1);
        void indata(int a){
            val1=a;
        }
        void outdata(){
            cout <<"value of val1: "<<val1<<endl;

        }
};
class Y{
    private:
    int val2;
    public:
    friend void exchange(X &x1, Y &y1);
        void indata(int a){
            val2=a;
        }
        void outdata(){
            cout <<"value of val2: "<<val2<<endl;

        }
};
void exchange(X &x1, Y &y1){
    int temp=x1.val1;
    x1.val1=y1.val2;
    y1.val2=temp;
}

int main(){
    X oc1;
    Y oc2;
    oc1.indata(5);
    oc2.indata(2);
    cout<<"value of val1 before exchange is: "<<endl;
    oc1.outdata();
    cout<<"value of val2 before exchange is: "<<endl;
    oc2.outdata();
    exchange(oc1, oc2);
     cout<<"value of val1 after exchange is: "<<endl;
    oc1.outdata();
    cout<<"value of val2 after exchange is: "<<endl;
    oc2.outdata();
    
    return 0;
}