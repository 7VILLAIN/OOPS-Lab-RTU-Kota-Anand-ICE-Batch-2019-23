#include <iostream>
using namespace std;
class Complex
{
	private:
		int r,i;
	public:
		void setdata(int,int);//DECLARATION 
		void showdata()
		{
			cout<<r<<" + "<<i<<"i"<<endl;
		}
	
};	
void Complex::setdata(int x,int y)
{
	r=x;
	i=y;
}
int main()
{
	Complex c1;
	c1.setdata(6,7);
	c1.showdata(); 
	return 0;
}
