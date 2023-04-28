#include <iostream>
using namespace std;
class twentyseven
{
private:
    int a, b, c, d = 0;

public:
    void input()
    {
        cout << "Enter the value of a";
        cin >> a;
        b = a;
    }
    void output()
    {
        while (b != 0)
        {
            c = b % 10;
            d += c * c * c;
            b /= 10;
        }
    }
    void check()
    {
        if (d == a)
            cout << a << "is armstrong number";
        else
        cout<<a<<"is not a armstrong number";
    }
};
int main()
{
    twentyseven obj;
    obj.input();
    obj.output();
    obj.check();
    return 0;
}