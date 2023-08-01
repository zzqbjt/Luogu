#include<iostream>
using namespace std;
int maxsub(int* a, int left, int right)
{
	int* dp = new int [right-left+1];
	int ans = -100;
	for(int i = left; i <= right; i++)
		dp[i] = 0; 
	dp[0] = a[0];
	for(int i = left+1; i <= right; i++)
	{
		dp[i] = dp[i-1]+a[i] > dp[i] ? dp[i-1]+a[i] : dp[i];
		ans = dp[i] > ans ? dp[i] : ans;
	}
	return ans;	
}
int main()
{
	int n;
	cin>>n;
	int** a = new int* [n];
	int* b = new int [n];
	for(int i = 0; i < n; i++)
	{
		a[i] = new int [n];
		b[i] = 0;
		for(int j = 0; j < n; j++)
			cin>>a[i][j];
	} 
	int max = 0;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		for(int m = 0; m < n; m++)
			b[m] = 0;
		for(int j = i; j < n; j++)
		{
			for(int l = 0; l < n; l++)			
				b[l] += a[j][l];				
			sum = maxsub(b, 0, n-1);
			if(sum > max)
				max = sum;
		}
	}
	cout<<max;
	return 0;
}

