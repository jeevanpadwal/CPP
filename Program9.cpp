//generic class 

#include<iostream>
using namespace std;

class ArryX
{
    public :
    int *Arr;
    int Size;

    ArryX(int value);
    ~ArryX();
    void Accept();
     void Display();
     int Maximum();
};

   ArryX ::ArryX(int value)
    {
        Size=value;
        Arr = new int[Size];
    }
    ArryX :: ~ArryX()
    {
        delete []Arr;
    }

    void ArryX :: Accept()
    {
        cout<<"Enter the values :"<<"\t"<<endl;
        for(int i =0;i<Size; i++)
        {
            cin>>Arr[i];
        }
    }

     void ArryX :: Display()
    {
        cout<<"Values are  :"<<"\t"<<endl;
        for(int i = 0;i<Size; i++)
        {
            cout<<Arr[i]<<"\t";
        }
    }

    int ArryX :: Maximum()
    {
        int Max =Arr[0];
        for(int i =0;i<Size;i++)
        {
            if(Arr[i] > Max)
            {
                Max =Arr[i];
            }
        }
        return Max;
    }

int main()
{
    int iret=0;

    ArryX obj1(5);
    obj1.Accept();
    obj1.Display();

    iret=obj1.Maximum();
    cout<<"Maximum :"<<iret<<endl;

 
  
    return 0;
}