#include <iostream> 
using namespace std;   
class complex { 
public: 
      int a, b; 
    complex() 
    { 
        this->a = 0; 
        this->b = 0; 
    }  
    complex(int f, int i) 
    { 
        this->a = f; 
        this->b = i; 
    } 
    friend complex operator+(complex&, complex&); 
}; 
complex operator+(complex& x, complex& y) // Call by reference 
{ 
    complex c; 
    c.a = x.a + y.a; 
    c.b = x.b + y.b;  
    return c; 
} 
int main() 
{  
    complex x(8, 9);  
    complex y(10, 2); 
    complex c; 
    c = x + y; 
    cout<<c.a << " + i" << c.b; 
    return 0; 
}