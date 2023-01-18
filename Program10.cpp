//generic class 

#include<iostream>
using namespace std;


template <class T>
class ArryX
{
    public :
    T *Arr;
    int Size;

    ArryX(int value);
    ~ArryX();
    void Accept();
     void Display();
     T Maximum();
};
   template <class T>
   ArryX<T> :: ArryX(int value)
    {
        Size=value;
        Arr = new T[Size];
    }

    template <class T>
    ArryX<T> :: ~ArryX()
    {
        delete []Arr;
    }

    template <class T>
    void ArryX<T> :: Accept()
    {
        cout<<"Enter the values :"<<"\t"<<endl;
        for(int i =0;i<Size; i++)
        {
            cin>>Arr[i];
        }
    }

    template <class T>
     void ArryX<T> :: Display()
    {
        cout<<"Values are  :"<<"\t"<<endl;
        for(int i = 0;i<Size; i++)
        {
            cout<<Arr[i]<<"\t";
        }
    }

    template <class T>
    T ArryX<T> :: Maximum()
    {
        T Max =Arr[0];
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

    ArryX <int>obj1(5);
    obj1.Accept();
    obj1.Display();

    iret=obj1.Maximum();
    cout<<"Maximum :"<<iret<<endl;
  
    return 0;
}