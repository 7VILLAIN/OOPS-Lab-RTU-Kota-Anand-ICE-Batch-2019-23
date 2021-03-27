#include<iostream>
using namespace std;
class Base
{
	public :
		int a;
		int b;
		int c;
		
};
class Derive2 :public Base
{
	protected:
		int B;
};
class Derive1 :public Base
{	
	protected:
	int A;
					
		
}; 
class Sh:public Derive1,public Derive2
{
	
	public:
	Sh()
	{
		A=1;
		B=2;
		Derive1::a=3;
		Derive1::b=4;
		Derive1::c=5;
	}
	void show()
	{	cout<<"A="<<A<<endl;
		cout <<"B="<<B<<endl;
		cout <<"a="<<Derive1::a<<endl;
		cout <<"b="<<Derive1::b<<endl;
		cout <<"c="<<Derive1::c<<endl;}
};

int main()
{
	Sh A;
	A.show();
	return 0;
}

