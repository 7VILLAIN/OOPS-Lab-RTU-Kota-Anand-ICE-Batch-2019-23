#include <iostream>
using namespace std;
struct Person
{   
	int id;
	char name[30];
	int age;
	
};
void getdata(Person p[], int);
void display(Person[], int);
int main()
{	int x;
	cout<<"enter no of entries:";
	cin>>x;
	Person p[x];
	getdata(p,x);
	display(p,x);
	return 0;
}
void getdata(Person p[],int x)
{ for (int i=0;i<x; i++)
{
	cout<<"Details of Employee "<<i+1<<":"<<endl;
	cout<<"Enter ID:";
	cin>>p[i].id;
	cout<<"Enter Name:";
	cin>>p[i].name;
	cout<<"Enter Age:";
	cin>>p[i].age;
	
	
}
}
void display(Person p[],int x)
{
	for (int i=0;i<x;i++)
	{
	cout<<endl<<endl<<"---Employee Details--- "<<i+1<<":"<<endl;
	cout<<"ID:"<<p[i].id<<endl;
	cout<<"Name:"<<p[i].name<<endl;
	cout<<"Age:"<<p[i].age<<endl;
	}
}
