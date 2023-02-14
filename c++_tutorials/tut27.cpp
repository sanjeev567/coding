// <---------------Examples of friend function--------------->
#include <iostream>
using namespace std;
class complex;  //forward declaration.
class calculator
{
public:
    int complex_real_sum(complex o1, complex o2);
    int complex_imaginary_sum(complex o1, complex o2);
};
class complex
{
private:
    int a;
    int b;
    //individuallly make fried function of different class.
    friend int calculator ::complex_real_sum(complex o1, complex o2);
    friend int calculator ::complex_imaginary_sum(complex o1, complex o2);
    /*
    In order to make friend of other class function we have to specify that as we do above with :: scoope resolution operator.
    */
    //    Aliter to make entire class as a friend
    friend class calculator; //to give permission to entire class or entire function of that class is called fried class.

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void getdata()
    {
        // cout << "value of a and b is: " << a << " and " << b << endl;
        cout << "Here the complex number is: " << a << " + " << b << "i" << endl;
    }
};

int calculator::complex_real_sum(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::complex_imaginary_sum(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    calculator calc;

    c1.setdata(2, 3);
    c1.getdata();
    c2.setdata(3, 5);
    c2.getdata();
    cout << "sum of real parts of c1 and c2 is: " << calc.complex_real_sum(c1, c2) << endl;
    cout << "sum of imaginary parts of c1 and c2 is: " << calc.complex_imaginary_sum(c1, c2) << endl;

    return 0;
}