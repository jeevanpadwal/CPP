//accept string count no of owells Capital
#include<iostream>
using namespace std;

int NoOfOwels(char str[])
{
    int iCnt=0;

    while(*str != '\0')
    {
        if((*str =='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U')||(*str =='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
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
   
 ret = NoOfOwels(Arr);
 cout<<"No. of owels is  :"<<ret<<endl;
   
    return 0;
}
