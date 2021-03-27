#include<iostream>
#include <iomanip>
using namespace std;
class seprate
{
	private:
		float no,dec;
		int i;
	public:
		seprate()
		{
			cout<<"no parameter given";
		}
		seprate(float a)
		{
			no=a;
			i=no;
			dec=no-i;
			
		}
		void show()
		{
			cout<<endl<<"Given no= "<<no<<endl<<"Integer Part= "<<i<<endl<<"Decimal Part= "<< setprecision(6)<<dec<<endl;
		}
};
int main()
{	
	float no;
	cout<<"enter no: ";
	cin>>no; 
	seprate s1(no);
	s1.show();
	return 0;
}
