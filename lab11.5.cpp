#include<iostream>
using namespace std;

 	void swap(int &a, int &b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
       
    }
    void swap(float  &a, float &b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
        
    }
    void swap(char &a, char &b)
    {
        
        char t=a;
        a=b;
        b=t;
       
    }

int main()
{
    int x1=12,y1=20;
    float x2=10.1,y2=13.6;
    char x3='A',y3='B';
    cout <<"before swap int a="<<x1<<",int b="<<y1<<endl;
    cout <<"before swap float a="<<x2<<",float b="<<y2<<endl;
    cout <<"before swap char a="<<x3<<",char b="<<y3<<endl;
    swap(x1,y1);
    swap(x2,y2);
    swap(x3,y3);
    cout <<"after swap int a="<<x1<<",int b="<<y1<<endl;
    cout <<"after swap float a="<<x2<<",float b="<<y2<<endl;
    cout <<"after swap char a="<<x3<<",char b="<<y3<<endl;
}
