#include <iostream>
using namespace std;

class four
{

private:
    int Dividend, Divisor;

public:
    void input()
    {
        cout << "Enter Dividend : ";
        cin >> Dividend;

        cout << "Enter Divisor : ";
        cin >> Divisor;
    }

    void output()
    {
        float Quotient, Remainder;
        Quotient = Dividend / Divisor;
        Remainder = Dividend % Divisor;
        cout << "Quotient of " << Dividend << " / " << Divisor << " is " << Quotient
             << endl;
        cout << "Remainder of " << Dividend << " % " << Divisor << " is "
             << Remainder << endl;
    }
};

int main()
{

    four obj;

    obj.input();

    obj.output();

    return 0;
}