#include<iostream>
using namespace std;

class Demo
{
	
	public:
	int i,j;//instance variable (non static)
	static int x; // class variable   (ststic)
	
	
	Demo(int a =10, innt b=20)
	{
		cout<<"inside costructor\n";
		
		this ->=a;
		this -> =b;
	}	
		void fun(int no)
		{
			
			cout<<"inside non ststic fun\n";
			cout<<"this->i<<\n";
			
		}
		//ststic void gun(int value)
		static void gun(int value)
		{
		cout<<"inside ststic gun\n";	
	
		}		
	};
	
	Demo::int x=30;
	
	int main()
	{
	
	 cout<<Demo::x"\n";
	
	 
	 Demo::gun(11);
	
	 return 0;
	}