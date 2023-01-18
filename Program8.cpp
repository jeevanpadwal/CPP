//accept N number And find maximum

#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[],int size)
{
  int i=0;
  T Max=Arr[0];
   for(i=0;i< size;i++)
  {
     if(Arr[i] > Max)
     {
        Max =Arr[i];
     }
  }
  return Max;

}

int main()
{
  int ret =0;
  int Brr[] = {10,20,30,40,50};
  ret = Maximum(Brr,5);
  cout<<"Your maximum number is  : "<<ret<<endl;

    float fret=0.0;
   float Crr[]={10.11,20.11,30.11,40.11,50.11};
    fret=Maximum(Crr,5);
    cout<<"Maximum number is : \n"<<fret;

  

    return 0;
}