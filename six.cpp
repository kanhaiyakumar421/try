#include <iostream>
using namespace std;
class six{
    public:
    int a=10,b=20,c;
    void noswap()
    {
        cout<<"no swapping of the number"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;

    }
    void swap()
    {
        c=a;
        a=b;
        b=c;
        cout<<"swapping of the number is "<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }

};
int main()
{
   six obj;
   obj.noswap();
   obj.swap();
   return 0; 
}
