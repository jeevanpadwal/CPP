#include<iostream>

using namespace std;
 
 class Base
{
    public:

    virtual void fun()
    {
        cout<<"Base Fun"<<endl;
    }

    void sun()
    {
        cout<<"Base sun"<<endl;
    }
};

class Derived : public Base
{
    public:

     virtual void fun()
     {
        cout<<"Derived Fun"<<endl;
     }

     void sun()
     {
        cout<<"Derived sun"<<endl;
     }
};

int main()
{
    Base *Bptr = new Derived();

    Bptr->fun();
    Bptr->sun();

   Derived dobj();
 
    dobj.sun();
    return 0;
}