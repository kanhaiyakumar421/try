#include<iostream>
using namespace std;
class thirteen
{
    private:
    int a=1,b;
    public:
    void input()
    {
        cout<<"enter any number";
        cin>>b;
    }
    void output()
    {
        for (int i = 1; i <= b; i++)
        {
            a=a*i;
        }
        cout<<"fatorial of"<<b <<":-"<<a<<endl;
        
    }

};
int main()
{
    thirteen obj;
    obj.input();
    obj.output();
    return 0;
}