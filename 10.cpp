#include<iostream>
using namespace std;
int main()
{
int n,*ptr;
cout<<"Enter No. of Values to be entered : ";
cin>>n;

 ptr=new int[n];
for(int i=0;i<n;i++)
{
cout<<"Enter "<<i+1<<" Value : ";
 cin>>ptr[i];
}	
cout<<"\nEntered Values are : "<<endl;
for(int i=0;i<n;i++)
{
 cout<<" "<<ptr[i]<<endl;
}	
delete[] ptr;				
return 0;
}
