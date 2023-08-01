#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[10000];
	a[1]=1;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(i%2)
			a[i]=a[i-1];
		else
			a[i]=a[i-1]+a[i/2];	
	}
	cout<<a[n];
	return 0;
}

