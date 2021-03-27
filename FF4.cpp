#include<iostream>
using namespace std;
class car2;
class car1
{
	private:
	int petrol,distance;
	public:
	car1()
	{
		petrol=12;
		distance=78;
		}	
	car1(int a,int b)
	{
		petrol=a;
		distance=b;
	}
	void show()
	{
		cout<<"Petrol= "<<petrol<<endl<<"Distance= "<<distance<<endl;
	}
	friend void display(car1,car2);

	
};
class car2
{
	private:
	int petrol,distance;
	public:
	car2()
	{
		petrol=8;
		distance=50;
		}	
	car2(int a,int b)
	{
		petrol=a;
		distance=b;
	}
	void show()
	{
		cout<<"petrol= "<<petrol<<endl<<"Distance= "<<distance<<endl;
	}
	friend void display(car1,car2);
	

	
};
void display(car1 a,car2 b)
{
	cout<<"Total petrol= "<<a.petrol + b.petrol<<endl<<"Total Distance= "<<a.distance + b.distance<<endl;
}
int main()
{
	car1 audi;
	car2 bmw;
    audi.show();
    bmw.show();
    display(audi,bmw);
}

