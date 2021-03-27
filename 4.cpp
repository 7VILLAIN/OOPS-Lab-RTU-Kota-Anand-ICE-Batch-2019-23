#include <iostream>
using namespace std;
class Rectangle
{
	private:
		int length,breadth;
	public:
		void setdata(int,int);//DECLARATION 
		void showdata()
		{
			cout<<"length = "<<length<<endl<<"breadth = "<<breadth;
		}
	
};	
void Rectangle::setdata(int x,int y)
{
	length=x;
	breadth=y;
}
int main()
{
	int x,y;
	Rectangle r1;
	cout<<"Enter length : ";
	cin>>x;
	cout<<"Enter breadth : ";
	cin>>y;
	r1.setdata(x,y);
	r1.showdata(); 
	return 0;
}
