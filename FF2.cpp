#include<iostream>
using namespace std;
class  numbers
{
	private:
		float a,b;
	public:
		numbers()
		{
			cout<<"enter first number :";
			cin>>a;
			cout<<"enter second number :";
			cin>>b;
			
		}
		void show()
		{
			cout<<"given numbers are "<<a<<","<<b<<endl;
		}
		friend void mean(numbers o)
		{
			cout<<"mean of given numbers= "<<(o.a+o.b)/2.0;
		}
};
int main()
{
	numbers num1;
	num1.show();
	mean(num1);
}
