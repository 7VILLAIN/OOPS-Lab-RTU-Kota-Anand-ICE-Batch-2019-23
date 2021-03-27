#include<iostream>
using namespace std;
class parent
{
    protected:
    void display()
    {
        cout<<"Parent class function called"<<endl;
    }
};
class child: private parent 
{
    public:
    void show()
    {
        cout<<"Child class function called"<<endl;
    }    
};
int main()
{
    child a;
    a.show();
}
