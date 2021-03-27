#include<iostream>
using namespace std;
class car//class named car
{
	private://access specifier
		float petrol,distance;//instance variable:made for objects
	public://access specifier
		car();	//Default contructor
// defining inside class		{
//			petrol=70;//initializing 
//			distance=0;
//		}
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
		car(car &n)//copy constructor &n is reference to another object of same type
		{
			petrol=n.petrol;
			distance=n.distance;
		}
		void show();
		
};
car::car()//defining outside class
{
	petrol=0;//initializing 
			distance=0;
}
void car::show()
{
	cout<<"Gaadi mein "<<petrol<<" litre petrol hai"<<endl;
	cout<<"Gaadi "<<distance<<" km chali hai"<<endl;
}
int main()
{
	car hondacity(5,10),civic,swift(1),bmw(hondacity);//objects
	hondacity.show();
	civic.show();
	swift.show();
	bmw.show();
	return 0;
}
