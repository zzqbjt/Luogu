#include<iostream>	
using namespace std;
struct carpet
{
	int a,b,g,k;
};
int main()
{
	int n,x,y,i;
	cin>>n;
	carpet* A=new carpet[n+1];
	for(i=1;i<=n;i++)
		cin>>A[i].a>>A[i].b>>A[i].g>>A[i].k;
	cin>>x>>y;
	for(i=n;i>=1;i--)
	{
		if(x>=A[i].a&&x<=A[i].a+A[i].g&&y>=A[i].b&&y<=A[i].b+A[i].k)
		{
			cout<<i;
			break;
		}
	}
	if(i<1)
		cout<<-1;
	return 0;
}

