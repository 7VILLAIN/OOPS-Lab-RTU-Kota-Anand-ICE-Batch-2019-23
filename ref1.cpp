#include<iostream>
using namespace std;
int main ()
{
	int x=10;
	int &ref=x;
	ref=20;
	cout<<"value of x= "<<x<<endl;
	x=30 ;
	cout<<"ref of x= "<<ref<<endl;
	return 0; 
}
