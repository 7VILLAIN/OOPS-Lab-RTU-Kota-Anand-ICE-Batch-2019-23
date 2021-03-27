#include<iostream>
using namespace std;
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
    num operator++()
    {
        a=a+1;
        return num(a);
    }
    num operator++(int)
    {   num temp;
        temp.a=a;
        a=a+1;
        return temp.a;
    }
};
int main()
{
    num n(10),m;
    m=n++;
    m.show();
    n.show();
    m=++n;
    m.show();
    return 0; 
}