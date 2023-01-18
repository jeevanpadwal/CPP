#include<iostream>

using namespace std;

class Demo
{

    public:

    int x;
    int y;

    Demo(int i=0,int j=20)
    {

        x=i;
        y=j;

    }
};

     Demo operator + (Demo op1,)
     {
         cout<<"inside plus operator";
         return Demo(op1.x+op2.x,op1.y+op2.y)

    
     }

       Demo
     {
     
     }

 int main()
 {
     Demo obj1(11,21);
     Demo obj2(51,101);
     Demo robj(0,0);

     robj=obj1+obj2;//+(obj1,obj2)
     cout<<"robj.x"<<"\n";
     robj<<"robj.y"<<"\n";

     return 0;
 }