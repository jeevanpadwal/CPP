//accept two string campare that sting if same say true if not say false

#include<iostream>
using namespace std;

bool strcmpX(char *src,char *dest)
{
   while(*src != '\0')
   {
       if(*src != *dest && *dest != '\0')
       {
           break;
       }
      src++;
      dest++;
     
   }

   if(*src == '\0' && *dest == '\0')
   {
       return true;
   }
   else
   {
       return false; 
   }
   
}

int main()
{
   char Arr[20];
   char Brr[20];
   bool bRet;

 cout<<"enter first string "<<endl;
  cin.getline(Arr,20);

  cout<<"enter secoand  string "<<endl;
  cin.getline(Brr,20);
   
  bRet = strcmpX(Arr,Brr);

  if(bRet == true)
  {
      cout<<"String are equal";
  }
  else
  {
      cout<<"String is not equal";
  }

    return 0;
}
