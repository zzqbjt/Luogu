#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int p,q,r;
	int l,m,n;
	int x=1;
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if(j!=i)
			{
				for(int k=1;k<=9;k++)
				{
					if(k!=j&&k!=i)
					{
						a=100*i+10*j+k;
						b=a*2;
						c=a*3;
						p=b/100;
						if(p==i||p==j||p==k||p>9)
							continue;
						q=b%100/10;
						if(q==i||q==j||q==k||q==p||q==0)
							continue;
						r=b%10;
						if(r==i||r==j||r==k||r==p||r==q||r==0)
							continue;
						l=c/100;
						if(l==i||l==j||l==k||l>9||l==p||l==q||l==r)
							continue;
						m=c%100/10;
						if(m==i||m==j||m==k||m==p||m==q||m==r||m==l||m==0)
							continue;
						n=c%10;
						if(n==i||n==j||n==k||n==p||n==q||n==r||n==l||n==m||n==0)
							continue;
						if(x==1)
						{
							cout<<a<<' '<<b<<' '<<c;
							x++;
						}
						else
							cout<<endl<<a<<' '<<b<<' '<<c;
					}
				}
			}
		}
	}
	return 0;
}

