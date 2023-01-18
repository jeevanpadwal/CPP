#include<iostream>
#include<stdbool.h>

using namespace std;
void strlwrX(char str[])
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

}


void ChkAnagram(char Arr[],char brr[])
{

  strlwrX(Arr);
  strlwrX(brr);

    int freq1[26];
    int freq2[26];
    int cnt =0,i=0,x=0,y=0,b=0;

    for(int q =0;q<=26 ; q++)
    {
        freq1[q]=0;
   
    }
     for(int m =0;m<=26 ; m++)
    {
    
        freq2[m]=0;
    }

   while(*Arr != '\0')
    {
       freq1[int(Arr[i]) - 'a']++;
       Arr++;
       i++; 
    }
    
    cout<<"Data of 1 st freqency counter"<<endl;
    for(int j= 0;j < 26 ;j++)
    {
        cout<<freq1[j]<<endl;
       
    }

    

} 

int main()
{
    char arr[30];
    char brr[30];

    cout<<"Enter first String"<<endl;
    cin.getline(arr,30);

    cout<<"Enter second string"<<endl;
    cin.getline(brr,30);

    ChkAnagram(arr,brr);

}