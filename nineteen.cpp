#include<iostream>
using namespace std;
class nineteen
{
    private:
    int a,b,c=1;
    public:
    void input()
    {
        cout<<"Enter the number ";
        cin>>a;
        cout<<"Enter the power of number";
        cin>>b;
    }
    void output()
    {
        for (int i = 0; i < b; i++)
        {
            c=c*a;
        }
        cout<<a<<"power of"<<b<<"is"<<c<<endl;
        
    }

};
int main()
{
    nineteen obj;
    obj.input();
    obj.output();
    return 0;
}