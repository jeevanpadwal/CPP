//accept string from user and revesr it in place
#include<iostream>
using namespace std;

void strrevX(char *str)
{
    cout<<"indide function";
    char *start =str;
    char *end =str;
    char temp;

    while(*end !='\0')
    {
        end++;
        cout<<"inside end while";
    }

    end--;

    while(start <= end)
    {
        temp= *start;
        *start =*end;
        *end =temp;

        start++;
        end--;
        cout<<temp;
    }
    

}

int main()
{
   char Arr[20];
   int ret=0;

 cout<<"enter string "<<endl;
  cin.getline(Arr,20);
   
  strrevX(Arr);
 cout<<"String after reverse :"<<Arr<<endl;
   
    return 0;
}
