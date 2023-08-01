#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int x=1,y=1;
	int i=1,j=1;
	int judge=0;
	int sum=1;
	while(sum<N)
	{
		if(x==1&&judge==0)
		{
			y++;
			i=1;
			j=-1;
			judge=1;
		}
		else if(y==1&&judge==0)
		{
			x++;
			i=-1;
			j=1;
			judge=1;
		}
		else
		{
			x+=i;
			y+=j;
			judge=0;
		}
		sum++;
	}
	cout<<x<<'/'<<y;
	return 0;
}

