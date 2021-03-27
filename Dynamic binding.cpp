#include<iostream>
using namespace std;
class car
{
    public:
    virtual void acon()
    {
        cout<<"AC of car class"<<endl;
    }
};
class sportscar: public car
{
    public:
    void acon()                                                         //Method overriding
    {
        cout<<"AC of sportscar class"<<endl;
    }
};
int main()
{
    sportscar rollsroy;
    rollsroy.acon();        //EARLY BINDING
     car *p= &rollsroy ;   //BASE CLASS IS STORING THE ADDRESS OF CHILD CLASS OBJECT
     //without virtual keyword 
     //p->acon(); //Early binding{only checks the type of the obj that called the object,compiler binds the obj to the class(type to which object belongs.)}
     //if we want to use pointer and to call the child function instead of parent,for this we will use dynamic binding
     //For dynamic binding, we use virual functions
    p->acon();

    return 0;
}