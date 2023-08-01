#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int* a = new  int [n];
	int* sum = new int [n];
	for(int  i = 0; i < n; i++)
	{
		cin>>a[i];
		if (i == 0)
			sum[i] = a[i];
		else
			sum[i] = sum[i-1] + a[i];
			
	}
	int m;
	int l, r;
	cin>>m;
	for(int i = 0; i < m; i++)
	{
		cin>>l>>r;
		cout<<sum[r-1] - sum[l-1] + a[l-1]<<endl;
	}
	return 0;
}

