#include <iostream>
using namespace std;
class Backdeposit
{
private:
    int principal;
    int interest_rate;
    int year;
    float return_value;

public:
    Backdeposit() {}
    Backdeposit(int p, int r, int t)
    {
        principal = p;
        interest_rate = float(r) / 100;
        year = t;
        return_value = principal;
        for (int i = 0; i < t; i++)
        {
            return_value =return_value* (1 + interest_rate);
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
    Backdeposit b1;
    int p, r, t;
    cout << "Enter the amount, rate and year for which you want to invest " << endl;
    cin >> p >> r >> t;
    b1 = Backdeposit(p, r, t);
    b1.show();
    return 0;
}