#include<iostream>
using namespace std;
class student
{
	private:
		char name[30];
		int age;
		char gender;
	public:
		void show()
		{ 	
			cout<<"Name= "<<name<<"\nAge="<<age<<"\nGender="<<gender<<endl;
		}
		void input()
		{
			cout<<"Enter Student Name: ";cin>>name;
			cout<<"Enter Student Age: ";cin>>age;
			cout<<"Enter Student Gender: ";cin>>gender;
		}
		
};
class CS :public student
{
	private:
		int total_faculty;
		int total_courses;
	public:
		void shows()
		{ 
			cout<<"Total Faculty"<<total_faculty<<"\nTotal Courses"<<total_courses<<endl;
		}
		void inputs()
		{
			cout<<"Enter Total faculty: ";cin>>total_faculty;
			cout<<"Enter Total courses: ";cin>>total_courses;
				}
	};
int main()
{
	CS a;
	a.input();
	a.inputs();
	a.show();
	a.shows();
	return 0;
}

