#include <iostream>
using namespace std;
class eleven
{
private:
    int a, b = 0;

public:
    void input()
    {
        cout << "Enter the value of a";
        cin >> a;
    }
    void output()
    {
        for (int i = 0; i < a; i++)
        {
            b = b + i;
        }
        cout << "sum of first" << a << "natural number is " << b;
        
    }
};
int main()
{
    eleven obj;
    obj.input();
    obj.output();
    return 0;
}