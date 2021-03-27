#include<iostream>
using namespace std;
class student
{
	protected:
	char name[30];
	int age;
	int id;
	public:
	void getdata()
	{
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Age: ";
		cin>>age;
		cout<<"Enter ID: ";
		cin>>id;
	}
	void showstudent()
	{
		cout<<"------Student Details----- "<<endl;
		cout<<"Name- "<<name<<endl;
		cout<<"Age- "<<age<<endl;
		cout<<"ID- "<<id<<endl;
		
	}
	
};
class marks :public student
{
	protected:
		int dsa,aem,oops,se,de;
	public:
		void setmarks()
		{
			cout <<"Enter marks for "<<name<<endl;
			cout<<"Marks in DSA :";
			cin>>dsa;
			cout<<"Marks in OOPS :";
			cin>>oops;
			cout<<"Marks in AEM :";
			cin>>aem;
			cout<<"Marks in SE :";
			cin>>se;
			cout<<"Marks in DE :";
			cin>>de;
			
		}
		void showmarks()
		{ 	cout<<"---------------- "<<endl;
			cout <<"Marks of "<<name<<" (out of 100)"<<endl;
			cout<<"DSA :"<<dsa<<endl;
			cout<<"OOPS :"<<oops<<endl;
			cout<<"AEM :"<<aem<<endl;
			cout<<"SE :"<<se<<endl;
			cout<<"DE :"<<de<<endl;
		}
	
};
class result :public marks
{
	private:
		char grade;
		float Total;
	public:
		char getgrade(int a)
		{	
			if(a>85)
			grade='A';
			else if (a>70)
			grade='B';
			else if (a>60)
			grade='C';
			else if (a>35)
			grade='D';
			else
			grade='F';
			return grade;
	}
		void getresult()
		{	
			Total=(dsa+oops+aem+de+se)/5.0;	
			cout<<"-------------- "<<endl;
			cout <<"Result of "<<name<<endl;
			cout<<"DSA :"<<getgrade(dsa)<<endl;
			cout<<"OOPS :"<<getgrade(oops)<<endl;
			cout<<"AEM :"<<getgrade(aem)<<endl;
			cout<<"SE :"<<getgrade(se)<<endl;
			cout<<"DE :"<<getgrade(de)<<endl;
			cout<<"Total result="<<Total<<"%"<<endl;
			cout<<"Total grade="<<getgrade(Total)<<endl;
			}	
		
};
int main()
{	int n,i;
	cout<<"Enter no of student :";
	cin>>n;
	result a[n];
	for (i=0;i<n;i++)
	 {
	cout<<"Student "<<i+1<<":"<<endl;
	a[i].getdata();
	a[i].setmarks();
     }
     for (i=0;i<n;i++)
	 {
	a[i].showstudent();
	a[i].showmarks();
	a[i].getresult();
	}
}
