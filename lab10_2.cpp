#include<iostream>
using namespace std;
class parent
{   int a;
    protected:
    void set(int k)
    {
        a=k;
    }
};
class child: public parent 
{   int b;
    public:
    void ss(int k)
    {
        b=12;
    }    
};
int main()
{
    child a;
    a.ss(12);
    
}
