#include<iostream>
using  namespace std;
class complex
{
    int a,b;
    public:
    complex()
    {
        a=0;b=0;
    }
    complex(int x,int y)
    {
        a=x;b=y;
    }
    void show()
    {
        cout<<a<<" + i"<<b<<endl;
    }
    complex operator +(complex x)
    {
        complex t;
        t.a=a+x.a;
        t.b=b+x.b;
        return t;
    }
};
int main()
{
    complex obj1(12,10),obj2(10,11),res;
    obj1.show();
    obj2.show();
    res=obj1+obj2;
    res.show();
}