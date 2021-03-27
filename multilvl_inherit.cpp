#include<iostream>
using namespace std;
class parent
{
	protected :
		int a;
		int b;
		int c;
		
};
class child :public parent
{
	protected :
		int y;
		int x;	 
}; 
class grandchild : public child
{	
	public:
	void get()
		{	
			cout <<"a=";
			cin>>a;
			cout <<"b=";
			cin>>b;
			cout <<"c=";
			cin>>c;
			cout <<"x=";
			cin>>x;
			cout <<"y=";
			cin>>y;
				 }	
	void show()
	{
		cout <<"a="<<a<<endl;
		cout <<"b="<<b<<endl;
		cout <<"c="<<c<<endl;
		cout <<"x="<<x<<endl;
		cout <<"y="<<y<<endl;
		 }	 

};
int main()
{
	grandchild a;
	a.get();
	a.show();
	
}

