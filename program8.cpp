// number of elements in string without inbuilt function
#include<iostream>
using namespace std;

int StrlenX(char str[])
{
    int iCnt=0;
    while( *str != '\0')
    {
        iCnt++;
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
   
 ret= StrlenX(Arr);
 cout<<"no. of elements :"<<ret<<endl;
   

    return 0;
}
