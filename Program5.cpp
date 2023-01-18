//accept two number and swapp that no call by address;

#include<iostream>
using namespace std;

template <class T>
void SwapR(T *p,T *q)
{
    T temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int iValue1=11,iValue2 =21;
    cout<<"Before swap data is :"<<iValue1<<"\t"<<iValue2<<endl;        
    SwapR(&iValue1,&iValue2);
     cout<<"Afetr swap data is :"<<iValue1<<"\t"<<iValue2<<endl;


    float fValue1=11.2,fValue2 = 21.2;
    cout<<"Before swap data is :"<<fValue1<<"\t"<<fValue2<<endl;        
     SwapR(&fValue1,&fValue2);
     cout<<"Afetr swap data is :"<<fValue1<<"\t"<<fValue2<<endl;

    char cValue1='A',cValue2 = 'B';
    cout<<"Before swap data is :"<<cValue1<<"\t"<<cValue2<<endl;        
     SwapR(&cValue1,&cValue2);
     cout<<"Afetr swap data is :"<<cValue1<<"\t"<<cValue2<<endl;


    return 0;
}