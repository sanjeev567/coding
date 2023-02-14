#include <iostream>
using namespace std;

template <class T1, class T2>
class addition
{
private:
    T1 data1;
    T2 data2;

public:
    addition(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display();
};

template <class T1, class T2>
void addition<T1, T2>::display()
{
    cout << "value of data1 is: " << data1 << endl
         << "and data2 is: " << data2 << endl;
}
template <class T>
void show(T a)
{
    cout << "This is templatised: " << a << endl;
}
void show(int a)
{
    cout << "This is not templatised: " << a << endl;
}

int main()
{
    addition<int, int> a1(3, 4);
    a1.display();

    show(4); //exact match will take highest priority...
    show(4.1);

    return 0;
}