#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("MYFILE.txt");
    char a;
    while(!fin.eof())
    {
        a=fin.get();
        cout<<a;
    }
    fin.close();



}
