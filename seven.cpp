#include<iostream>
using namespace std;
class seven
{
    int a;

public:
    void input()
    {
        cout<<"Enter the value of a"<<endl;
        cin>>a;
    }
    void check()
    {
        if (a % 2 == 0)
        {
            cout<<a <<"is even number"<<endl;
        }
        else
        {
            cout<<a<<"is odd number"<<endl;
        }
    }
};
int main()
{
    seven obj;
    obj.input();
    obj.check();
    return 0;
} 



    

  
