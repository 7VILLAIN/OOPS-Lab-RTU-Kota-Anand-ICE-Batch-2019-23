#include <iostream>
using namespace std;
struct Person
{
	char name[30];
	int age;
	float salary;	
};
void display(struct Person);//DECLARATION
struct Person input(struct Person);
	

int main()
{
	struct Person s1;
	s1=input(s1);
 display(s1);//CALLING
	return 0;
}
void display(struct Person p)//DEFINATION
{
	cout<<"Displaying Detatils :\n";
	cout<<" Name : "<<p.name<<endl;
	cout<<" Age : "<<p.age<<endl;
		cout<<" Salary : "<<p.salary<<endl;
}
struct Person input(struct Person X)
{cout<<"Enter your Name : ";
	cin>>X.name;
	cout<<"Enter your Age : ";
	cin>>X.age;
	cout<<"Enter your salary : ";
	cin>>X.salary;
	return X;
}
