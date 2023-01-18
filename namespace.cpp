#include <iostream>

namespace 
{
    void fun()
    {
        std::cout<<"inside fun "<<"\n";
    }
}


int main()
{
   
    std::cout << "Hello world!"<<"\n";
    
    fun();
    
    return 0;
}