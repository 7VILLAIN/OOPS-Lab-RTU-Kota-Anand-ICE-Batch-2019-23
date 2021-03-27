#include<iostream>
using  namespace std;
class A
{
    int a;
    public:
    A(int X)
    {
        a=X;
    }
    void show()
    {
        cout<<a<<endl;
    }
    A operator -()
    {
        a=-a;
        return A(a);
    }
};
int main()
{
    A obj(10);
    obj.show();
    -obj;
    obj.show();
}