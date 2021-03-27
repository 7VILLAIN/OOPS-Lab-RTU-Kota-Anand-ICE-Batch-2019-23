#include<iostream>
using namespace std;
int swap_v(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
}
int swap_a(int *x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
int swap_r(int &x,int &y) 
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main ()
{
	int a=10,b=20;
	cout<<"value of a before swap= "<<a<<endl;
	cout<<"value of b before swap= "<<b<<endl;
	swap_v(a,b);
	cout<<"value of a after swap= "<<a<<endl;
	cout<<"value of b after swap= "<<b<<endl;
		a=10;
	b=20;
cout<<"value of a before swap= "<<a<<endl;
	cout<<"value of b before swap= "<<b<<endl;

	swap_a(&a,&b);
	cout<<"value of a after swap= "<<a<<endl;
	cout<<"value of b after swap= "<<b<<endl;
		a=10;b=20;
	cout<<"value of a before swap= "<<a<<endl;
	cout<<"value of b  before swap= "<<b<<endl;

	swap_r(a,b);
	cout<<"value of a after swap= "<<a<<endl;
	cout<<"value of b after swap= "<<b<<endl;
	return 0; 
}
