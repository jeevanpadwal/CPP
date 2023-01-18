#include<iostream>

using namespace std;
int main()
{
    int Input=0;
 

    enum Days {sunn,mon,tue,wed,thus,fri,sat};



enum Gender {female=1,male=2};
cout <<"enter your gender"<<"\n";
cout<<"1:female"<<"\n";
cout<<"2:male"<<"\n";

cin>>Input;

switch(Input)
   {
    
    case female:
    cout<<"tax free limit 3000000"<<"\n";
    break;
    
    case male:
    cout<<"tax free limit 2,50,000"<<"\n";
    break;
    
    default:
    cout<<"bekar";
    
     }
  cout<<"1:female"<<"\n";


  return 0;
}