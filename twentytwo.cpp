#include<iostream>
using namespace std;
class twentytwo
{
    private:
    char a;
    public:
    void input()
    {
        cout<<"enter any character";
        cin>>a;

    }
    void output()
    {
        cout<<"ascii value of "<<a<<int(a);
    }

};
int main()
{
    twentytwo obj;
    obj.input();
    obj.output();
    return 0;
}