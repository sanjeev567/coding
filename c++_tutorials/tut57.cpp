#include <iostream>
using namespace std;

class students
{
private:
    int roll_no, marks;

public:
    void setmarks(int a, int b)
    {
        roll_no = a;
        marks = b;
    }
    void getresult()
    {
        cout << "marks of the student whose roll " << roll_no << " is: " << marks << endl;
    }
};

int main()
{

    int size = 4;
    students *stu = new students[4];
    students *stutemp = stu;
    int p, q, i;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the roll and marks of the students " << i + 1 << endl;
        cin >> p >> q;
        stu->setmarks(p, q);
        stu++;
    }
    for (i = 0; i < size; i++)
    {
        cout<<"for student "<<i+1<<endl;
        stutemp->getresult();
        stutemp++;
    }

    return 0;
}