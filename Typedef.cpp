#include<iostream>
using namespace std;

int main()
{ 
   typedef int jeevan;

   jeevan no =10;

  
  const int * p =&no;

   cout<<*p;

    return 0;
}