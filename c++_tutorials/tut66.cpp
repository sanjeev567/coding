//<-------------template with default argurment----------------->

#include<iostream>
using namespace std;
 

 template<class T1 =int, class T2=char, class T3 =float>
 class sanjeev{
     private:
        T1 data1;
        T2 data2;
        T3 data3;
    public:
        sanjeev(T1 a, T2 b, T3 c){
            data1=a;
            data2=b;
            data3=c;
            
        }
        void display(){
            cout<<"value of data1 is: "<<data1<<endl;
            cout<<"value of data2 is: "<<data2<<endl;
            cout<<"value of data3 is: "<<data3<<endl;
        }
 };

int main(){
    sanjeev <>s1(1,'x',1.4);
    s1.display();
    sanjeev <int, float, char>s2(3,3.4,'f');
    s2.display();
    

   
    return 0;
}