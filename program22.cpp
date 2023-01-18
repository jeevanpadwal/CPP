//accept string from user and copy into anathor string 
#include<iostream>
using namespace std;

void strrevX(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest =*src;
         src++;
         dest++;
    }
    *dest='\0';
   

}

int main()
{
   char Arr[20];
   char Brr[20];
   

 cout<<"enter string "<<endl;
  cin.getline(Arr,20);
   
  strrevX(Arr,Brr);
 cout<<"String after copy :"<<Brr<<endl;
   
    return 0;
}
