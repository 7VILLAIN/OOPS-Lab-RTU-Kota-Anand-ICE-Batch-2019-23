#include<iostream>
using namespace std;
int main()
{
int *ptr;
float *ptr1;

ptr=new int;
 *ptr=32;	   
 cout<<"The value inside the new int block refered by ptr  -> "<<*ptr<<endl;
	
ptr1= new float;	
 *ptr1=22.56;	    
 cout<<"The value inside the new float block refered by ptr1  -> "<<*ptr1<<endl;	
	
delete ptr;		
delete ptr1;		
 return 0;
}
