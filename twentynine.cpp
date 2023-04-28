#include <iostream>
using namespace std;
class twentynine{
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
        for (int i = 1; i < a; ++i)
        {
            if(a%i==0)
            cout<<i<<endl;
        }
        
    }
};
int main(){
    twentynine obj;
    obj.input();
    obj.output();
    return 0;
}