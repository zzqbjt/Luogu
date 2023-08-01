#include<iostream>
using namespace std;
int main()
{
	int l,m,u,v,sum=0;
	cin>>l>>m;
	int* a=new int [l+1];
	for(int i=0;i<=l;i++)
		a[i]=1;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		for(int i=u;i<=v;i++)
		{
			if(a[i]==1)
				a[i]=0;
		}
	}
	for(int i=0;i<=l;i++)
		sum+=a[i];
	cout<<sum;
	return 0;
}

