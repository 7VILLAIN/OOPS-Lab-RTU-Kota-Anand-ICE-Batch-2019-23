#include<iostream>
using namespace std;
class A
{

    public:
    A()
    {
        cout<<"this is parent class constructor"<<endl;
    }
    A(int x)
    {   
        
        cout<<"this is parent class parameterised constructor, parameter ="<<x<<endl;
    }
};
class B : public A
{

    public:
    B()
    {
        cout<<"this is child class constructor"<<endl;
    }
    B(int x)
    {   
        
        cout<<"this is child class parameterised constructor, parameter ="<<x<<endl;
    }
    B(int x,int y) :A(y)
    {
        cout<<"this is child class multi-parameterised constructor, parameters ="<<x<<","<<y<<endl;
    }
};
int main()
{
    B obj,obj2(12),obj3(11,13);

}