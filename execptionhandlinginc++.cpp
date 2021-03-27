#include<iostream>
using namespace std;
int main()
{   try
{   
    int a=10;
    cout<<"hello today is monday"<<endl;
    throw a*10.2;

}
    catch(int e)
    {
        cout<<"catched int "<<e<<endl;
    }
    catch (char c)
    {
        cout<<"catched char "<<c<<endl;
    }
    catch(...)
    {
        cout<<"there is a unidentified exeption"<<endl;
    }

}