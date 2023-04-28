#include<iostream>
using namespace std;
class twentyfive{
    private:
    int a,b=0,c=0;
    public:
    void input()
    {
        cout<<"Enter the number of a";
        cin>>a;
        b=a/2;

    }
    void output()
    {
        for (int i = 2; i <= b; i++)
        {
        if(a%i==0)
        {
           cout<<"Number is not prime"<<endl; 
           c=1;
           break;
        }
        }
        if(c==0)
        {
        cout<<"Number is prime"<<endl;
        }
        
    }


};
int main()
{
    twentyfive obj;
    obj.input();
    obj.output();
    return 0;
}