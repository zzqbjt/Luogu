#include<iostream>
#include<cmath>
using namespace std;
bool IsPrime(int n)
{
	if(n==0||n==1)
		return false;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
				return false;
		}
		return true;
	}
}
int main()
{
	int n;
	cin>>n;
	int p,q;
	if(IsPrime(n))
		cout<<n;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				q=n/i;
				p=q>i?q:i;
				if(IsPrime(p))
				{
					cout<<p;
					break;
				}
			}
		}
	}
	return 0;
}

