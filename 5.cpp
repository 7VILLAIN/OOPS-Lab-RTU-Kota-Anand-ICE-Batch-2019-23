#include <iostream>
using namespace std;
struct Book
{
	int bookid;
	float price;	
};
int main()
{
	struct Book b1,*ptr;
	ptr=&b1;
	cout<<"Enter Book ID : ";
	cin>>(*ptr).bookid;
	cout<<"Enter Price : ";
	cin>>(*ptr).price;
	cout<<"\nDisplaying Details :\n";
	cout<<" Book ID : "<<(*ptr).bookid<<endl;
	cout<<" Price : "<<(*ptr).price<<endl;

}

