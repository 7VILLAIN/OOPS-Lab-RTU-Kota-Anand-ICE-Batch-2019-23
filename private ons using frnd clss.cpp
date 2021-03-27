#include<iostream>
using namespace std;
class A
{
	A()
	{
		cout<<"constructor of A"<<endl;
		
	}
	public:
	friend class B;
};
class B
{public:
	
	B()
	{
		A obj;
		cout<<"Constructore of B"<<endl;
		
	}
};
int main()
{
	B obj;
}
