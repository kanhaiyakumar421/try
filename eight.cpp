#include <iostream>
using namespace std;
class eight
{
    private:
    char x;

public:
    void input()
    {
        cout << "Enter any character" << endl;
        cin >> x;
    }
    void check()
    {
        if (x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
        {
            cout<<x <<"is the vowel word";
        }
        else
        {
            cout<<x <<"is consonent word";
        }
        
    }
};

int main()
{
    eight obj;
    obj.input();
    obj.check();
    return 0;
}