//                  <------------------Destructor----------------------->
// destructor is used to release memory of the system whenever we do not  need of any code further then we call destructor 
// after running it to release memory of the system and work properly.
#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    ~num()
    { //destructor created here.
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3; //if we create an object and use { }then its scope will only insede the block.
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
