#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo(int a, int b):j(b)
        {
            cout<<"Inside parametrised\n";
            i=a;
        }
        void fun()
        {

            cout<<"inside fun\n";
            i++;
           // j++;
        }
        void gun()const
        {
            int x=10;
            const int y=20;
            cout<<"inside gun\n";
            // i++;
            // j++;
            x++;
           // y++;
    
        }
};

int main()
{
   Demo obj(11,21);

   cout<<obj.i<<"\n";
  // cout<<obj.j<<"\n";

   obj.i++;
    // obj.j++;
   cout<<obj.i<<"\n";


    return 0;
}