#include<iostream>
using namespace std;
class fourteen
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of a";
        cin>>a;
    }
    void output()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout<<a<<"X"<<i<<"="<<a*i<<endl;
        }
        
    }
};
int main()
{
    fourteen obj;
    obj.input();
    obj.output();
    return 0;
}