#include<iostream>
using namespace std;
class twentythree
{
    private:
    int a,b;
    public:
    void input()
    {
        cout<<"Enter the value of a and b";
        cin>>a>>b;

    }
    void output()
    {
        cout<<"Multipy of "<<a<<"and "<<b<<"is "<<a*b<<endl;
    }

};
int main()
{
    twentythree obj;
    obj.input();
    obj.output();
    return 0;
    
}