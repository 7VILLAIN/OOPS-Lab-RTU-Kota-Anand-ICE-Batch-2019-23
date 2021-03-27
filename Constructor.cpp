#include<iostream>
using namespace std;
class car//class named car
{
	private://access specifier
		float petrol,distance;//instance variable:made for objects
	public://access specifier
		car()	//Default contructor		
		{
			petrol=70;//initializing 
			distance=0;
		}
		car(float a)//single parameterized
		{
			petrol=a;
			distance=0;
		}
		car(float a,float b)//multiple parameterized  contructor or constructor overloading)
		{
			petrol=a;
			distance=b;
		}
		car(car &n)//copy constructor &n is reference to another object of same type....................................................
		{
			petrol=n.petrol;
			distance=n.distance;
		}
		~car()
		{
			cout<<"An Object have been destroyed!"<<endl;
		}
		void show();
		
};

void car::show()
{
	cout<<"Petrol= "<<petrol<<" litres"<<endl;
	cout<<"Distance Traveled"<<distance<<" km"<<endl;
}
int main()
{
	car hondacity(75,10),civic,swift(1),bmw(hondacity);//objects
	hondacity.show();
	civic.show();
	swift.show();
	bmw.show();
	return 0;
}
