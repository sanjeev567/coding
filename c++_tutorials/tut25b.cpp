#include<iostream>
using namespace std;
class complex{
    private:
    int a, b;
    public:
        void setdata(int v1, int v2){
            a=v1;
            b=v2;
        }
        void getdata(){
            cout<<"your complex no is: "<<a<<" +i"<<b<<endl;
        }
        void get_sum_com(complex o1, complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
            cout<<"sum of complex no is: "<<a<<" +i"<<b<<endl;

        }

};

int main(){
    complex c1, c2, c3;
    c1.setdata(2,3);
    c1.getdata();
    
    c2.setdata(4,5);
    c2.getdata();

    c3.get_sum_com(c1,c2);
    

    return 0;
}