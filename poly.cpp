#include<iosteram>
using namespace std;

class Demo:
{
	//Addition@2ii asa nav hota hyala name mangling mhntata
	Addition(int No1,int No2);
	{
		int ans=0;
		ans =No1+No2;
		return ans;
	
	}
	//Addition@3iii he change zalela naav aselach asa naahi
	Addition(int No1,int No2,int No3);
	{
		int ans=0;
		ans =No1+No2+No3;
		return ans;
	}
	//Addition@4iiii
	Addition(int No1,int No2,int No3,int No4);
	{
		int ans=0;
		ans =No1+No2+No3+No4;
		return ans;
	}
	
};

int main()

{
	Demo obj;
	int ret=0;
	
	ret=obj.Addition(10,23);//obj.Addition@2ii(10,23)
	cout<<ret<<"\n";
	
	ret=obj.Addition(10,23,56);
	cout<<ret<<"\n";
	
	ret=obj.Addition(10,23,56,45);
	cout<<ret<<"\n";
	
	
	return 0;
}