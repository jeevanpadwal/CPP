// Singly linear link list in generic 

#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class SinglyLL
{
    public :
    struct node<T> *head;
    int Count;

    public :
    
    SinglyLL();
    void InsertFirst(T No);
    void InsertLast(T No);
    void Display();
    int CountNode();

};
template<class T>
SinglyLL<T> :: SinglyLL()
{
    head = NULL;
    Count =0;
}

template<class T>
 void SinglyLL<T> :: InsertFirst(T No)
{
    struct node<T> *newn =NULL;
    newn =new node<T>;

    newn ->data= No;
    newn->next=NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        newn->next=head;
        head=newn;
    }
    Count++;

}

template<class T>
void SinglyLL<T> :: InsertLast(T No)
{
    struct node<T> *newn =NULL;
    newn =new node<T>;

    newn ->data= No;
    newn->next=NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {

        struct node<T> * temp=head;
        while(temp->next != NULL)
        {
            temp=temp->next;

        }
        temp -> next =newn;
       
    }
   Count++;
}

template<class T>
void SinglyLL<T> :: Display()
{

  cout<<"Elements from link list are :"<<endl;
  struct node<T> *temp =head;
  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;

  }
  cout<<endl;
}

template<class T>
int SinglyLL<T> :: CountNode()
{
    return Count;
}



int main()
{
    SinglyLL <int>obj1;
     SinglyLL <float>obj2;

     obj1.InsertFirst(11);
     obj1.InsertFirst(21);
     obj1.InsertLast(51);

     obj1.Display();
     int iret=obj1.CountNode();
     cout<<"Elements is :"<<iret<<endl;


     obj2.InsertFirst(11.21);
     obj2.InsertFirst(21.23);
     obj2.InsertLast(51.32);

     obj2.Display();
     float fret=obj2.CountNode();
     cout<<"Elements is :"<<iret<<endl;



    return 0;
}
