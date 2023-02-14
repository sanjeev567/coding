//<------------------more on friend functiion-------------->
#include<iostream>
using namespace std;
class Y;
class X {
    private:
    int data;
    friend int sum(X,Y);
    public:
    void setvalue(int a){
        data=a;
    }
};
class Y {
    private:
    int data;
    friend int sum(X,Y);
    public:
    void setvalue(int a){
        data=a;
    }
};
int sum(X o1, Y o2){
    return (o1.data+ o2.data);

}
int main(){
    X x1;
    Y y1;
    x1.setvalue(5);
    y1.setvalue(8);
    cout<<sum(x1,y1)<<endl;
    
    return 0;
}