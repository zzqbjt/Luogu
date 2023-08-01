#include<iostream>
#include<cmath>
using namespace std;
int array[2100000];
int main()
{
	int n,t;
	double a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>t;
		for(int j=1;j<=t;j++)
			array[int(floor(j*a))]=!array[int(floor(j*a))];
	}
	int x=1;
	while(array[x]==0)
		x++;
	cout<<x;
	return 0;
}

