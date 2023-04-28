#include<iostream>
using namespace std;
class thirty{
    private:
    int a;
    public:
    void input()
    {
        cout<<"ENter rows number";
        cin>>a;
    }
    void output()
    {
        for (int i = 1; i <=a; ++i)
        {
            for(int j=1;j<=i;++j){
                cout<<"*";
            }
            cout<<" "<<endl;
        }
        
    }
};
int main()
{
    thirty obj;
    obj.input();
    obj.output();
    return 0;
}