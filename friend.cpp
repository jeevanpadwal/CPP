#include<iostream>


using namespace std;

class Demo
{
 pubilc:
 int i;

 private:

 int j;

  protected:

 int k;

 public:

  Demo()
 {

    i=10;
    j=20;
    k=30;
 } 
 friend void fun()
};

void fun()
{
     Demo obj;
     cout<<obj.i;
     cout<<obj.j<<"\n";
     cout<<obj.k<<"\n";
}   


void main()
{
    Demo obj1;
    obj1.fun() 
}    