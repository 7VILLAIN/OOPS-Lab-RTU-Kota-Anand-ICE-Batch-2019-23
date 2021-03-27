//simple interest
#include<iostream>
using namespace std;
class interest
{
	private:
		float roi,principal,total;
		int time;
	public:
		interest()
		{
			
		}
		interest(float a,float b,int c)
		{
				
			principal=a;
			roi=b;
			time=c;
			
			}	
		interest(interest &a)
		{
			principal=a.principal;
			roi=a.roi;
			time=a.time;
		}
		void calculateinterest()
		{
			total=principal*(1+roi*time);
		}
		void showinterest()
		{   
			calculateinterest();
			cout<<endl<<"Rate of Interest = "<<roi<<endl;
			cout<<"Principal = "<<principal<<endl;
			cout<<"Time(year) ="<<time<<endl;
			cout<<"Simple Interest = "<<total<<endl;
		}
};
int main()
{
	interest i1(20000,6.7,5),i2(12000,5.5,4),i3(i2);
	i1.showinterest();
	i2.showinterest();
	i3.showinterest();
}
