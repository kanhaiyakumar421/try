#include<iostream>
using namespace std;
class eighteen
{
    private:
    int a,b=0,c;
    public:
    void input()
    {
        cout<<"Enter the value of a";
        cin>>a;

    }
    void output()
    {
        while (a!=0)
        {
            c=a%10;
            b=b*10+c;
            a/=10;
        }
        cout<<"reversed number is "<<b<<endl;
        
    }
};
int main()
{
    eighteen obj;
    obj.input();
    obj.output();
    return 0;
}