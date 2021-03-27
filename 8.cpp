#include<iostream>
using namespace std;
int main()
{
	int* ptr;
	float *ptr1;
	int* ptr2;
 	ptr=new int; 	    //Creation of int block dynamically using new operator in C++
	ptr1= new float;	//Creation of float block dynamically using new operator in C++
	ptr2=new int[5];	//Creation of int array dynamically using new operator in C++
	
	delete ptr;			//Deletion of dynamically created block which was reffered to by ptr using delete op
	delete ptr1;		//Deletion of dynamically created block which was reffered to by ptr1 using delete op
	delete[] ptr2;		//Deletion of dynamically created array which was reffered to by ptr2 using delete op
	return 0;
}
