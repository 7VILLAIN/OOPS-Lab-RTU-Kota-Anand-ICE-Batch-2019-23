#include<iostream>
using namespace std;
void divide(float a,float b)
{
    try
{   if (b==0)
     throw b;      
    else 
    cout<<"result = "<<a/b<<endl;
    
 }
 catch(float a)
 {
     cout<<"exception occured a number cant be divided by zero try again!!!";   
 }
 
}
int main()
{
    
    int a,b;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    divide(a,b);
    return 0;

}