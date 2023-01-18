#include<iostream>
using namespace std;

class Max
{
    
    public:
    int a,b=0;
    void maximum(int a,int b)
     {
         if (a>b)
         {
           cout<<"a is greater",a;
         }
         
          else
          {
          cout<<"b is greater",b;
          }
     }
};

int main()
{
    Max mobj;
    mobj.maximum(10,20);
    
    
}