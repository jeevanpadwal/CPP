#include "Header.h"

int main()
{
    DCLL obj;
    int ret=0;

    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);


        obj.Display();
        ret=obj.Count();
        cout<<"elements is :\n"<<ret;

        obj.InsertFirst(5);
        obj.Display();
        ret=obj.Count();
        cout<<"elements is :\n"<<ret;

        obj.InsertAtPos(25,3);
        obj.Display();
        ret=obj.Count();
        cout<<"elements is :\n"<<ret;

        obj.DeleteAtPos(3);
        obj.DeleteAtPos(6);
        obj.DeleteAtPos(1);

        obj.Display();
        ret=obj.Count();
        cout<<"elements is :\n"<<ret;


    return 0;
}