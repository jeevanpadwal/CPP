#include <iostream>
using namespace std;

int main()
{
    
    enum Marvellous_batch{PPA=0,LB=1,LSP=2,python=3};
    const int Fees[]={15000,16000,17000,18000};
    const float Duration []={3.5,4.0,3.5,4.5};
    
    int choice=0;
    cout<<"select thebatch"<<"\n";
    cout<<"0:PPA"<<"\n";
    cout<<"1:LB"<<"\n";
    cout<<"2:LSP"<<"\n";
    
    
    cin>>choice;
    switch(choice)
    {
        
        case PPA:
        cout<<"thank you for PPA"<<"\n";
        cout<<"duration:"<<Duration[PPA]<<"\n";
        cout<<"fees:"<<Fees[PPA]<<"\n";
        cout<<"Duration:"<<Duration<<"\n";
        break;
        
        case LB:
        cout<<"thank you for LB"<<"\n";
        cout<<"duration:"<<Duration[LB]<<"\n";
        cout<<"fees:"<<Fees[LB]<<"\n";
        break;
        
        case LSP:
        cout<<"thank you for LSP"<<"\n";
        cout<<"duration:"<<Duration[LSP]<<"\n";
        cout<<"fees:"<<Fees[LSP]<<"\n";
        break;
    }
    
    
    return 0;
}
