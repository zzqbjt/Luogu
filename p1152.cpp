#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int* a=new int [n];
	int* b=new int [n-1];
	int* c=new int [n];
	bool flag=true;
	for(int i=1;i<n;i++)
		c[i]=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i>0)
		{
			b[i-1]=abs(a[i]-a[i-1]);
			if(b[i-1]>=1&&b[i-1]<=n-1)
				c[b[i-1]]++;	
		}		
	 } 
	for(int i=1;i<=n-1;i++)
	{
		if(c[i]!=1)
		{
			flag=false;
			break;
		}
	}
	if(flag)
		cout<<"Jolly";
	else
		cout<<"Not jolly";
	return 0;
}

