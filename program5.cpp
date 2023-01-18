
#include<iostream>
using namespace std;

void Display(char str[])// by removing pointer 
{
    while( *str != '\0')
    {
        cout<<*str<<endl;
        str++;
    }
}

int main()
{
   char Arr[20];

   cout<<"enter string "<<endl;
   scanf("%s",Arr);
   

   Display(Arr);

    return 0;
}
