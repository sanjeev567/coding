//                          <-------------------Distance of two points----------------------->
#include<iostream>
#include<cmath>

using namespace std;
class point2;
class point1{
    private:
    friend float distance (point1 o1, point2 o2);
    int x1, y1;
    public:
        point1(int a, int b){
            x1=a; y1=b;
        }
        void print_point1(){
            cout <<"point1 is: "<<x1<<","<<y1<<endl;
        }
};
class point2{
    private:
    int x2, y2;
    friend float distance (point1 o1, point2 o2);
    public:
        point2(int a, int b){
            x2=a; y2=b;
        }
        void print_point2(){
            cout <<"point2  is: "<<x2<<","<<y2<<endl;
        }
};
float distance (point1 o1, point2 o2){
    return (sqrt(((o1.x1-o2.x2)*(o1.x1-o2.x2))+((o1.y1-o2.y2)*(o1.y1-o2.y2))));
}

int main(){
    point1 p1(3,4);
    point2 p2(4,2);
    cout<<distance(p1,p2);


    
    return 0;
}