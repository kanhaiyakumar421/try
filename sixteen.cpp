#include <iostream>
using namespace std;
class sixteen
{
private:
    int a, b ,gcd;

public:
    void input()
    {
        cout << "enter the value of a and b";
        cin >> a >> b;
    }
    void output()
    {
        for (int i = 0; i <= a && i <= b; ++i)
        {
            if (a%i==0&&b%i==0)
            {
                gcd=i;
                cout<<"gcd of"<<a<<"and"<<b <<"is"<<gcd<<endl;
            }
            
        }
    }
};
int main()
{
    sixteen obj;
    obj.input();
    obj.output();
    return 0;
}