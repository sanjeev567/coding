#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll(int r)
    {
        roll_number = r;
    }
    void getroll()
    {
        cout << "roll number is: " << roll_number << endl;
    }
};
class marks : public student
{
protected:
    int maths, physics;

public:
    void setmarks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void getmarks()
    {
         set_roll(5);
        getroll();
        cout << "marks in physics of roll: " << roll_number << " is: " << physics << endl;
        cout << "marks in maths of roll: " << roll_number << " is: " << maths << endl;
    }
};
class result : public marks
{
protected:
    int pr;

public:
    void percentage()
    {
       set_roll(1);
       getroll();
        setmarks(44,33);
        getmarks();
        cout << float(maths + physics) / 2;
    }
};

int main()
{
    result sanjeev;
    sanjeev.percentage();
    return 0;
}