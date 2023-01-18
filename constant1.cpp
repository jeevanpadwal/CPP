#include<iostream>
using namespace std;

class Demo
{
     public:
    int i;
   const int j;
    Demo():j(20)  //member initalization
  {  
        i=12;
        //j=20;
  }
  Demo(int a,int b):i(a),j(b)
  {

    cout<<"inside paramatrised\n";
  }

};
 int main()
{
  Demo obj(11,21);
  cout<<obj.i<<"\n";
  cout<<obj.j<<"\n";
  obj i++;
  return 0;
}



   



