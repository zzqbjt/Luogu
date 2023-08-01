#include<iostream>
using namespace std;
int main()
{
	int a,n,m,x,b;
	cin>>a>>n>>m>>x;
	int up[100];
	int down[100];
	int upc[100];
	int downc[100];
	int num=a,numc=0;
	up[1]=a;
	up[2]=0;
	upc[1]=0;
	upc[2]=1;
	down[1]=0;
	down[2]=0;
	downc[1]=0;
	downc[2]=1;
	for(int i=3;i<=n-1;i++)
	{
		up[i]=up[i-1]+up[i-2];
		upc[i]=upc[i-1]+upc[i-2];
		down[i]=up[i-1];
		downc[i]=upc[i-1];
		num=num+up[i]-down[i];
		numc=numc+upc[i]-downc[i];
	}
	b=(m-num)/numc;
	up[1]=a;
	down[1]=0;
	up[2]=b;
	down[2]=b;
	num=a;
	for(int i=3;i<=x;i++)
	{
		up[i]=up[i-1]+up[i-2];
		down[i]=up[i-1];
		num=num+up[i]-down[i];
	}
	cout<<num;
	return 0;
}

