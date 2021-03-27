#include<iostream>
using namespace std;
template <class T>
class mypair
{   T a,b;
    public:
    mypair(int x,int y)
    {
        a=x;
        b=y;
    }
      T getmax()
        {
            T r;
             r=a>b?a:b;
            return r;
        }

};
int main()
{
    mypair <int> o(10,2);
    cout<<o.getmax()<<endl;

}