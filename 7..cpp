#include <iostream>
using namespace std;
struct Person
{
	char name[30];
	int age;
	float salary;	
};
void display(Person);	//DECLARATION
Person input(int x)
{   
	Person p[x];
	for(int i=0;i<x;i++)
	{
	cout<<"Enter your Name : ";
	cin>>p[i].name;
	cout<<"Enter your Age : ";
	cin>>p[i].age;
	cout<<"Enter your salary : ";
	cin>>p[i].salary;
	}
	return &p;
}
int main()
{ 	int n;
	cout<<"Enter No. of Entries : ";
	cin>>n;
	Person p[],*x;
   *x=input(n);
for(int i=0;i<x;i++)
	{
	p[i].name=*x[i].name;
	p[i].age=*x[i].age;
	p[i].salary=*x[i].salary;
	}
	display(p,x)
	return 0;
}
void display(Person p[],int x)	//DEFINATION
{
	
	cout<<"Displaying Detatils :\n";
	cout<<" Name : "<<p.name<<endl;
	cout<<" Age : "<<p.age<<endl;
		cout<<" Salary : "<<p.salary<<endl;
}

