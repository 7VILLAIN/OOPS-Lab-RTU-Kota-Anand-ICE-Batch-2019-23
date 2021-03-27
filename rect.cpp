#include <iostream>
using namespace std;
class Rectangle 
{   private:
	int length,breadth;
	public :
		void setdata(int a,int b)
		    {
		    	length= a;
		    	breadth= b;
			}
		void showdata()
		{ 
		   cout<<"length="<<length<<endl<<"breadth="<<breadth;
		}
		void draw()
		{ int i,j;
		
			for(i=1;i<=length;i++)
			{
				for (j=1;j<=breadth;j++)
					cout<<".";
					cout<<endl;
			 } 
				}		
};
int main()
{
	Rectangle r1;
	r1.setdata(3,4);
	r1.draw();
	return 0;
}
