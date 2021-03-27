// lab task 11.4
#include<iostream>
#define pi 3.14
using namespace std;
class fun
{
    public:
    void area(int a)
    {
          cout<< "area of cicle = "<<a*a*pi<<endl;  
    }
    void area(int l,int b)
    {
        cout<< "area of rectangle = "<<l*b<<endl;
    }
    void area(float t,int b,int h)
    {
        cout<< "area of triangle = "<<(float)t*b*h<<endl;
    }
};
int main()
{
    int r,l,b;
    fun a;
    a.area(10);
    a.area(12,3);
    a.area(12.2,15,12);
}
