#include <iostream>
using namespace std;

class twentysix
{
private:
    int a, b, c;

public:
    void input()
    {
        cout << "Enter the startig value";
        cin >> a;
        cout << "Enter the ending value";
        cin >> b;
    }
    void output()
    {
        cout << "prime number is ";
        for (int i = a; i <= b; i++)
        {
            if (i == 1 || i == 0)
                continue;
            c = 1;
            for (int j = 2; j <= i / 2; ++j)
            {
                if (i % j == 0)
                {
                    c = 0;
                    break;
                }
            }
            if (c == 1)
                cout << i <<endl;
        }
    }};
    int main()
    {
        twentysix obj;
        obj.input();
        obj.output();
        return 0;
    }
