//accept string convert into lower case to upper casee
#include<iostream>
using namespace std;

int struprX(char str[])
{
    int iCnt=0;

    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            *str = *str -32;
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
   
 ret = struprX(Arr);
 cout<<"String in lower case to upper case :"<<Arr<<endl;
   
    return 0;
}
