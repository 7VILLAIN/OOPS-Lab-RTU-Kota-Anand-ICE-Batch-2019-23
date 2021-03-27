#include <iostream>
using namespace std;
struct Person
{
	char name[30];
	int age;
	float salary;	
};
void display(struct Person);//DECLARATION

	

int main()
{
	struct Person s1;
	cout<<"Enter your Name : ";
	cin>>s1.name;
	cout<<"Enter your Age : ";
	cin>>s1.age;
	cout<<"Enter your salary : ";
	cin>>s1.salary;	
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
