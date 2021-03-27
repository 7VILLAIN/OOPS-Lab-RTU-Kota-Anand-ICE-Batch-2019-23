#include<iostream>
using namespace std;
class Base1
{
	protected :
		int a;
		int b;
		int c;
		
};
class Base2 
{
	protected:
		int B;
};
class Derive :public Base1,public Base2
{	
	public:
		Derive()
		{
			cout <<"B=";
			cin>>B;
			cout <<"a=";
			cin>>a;
			cout <<"b=";
			cin>>b;
			cout <<"c=";
			cin>>c;
		
		}
						 
	void show()
	{	
		cout <<"B="<<B<<endl;
		cout <<"a="<<a<<endl;
		cout <<"b="<<b<<endl;
		cout <<"c="<<c<<endl;}
		
}; 

int main()
{
	Derive a;
	a.show();
	return 0;
}

