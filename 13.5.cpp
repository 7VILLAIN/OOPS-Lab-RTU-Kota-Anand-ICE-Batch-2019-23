#include<iostream>
using namespace std;
template <class T>
T getmax(T a, T b)
{
    T r;
    r=a>b?a:b;
    return r;
}
int main()
{
    int i=5,j=10,k;
    long a=12,b=122,l;
    k=getmax<int>(i,j);
    l=getmax<long>(a,b);
    cout<<k<<endl;
    cout<<l<<endl;
}