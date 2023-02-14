//                      <---------------calculator-------------------->
#include <iostream>
#include <cmath>
using namespace std;
int sum(int a, int b){
    return (a+b);
}
int difference(int a, int b){
    return (a-b);
}
int product(int a, int b){
    return (a*b);
}
int devide(int a, int b){
    return (a/b);
}
float percentage(float a,float b){
    return a*(b/100);
}
float exponential(float a){
    return a*a;
}
int square_root(int a){
    return sqrt(a);
}
float sin_value(float a){
    return sin(a);
}
float cos_value(float a){
    return cos(a);
}
float tan_value(float a){
    return tan(a);
}

int factorial(int n)
{

    if (n == 0 || n == 1)

        return 1;
    else
        return n * factorial(n - 1);
}
void take_input(){
    // int n;
    cout<<"press 1 for addition"<<endl
        <<"press 2 for substraction"<<endl
        <<"press 3 for multiplication"<<endl
        <<"press 4 for division"<<endl
        <<"press 5 for percentage"<<endl
        <<"press 6 for power"<<endl
        <<"press 7 for square root"<<endl
        <<"press 8 for sin value"<<endl
        <<"press 9 for cos value"<<endl
        <<"press 10 for tan value"<<endl;
        // cin>>n;
        // return n;
}


int main()
{
    int n,i=1;
    char c;
    int x,y;
    float x1,y1;
    float pie=3.14;
    // string choice;
    while (i!=0)
    {
        
    
    take_input();
    cout<<"Enter your choice: "<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"your choice is addition: "<<endl;
        cout<<"Enter two no. that you want to add: "<<endl;
        cin>>x>>y;
        cout<<"sum of "<<x<<" and "<<y<<" is: "<<sum(x,y);
        break;
    case 2:
        cout<<"your choice is substraction: "<<endl;
        cout<<"Enter two no. that you want to substract: "<<endl;
        cin>>x>>y;
        cout<<"substraction of "<<x<<" and "<<y<<" is: "<<difference(x,y);
        break;
    case 3:
        cout<<"your choice is multiplication: "<<endl;
        cout<<"Enter two no. that you want to get product: "<<endl;
        cin>>x>>y;
        cout<<"produt of "<<x<<" and "<<y<<" is: "<<product(x,y);
        break;
    case 4:
        cout<<"your choice is division: "<<endl;
        cout<<"Enter two no. that you want to devide: "<<endl;
        cin>>x>>y;
        cout<<"Division of "<<x<<" and "<<y<<" is: "<<devide(x,y);
        break;
    case 5:
        cout<<"your choice is percentage: "<<endl;
        cout<<"Enter first no that you want to get % and 2nd that how much percentage: "<<endl;
        cin>>x1>>y1;
        cout<<y1<<"percentage of "<<x1<<" is: "<<percentage(x1,y1)<<endl;
        cout<<"balance that you have to pay is: "<<x1-percentage(x1,y1);
        break;
    case 6:
        cout<<"your choice is power: "<<endl;
        cout<<"Enter the no. that you want to get power: "<<endl;
        cin>>x1;
        cout<<"power of "<<x1<<" is: "<<exponential(x1);
        break;
    case 7:
        cout<<"your choice is square root: "<<endl;
        cout<<"Enter the no. that you want to get square_root: "<<endl;
        cin>>x;
        cout<<"square root of "<<x<<" is: "<<square_root(x);
        break;
    case 8:
        cout<<"your choice is to find sine value: "<<endl;
        cout<<"Enter the no. that you want to get sin_value: "<<endl;
        cin>>x1;
        cout<<"sin("<<x1<<") is: "<<sin_value(x1)*(180/pie);
        break;
    case 9:
        cout<<"your choice is to find cos value: "<<endl;
        cout<<"Enter the value that you want to cos_value: "<<endl;
        cin>>x1;
        cout<<"cos("<<x1<<") is: "<<cos_value(x1)*(180/pie);
        break;
    case 10:
        cout<<"your choice is to find tan value: "<<endl;
        cout<<"Enter the no. that you want to get tan value: "<<endl;
        cin>>x1;
        cout<<"tan("<<x1<<") is: "<<tan_value(x1)*(180/pie);
        break;
    
    default:
        cout<<"Invalid input!"<<endl;
        break;
    }
    cout<<"\npress y to continue:"<<endl;
    cin>>c;
    if (c=='y')
        continue;
    else
        break;
    }

    return 0;
}