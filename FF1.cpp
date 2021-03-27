#include<iostream>
using namespace std;
class home
{
	private:
		 int chocolate,pastery,jelly;
		 public :
		 	home()
		 	{
		 		chocolate=0;
		 		pastery=0;
		 		jelly=0;
			 }
			 void setvalue(int a,int b ,int c)
			 {
			 	chocolate=a;
		 		pastery=b;
		 		jelly=c;
		 			cout<<"Updated Fridge Quantities right now "<<endl<<"Chocolate= "<<chocolate<<endl<<"Pastery= "<<pastery<<endl<<"Jelly= "<<jelly<<endl;
			 }
			 void show()
			 {
			 	cout<<"Fridge Quantities right now "<<endl<<"Chocolate= "<<chocolate<<endl<<"Pastery= "<<pastery<<endl<<"Jelly= "<<jelly<<endl;
			 	
			 }
			 friend void eat(home o)
			 {
			 	cout<<"ammount of chocolates eaten ="<<o.chocolate<<endl;
			 	cout<<"ammount of pasteries eaten ="<<o.pastery<<endl;
			 	cout<<"ammount of jellies eaten ="<<o.jelly<<endl;
			 }
};
int main()
{
	home a;
	a.show();
	a.setvalue(10,12,13);
	eat(a);
	return 0;
}
