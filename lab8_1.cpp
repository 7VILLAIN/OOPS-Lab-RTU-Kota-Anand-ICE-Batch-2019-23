#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
		void show()
		{ 
			cout<<"a="<<a<<",b="<<b<<endl;
		}
		void set(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		
};
class B
{
	protected:
		int a,b;
		public:
		void show()
		{ 
			cout<<"a="<<a<<",b="<<b<<endl;
		}
		void set(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		
};
class C
{
	private:
		int a,b;
		public:
		void show()
		{ 
			cout<<"a="<<a<<",b="<<b<<endl;
		}
		void set(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		
};
/*int main()
{
	A a;
	a.a=10;
	a.b=12;
	a.show();
	return 0;
}*/
/*int main()
{
	B a;
	a.a=10;
	a.b=12;
//	a.show();
//	a.set(3,4);
	return 0;
}*/
int main()
{
	C a;
//	a.a=10;
//	a.b=12;
	a.set(1,2);
	a.show();
	return 0;
}
