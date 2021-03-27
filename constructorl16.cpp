//constructor 1(DEfault constructor) l-15-16
//Note : Constructor is executed once for an object :: ek object ke liye ek  hi baar execute hoga
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
		void show();
		
};
car::car()//defining outside class
{
	petrol=70;//initializing 
			distance=0;
}
void car::show()
{
	cout<<"Gaadi mein "<<petrol<<" litre petrol hai"<<endl;
	cout<<"Gaadi "<<distance<<" km chali hai"<<endl;
}
int main()
{
	car hondacity,civic;//objects
	hondacity.show();
	civic.show();
	return 0;
}
