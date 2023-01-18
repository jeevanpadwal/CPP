
#include<iostream>
using namespace std;

int CountL(char str[])
{
    int iCnt=0;
    while( *str != '\0')
    {
        if(*str == 'l'||(*str=='L'))
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
   
 ret= CountL(Arr);
 cout<<"no. of elements which contains l:"<<ret<<endl;
   

    return 0;
}
