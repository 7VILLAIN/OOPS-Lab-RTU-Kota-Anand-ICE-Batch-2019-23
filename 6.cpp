#include<iostream>
using namespace std;
struct Employee
{
	int ID;
	int age;
	char name[30];
};
int main()
{ 
	int x;
	cout<<"Enter No of Entries : ";
	cin>>x;
	Employee emp[x];
	int i;
	for(i=0;i<x;i++)
	{cout<<"\nEnter Name of Employee "<<i+1<<" : ";
	cin>>emp[i].name;
	cout<<"Enter ID of Employee "<<i+1<<" : ";
	cin>>emp[i].ID;
	cout<<"Enter Age of Employee "<<i+1<<" : ";
	cin>>emp[i].age;
	}
	cout<<endl<<"Employee Details:"<<endl<<endl;
	for(i=0;i<x;i++)
	{
	cout<<"\n ID : "<<emp[i].ID<<endl;
	cout<<" Name : "<<emp[i].name<<endl;
	cout<<" Age : "<<emp[i].age<<endl<<endl;
	}	
}
