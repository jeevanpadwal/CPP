//accept string count white spacess
#include<iostream>
using namespace std;

int WhiteSpace(char str[])
{
    int iCnt=0;

    while(*str != '\0')
    {
        if(*str ==' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
   char Arr[20];
   int ret=0;

   cout<<"enter string "<<endl;
  cin.getline(Arr,20);
   
 ret = WhiteSpace(Arr);
 cout<<"String Contains Capital letters is :"<<ret<<endl;
   
    return 0;
}
