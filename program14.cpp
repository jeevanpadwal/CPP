//accept string count no.of small character 
#include<iostream>
using namespace std;

int CountSmall(char str[])
{
    int iCnt=0;

    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <='z'))
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
   
 ret = CountSmall(Arr);
 cout<<"String Contains Capital letters is :"<<ret<<endl;
   

    return 0;
}
