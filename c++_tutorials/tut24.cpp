//    <---------------static data member and static function---------------->
/*static data used to retained value of the the each objects.
by default it is initialised with 0
static variable is connects with class not with objects 
so it is properties of class and its life is until entire program get terminated.
its scope is inside the class 
static variable is one and shared to all objects of that class.
static variable is declared inside the class.
but its definition must be outside the class.

static functions-->
it is made for to use of only static data members.
it do not need of any object to run.
it can be run only with the name of the class as shown below.
it can access static data members only.
it do not have access of this pointer of the class.

*/
#include <iostream>
using namespace std;
class Employee
{

private:
    static int count; //count=1 is wrong here   //declaration of static variables.
    int Id;

public:
    void setdata()
    {
        cout << "Enter the Id of the employee" << endl;
        cin >> Id;
        count++;
    }
    void getdata()
    {
        cout << "Id of your employee no " << count << " is " << Id << endl;
    }
    static void getcount(){
        // cout<<Id<<endl;  --> static fn only access static variables.
        cout<<"value of the count is: "<<count<<endl;

    }
};
int Employee::count; //count=10--> is right definition of the class.
int main()
{
    Employee sanjeev, rohan, rahul;
    sanjeev.setdata();
    sanjeev.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    rahul.setdata();
    rahul.getdata();
    Employee::getcount();

    return 0;
}