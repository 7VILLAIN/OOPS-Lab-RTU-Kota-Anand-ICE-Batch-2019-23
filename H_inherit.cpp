#include<iostream>
using namespace std;
class Base
{
	protected :
		int a;
		int b;
		int c;
		
};
class Derive2 :public Base
{
	protected:
		int B;
	public:
			Derive2()
		{
			cout <<"B=";
			cin>>B;
			cout <<"B.a=";
			cin>>a;
			cout <<"B.b=";
			cin>>b;
			cout <<"B.c=";
			cin>>c;
		
		}	
		
	void showb()
	{	
		cout <<"B="<<B<<endl;
		cout <<"B.a="<<a<<endl;
		cout <<"B.b="<<b<<endl;
		cout <<"B.c="<<c<<endl;}
};
class Derive1 :public Base
{	
	int A;
	public:
		Derive1()
		{
			cout <<"A=";
			cin>>A;
			cout <<"A.a=";
			cin>>a;
			cout <<"A.b=";
			cin>>b;
			cout <<"A.c=";
			cin>>c;
		
		}
						 
	void showa()
	{	
		cout <<"A="<<A<<endl;
		cout <<"A.a="<<a<<endl;
		cout <<"A.b="<<b<<endl;
		cout <<"A.c="<<c<<endl;}
		
}; 

int main()
{
	Derive1 a;
	a.showa();
	Derive2 b;
	b.showb();
	return 0;
}

