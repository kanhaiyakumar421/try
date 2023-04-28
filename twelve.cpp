#include<iostream>
using namespace std;
class twelve{
    private:
    int a;
    public:
    void input(){
        cout<<"Enter any Year";
        cin>>a;
    }
    void output()
    {
        if (a% 4==0)
        {
            cout<<"this is leap year";
        }
        else if(a%400==0)
        {
            cout<<"this is leap year";
        }
        else if(a%100==0)
        {
            cout<<"this is leap year";
        }
        else
        {
            cout<<"this is not leap year";
        }
        
    }

};
int main()
{
    twelve obj;
    obj.input();
    obj.output();
    return 0;
}