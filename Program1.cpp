#include<iostream>

using namespace std;

void Fibonacii(int iNo)
{
    int first=0,second =1,third =0;

    cout<<"Fibonaci Series is :"<<endl;

    cout<<first<<endl;
    cout<<second<<endl;

    for(int i =0;i<iNo;i++)
    {
        if(i <= 1)
        {
          third = i;
        }
        else
        {
            third = first+second;
            cout<<third<<"\t";
            first = second;
            second=third;
        }
    }
}

int main()
{
    int num=0;

    cout<<"Enter how many fibonachi series you wannt"<<endl;
    cin>>num;

    Fibonacii(num);

    return 0;
}