#include<iostream>
using namespace std;
class five
{
    private:
    int a;
    float b;
    double c;
    char d;
    public:
    void output()
    {
        cout<<"size of integer is "<<sizeof(a)<<endl;
        cout<<"size of float is "<<sizeof(b)<<endl;
        cout<<"size of char is "<<sizeof(d)<<endl;
        cout<<"size of double is "<<sizeof(c)<<endl;
    }
};
int main()
{
    five obj;
    obj.output();
    return 0;
}