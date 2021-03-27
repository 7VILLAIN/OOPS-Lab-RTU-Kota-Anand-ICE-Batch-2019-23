#include <iostream>
using namespace std;
struct book
{
	int bookid;
	float price;
};
int main()
{
	book b1, *ptr;
	ptr=&b1;
	cout<<"book id=";
	cin>>ptr->bookid;
	cout<<"book price=";
	cin>>ptr->price;
	cout<<"---Details of the book---"<<endl;
	cout<<"book id="<<ptr->bookid<<endl;
	cout<<"book price="<<ptr->price;
	
}
