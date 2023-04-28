#include<iostream>
using namespace std;
class twentyfour
{
    private:
    int a,b,c,d=0;
    public:
    void input()
    {
        cout<<"Enter the value of a";
        cin>>a;
        
    }
    void loop()
    {
        c=a;
        while(a>0)
        {
            b=a%10;
            d=(d*10)+b;
            a=a/10;
        }
    }
    void check()
    {
        if (c==d)
        {
            cout<<"this is ploidrown number ";
        }
        else
        {
            cout<<"This is not a polindrown number";
        }
        
        
    }

};
int main()
{
    twentyfour obj;
    obj.input();
    obj.loop();
    obj.check();
    return 0;
    
}