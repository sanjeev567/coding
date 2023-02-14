#include <iostream>
using namespace std;
class Backdeposit
{
private:
    int principal;
    float interest_rate;    //here interest_rate must be in float because whatever you defined it will be in float finally.
    int year;
    float return_value;

public:
    Backdeposit() {}
    Backdeposit(int p, int r, int t)
    {
        principal = p;
        interest_rate = float(r)/100;
        year = t;
        return_value = principal;
        for (int i = 0; i < t; i++)
        {
            return_value *=(1 + interest_rate);
        }
    }
    void show()
    {
        cout << "your principal amount is: "
             << principal << endl
             << "with interest rate: "
             << interest_rate << endl
             << " after: "
             << year << " years " << endl
             << "your updated balance is: "
             << return_value << endl;
    }
};

int main()
{
    int p;
    int r;
    int t;
    cout << "Enter the amount, rate and year for which you want to invest " << endl;
    cin >> p >> r >> t;
    Backdeposit b1;
    b1 = Backdeposit(p, r, t);
    b1.show();
    return 0;
}