#include<iostream>
using namespace std;

class A{

   protected:
   // public:
      int a;
   public:
      void setdata(int a1){
         a=a1;
      }
      void getdata(){
         cout<<"value of a is: "<<a<<endl;
      }
};
class B : virtual public  A{

   protected:
      int b;
   public:
      void setdata1(int a1){
         b=a1;
      }
      void getdata1(){
         cout<<"value of b is: "<<b<<endl;
         // cout<<"value of a is: "<<a<<endl;
      }
};
class C : virtual public A{

   protected:
      int c;
   public:
      void setdata2(int a1){
         c=a1;
      }
      void getdata2(){
         cout<<"value of c is: "<<c<<endl;
      }
};
class D : public B, public C{

  
   public:
      
      void getdata3(){
         getdata2();
         getdata1();
         getdata();
      }
};


int main(){
   
   D d;
   d.setdata1(2);
   d.setdata2(4);
   d.setdata(5);
   d.getdata3();
   
   return 0;
}