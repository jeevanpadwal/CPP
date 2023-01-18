   #include"Header.h"

    DCLL::  DCLL()
    {
        head = NULL;
        tail = NULL;
        CountNode = 0;
    }

    void DCLL:: InsertFirst(int no)
    {
       PNODE newn=NULL;

       newn = new NODE;

       newn->data=no;
       newn->next=NULL;
       newn->prev=NULL;

       if((CountNode==0)) //(head==NULL)&&(tail==NULL)
       {

        head = newn;
        tail= newn;

       }
       else
       {
         newn->next = head;
         head->prev = newn;

        head=newn;

       }
        head->prev =tail;
        tail->next = head;

        CountNode++;
    }
    void DCLL:: InsertLast(int no)
    {
        
       PNODE newn=NULL;

       newn = new NODE;

       newn->data=no;
       newn->next=NULL;
       newn->prev=NULL;

       if((CountNode==0)) //(head==NULL)&&(tail==NULL)
       {

        head = newn;
        tail= newn;

       }
       else
       {
           tail->next=newn;
           newn->prev=tail;

          tail =newn;


       }
        head->prev =tail;
        tail->next = head;

        CountNode++;
    }
    
    void DCLL:: InsertAtPos(int no,int pos)
    {
        if((pos<1)||(pos > CountNode+1))
        {
            cout<<"Invalid Position";
            return;
        }
        else if(pos == 1)
        {
            InsertFirst(no);
        }
        else if(pos == CountNode + 1 )
        {
            InsertLast(no);

        }
        else
        {
            PNODE newn=NULL;

            newn = new NODE;

             newn->data=no;
             newn->next=NULL;
             newn->prev=NULL;

             PNODE temp=head;

             for(int i = 1; i < pos-1; i++)
             {
                 temp = temp->next;
             }

             newn->next = temp->next;
             newn->next->prev=newn;

             temp->next=newn;
             newn->prev =temp;

             CountNode++;

        }
       
    }

    void DCLL:: DeleteFirst()
    {
        if(CountNode==0)
        {
            return ;
        }
        else if(CountNode == 1)
        {
           delete head;

           head = NULL;
           tail = NULL;
        
        }
        else
        {
            head = head->next;

            delete tail->next;

        }
        head->prev=tail;
        tail->next=head;

        CountNode--;
    }
    void DCLL:: DeleteLast()
    {
         if(CountNode ==0)
        {
            return ;
        }
        else if(CountNode == 1)
        {
           delete head;

           head = NULL;
           tail = NULL;
        
        }
        else
        {
           tail=tail->prev;

           delete tail->next;

        }
        tail->next=head;
        head->prev=tail;

        CountNode--;
    }
    void DCLL:: DeleteAtPos(int pos)
    {
        if((pos<1)||(pos > CountNode))
        {
            cout<<"Invalid Position";
            return;
        }
        else if(pos == 1)
        {
            DeleteFirst();
        }
        else if(pos == CountNode )
        {
            DeleteLast();

        }
        else
        {
            PNODE temp = head;

             for(int i = 1; i < pos-1; i++)
             {
                 temp = temp->next;
             }
             temp->next = temp->next->next;

             delete temp->next->prev;
             temp->next->prev=temp;

             CountNode--;
             
        }
    }

    int DCLL::Count()
    {
        return CountNode;
    }
    void DCLL:: Display()
    {
        PNODE temp = head;
        int i=0;

        for(i=1; i<= CountNode; i++)
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
        }
        cout<<"\n";


    }

