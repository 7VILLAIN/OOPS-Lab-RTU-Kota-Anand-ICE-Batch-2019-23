#include<iostream>
using  namespace std;
class num
{
    int a;
    public:
    num()
    {
        a=0;
    }
    num(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<a<<endl;
    }
    num operator *(num x)
    {
        num t;
        t.a=a*x.a;
        
        return t;
    }
};
int main()
{
    num obj1(12),obj2(10),res;
    obj1.show();
    obj2.show();
    res=obj1*obj2;
    res.show();
}