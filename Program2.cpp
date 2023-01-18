//accept two number and swapp that no call by address;

#include<iostream>
using namespace std;

void SwapR(int &p,int &q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
}

int main()
{
    int iValue1=11,iValue2 =21;

    cout<<"Before swap data is :"<<iValue1<<"\n"<<iValue2<<endl;        

    SwapR(iValue1,iValue2);

    cout<<"Afetr swap data is :"<<iValue1<<"\n"<<iValue2<<endl;


    return 0;
}