#include<iostream>
using namespace std;
bool judge=true;
void func(int n)
{	
	judge=true;
	int count=0;
	int a[100];
	while(n!=1)
	{
		a[count]=n%2;
		n/=2;
		count++;	
	} 
	a[count]=1;
	for(int i=count;i>=0;i--)
	{
		if(judge)
		{
			if(a[i]&&i==1)
				cout<<2;
			else if(a[i]&&i==0)
				cout<<"2(0)";
			else if(a[i])
			{
				cout<<"2(";
				func(i);
				cout<<")";
			}
			judge=false;
		}
		else
		{
			if(a[i]&&i==1)
				cout<<"+2";
			else if(a[i]&&i==0)
				cout<<"+2(0)";
			else if(a[i])
			{
				cout<<"+2(";
				func(i);
				cout<<")";
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	func(n);
	return 0;
}

