#include<iostream>

using namespace std; 

  class Base
{
	
	public:
	int x,y;
	
	Base()
	{
		
		cout<<"inside base constructor\n";
		
	}
	~Base()
	{
		cout<<"inside bade destructor\n";
	}
 };

int main()
{
	Base obj;
	cout<<"ganpati bappa\n";
	return 0;
}