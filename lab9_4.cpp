#include<iostream>
#define p 3.14
using namespace std;
class area
{
	protected :
		float h,w;
		
};
class rect :public area
{
	public:
	rect(float a ,float b)
	{
		h=a;
		w=b;
	}
	void calculatearea()
	{
		cout<<"area of rectangle= "<< h*w<<endl;	
	}
};
class triangle :public area
{	
	public:
	triangle(float a ,float b)
	{
		h=a;
		w=b;
	}
	void calculatearea()
	{
		cout<<"area of triangle= "<< h*w/2<<endl;	
	}
};
class cylinder :public area
{	
	public:
	cylinder(float a ,float b)
	{
		h=a;
		w=b;
	}
	void calculatearea()
	{
		cout<<"area of cylinder= "<< 2*p*(w+h)<<endl;	
	}
};
int main()
{
	rect a(10,12);
	triangle b(5,6);
	cylinder c(10,7);
	a.calculatearea();
	b.calculatearea();
	c.calculatearea();
}
