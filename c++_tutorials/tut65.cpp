//<----------------Template with multiple parameter----------------->


#include<iostream>
using namespace std;

template <class T1, class T2>
class class_1{
    private:
        T1 data1;
        T2 data2;
        public:
        class_1(T1 a, T2 b){
            data1=a;
            data2 =b;
            
        }

        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;

        }
};

int main(){
    // class_1 <int, int>obj1(2,3);
    // class_1 <int, float>obj1(2,3.3);
    class_1 <int, char>obj1(2,'c');
    obj1.display();

    
    return 0;
}