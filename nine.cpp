#include<iostream>
using namespace std;

class nine{
    private:
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter the value ";
        cin>>a>>b>>c;
    }
    void output()
    {
        if (a>=b&&b>=c)
        {
            cout<<a<<"Largest number";
        }
        
        else if(b>=a&&b>=c)
        {
            cout<<b<<" is Largest number ";
        }
        else
        {
            cout<<c<<" is largest";
        }
        
    }
};
int main()
{
    nine obj;
    obj.input();
    obj.output();
    return 0;
}

