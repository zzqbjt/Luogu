#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a=0,b=n,c=0;
	while(b>0)
	{
		b--;
		a++; 
		c++;
		if(c==k)
		{
			c=0;
			b++;
		}
	}
	cout<<a;
	return 0;
}

