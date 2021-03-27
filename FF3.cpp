#include<iostream>
using namespace std;
class account
{
	private:
		char name[30];
		float balance;
		int age;
	public:
		void getdata()
		{
			cout<<"Enter Name: ";
	         cin>>name;
	         cout<<"Enter Age: ";
	         cin>>age;
	         cout<<"Enter Balance: ";
	         cin>>balance;
		}
		friend void display(account x)
		{
			cout<<"-------Account Details------"<<endl;
			cout<<"Name: "<<x.name<<endl;
			cout<<"Age: "<<x.age<<endl;
			cout<<"Balance: "<<x.balance<<endl;
		}
		
		
};
int main()
{
	account a1;
	a1.getdata();
	display(a1);
}
