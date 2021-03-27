#include <iostream>
using namespace std;
struct Person
{
	char name[30];
	int age;
	float salary;
	
};
Person getdata(Person);
void display(Person);
int main()
{
	Person p;
	p=getdata(p);
	display(p);
	return 0;
}
Person getdata(Person p)
{
	cout<<"Enter Name:";
	cin>>p.name;
	cout<<"Enter Age:";
	cin>>p.age;
	cout<<"Enter Salary:";
	cin>>p.salary;
	return p;
}
void display(Person p)
{
	cout<<"Name:"<<p.name<<endl;
	cout<<"Age:"<<p.age<<endl;
	cout<<"Salary:"<<p.salary<<endl;
}
