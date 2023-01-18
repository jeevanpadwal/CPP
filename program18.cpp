//accept string convert into lower case 
#include<iostream>
using namespace std;

int strlwrX(char str[])
{
    int iCnt=0;

    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            *str = *str +32;
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
   
 ret = strlwrX(Arr);
 cout<<"String in lower case :"<<Arr<<endl;
   
    return 0;
}
