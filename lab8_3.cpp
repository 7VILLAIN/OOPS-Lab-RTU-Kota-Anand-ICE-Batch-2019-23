#include<iostream>
using namespace std;
class student
{
	protected:
		char name[30];
		int age;
		char gender;

		
};
class CS :public student
{
	private:
		int total_faculty;
		int total_courses;
	public:
		void show()
		{ 	cout<<endl<<"--------Student Details-------"<<endl;
			cout<<"Name= "<<name<<"\nAge="<<age<<"\nGender="<<gender<<endl;
			cout<<"Total Faculty "<<total_faculty<<"\nTotal Courses "<<total_courses<<endl;
		}
		void input()
		{	
		cout<<"Enter Student Name: ";cin>>name;
			cout<<"Enter Student Age: ";cin>>age;
			cout<<"Enter Student Gender: ";cin>>gender;
			cout<<"Enter Total faculty: ";cin>>total_faculty;
			cout<<"Enter Total courses: ";cin>>total_courses;
				}
	};
int main()
{
	CS a;
	a.input();
	a.show();

	return 0;
}
