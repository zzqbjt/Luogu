#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	int max=0,week=0;
	for(i=1;i<=7;i++)
	{
		cin>>a>>b;
		if(a+b>=8&&a+b>max)
		{
			max=a+b;
			week=i;
		}
	}
	cout<<week;
	return 0;
}

