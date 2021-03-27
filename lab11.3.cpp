#include<iostream>
using namespace std;
class A
{

    public:
    A()
    {
        cout<<"this is parent class constructor"<<endl;
    }
    ~A()
    {
        cout<<"this is parent class destructor"<<endl;
    }
 
};
class B : public A
{

    public:
    B()
    {
        cout<<"this is child class constructor"<<endl;
    }
    ~B()
    {
        cout<<"this is child class destructor"<<endl;
    }

};
int main()
{
    B obj;

}