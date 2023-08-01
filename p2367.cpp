#include<iostream>
using namespace std;
int main()
{
	int n, p;
	cin>>n>>p;
	long long* a = new long long [n+1];
	int* d = new int [n];
	a[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		cin>>a[i];
		d[i] = a[i] - a[i-1];
	}
		
	int x, y, z;
	for(int i = 0; i < p; i++)
	{
		cin>>x>>y>>z;
		d[x] += z;
		d[y+1] -= z;
	}
	long long min = 100000000;
	for(int i = 1; i <= n; i++)
	{
		a[i] = a[i-1] + d[i];
		if(a[i] < min)
			min = a[i];
	}
	cout<<min;
	return 0;
}

