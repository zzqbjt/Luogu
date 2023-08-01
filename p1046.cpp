#include<iostream>
using namespace std;
int main()
{
	int a[100],k,sum=0;
	for(int i=0;i<10;i++)
		cin>>a[i];
	cin>>k;
	for(int i=0;i<10;i++)
	{
		if(a[i]<=k+30)
			sum++;
	}
	cout<<sum;
	return 0;
}

