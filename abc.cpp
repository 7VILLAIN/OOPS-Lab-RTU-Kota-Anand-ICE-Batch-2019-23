#include<iostream>
using namespace std;
void fun(int a)
{
    cout <<"a="<<a<<endl;
}
void fun(float a)
{
    cout <<"a="<<a<<endl;
}
int main()
{
    fun(12);
    fun((float)22.33);
    return 0;
}
