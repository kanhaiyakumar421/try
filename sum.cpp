#include <iostream>
using namespace std;
class first
{
private:
    int a, b, sum;

public:
    void input()
    {
        cout << "enter the two number an and b" << endl;
        cin >> a >> b;
    }

    void output()
    {
        sum = a + b;
        cout << "sum of a nad b is " << endl;
        cout << sum;
    }
};
int main()
{
    first obj;
    obj.input();
    obj.output();
    return 0;
}
