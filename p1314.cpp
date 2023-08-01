#include<iostream>
#include<cmath>
using namespace std;

long long Exam(int W, int* w, int* v, int* l, int* r, int m, int n)
{
	long long* count = new long long [n+1];
	long long* sum = new long long [n+1];
	count[0] = 0;
	sum[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		if(w[i] >= W)
		{
			count[i] = count[i-1] + 1;
			sum[i] = sum[i-1] + v[i];
		}
		else
		{
			count[i] = count[i-1];
			sum[i] = sum[i-1];
		}
	}
	long long Y = 0;
	long long y;
	for(int i = 0; i < m; i++)
	{
		int L = l[i];
		int R = r[i];
		y = (count[R] - count[L-1]) * (sum[R] - sum[L-1]);
		Y += y;
	}
	return Y;
}

int main()
{
	int n, m;
	long long s;
	cin>>n>>m>>s;
	long long ans = 0x3f3f3f3f3f3f3f3f;
	int* w = new int [n+1];
	int* v = new int [n+1];
	
	int* l = new int [m];
	int* r = new int [m];
	int Wmax = 0;
	int Wmin = 2147483647;
	for(int i = 1; i <= n; i++)
	{
		cin>>w[i]>>v[i];
		if(w[i] > Wmax)
			Wmax = w[i];
		if(w[i] < Wmin)	
			Wmin = w[i];	
	}
	for(int i = 0; i < m; i++)
		cin>>l[i]>>r[i];
	int Wleft = Wmin-1, Wright = Wmax+2;
	int Wmid;
	long long S;
	while(Wleft <= Wright)
	{
		Wmid = (Wleft + Wright) / 2;
		S = Exam(Wmid, w, v, l, r, m, n);
		if(S > s)
			Wleft = Wmid + 1;
		else
			Wright = Wmid - 1;
		if(llabs(s-S) < ans)
			ans = llabs(s-S);
	}
	cout<<ans;
	return 0;
}

