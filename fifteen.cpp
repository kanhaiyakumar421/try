#include<iostream>
using namespace std;
class fifteen{
    private:
    int a,b=0,c=1,d=0;
    public:
    void input()
    {
        cout<<"enter the number ";
        cin>>a;
    }
    void output()
    {
        for (int i = 1; i <=a; ++i)
        {
            if (i==1)
            {
                cout<<b<<",";
                continue;
            }
            if (i==2)
            {
                cout<<c<<",";
                continue;
            }
            d=b+c;
            b=c;
            c=d;
            cout<<d<<",";
            
            
        }
        
    }
};
int main()
{
    fifteen obj;
    obj.input();
    obj.output();
    return 0;
}