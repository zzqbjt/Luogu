#include<iostream>
#include<cmath>
using namespace std;
int a[10000];
int main()
{
	int expection,cost,max=0,max_price;
	bool flag=true;
	int price,curr=0,k;
	cin>>expection;
	while(true)
	{
		cin>>price;
		if(flag)
			cost=price;
		if(price==-1)
		{
			cin>>price;
			break;
		}
		else
		{
			cin>>a[price];
			if(price-curr>1&&!flag)
			{				
				for(int i=curr+1;i<price;i++)
					a[i]=a[curr]-(a[curr]-a[price])/(price-curr)*(i-curr);
			}			
			curr=price;
			
		}
		flag=false;		
	}
	cin>>k;
	while(a[curr]>0)
	{
		curr++;
		a[curr]=a[curr-1]-k;
	}
	int x=0;
	while(true)
	{
		max=0;
		for(int i=0;i<10000;i++)
		{
			if(a[i]!=0)
			{
				if(a[i]*(i-cost+x)>max)
				{
					max=a[i]*(i-cost+x);
					max_price=i;
				}
				if(a[i]*(i-cost+x)==max&&i==expection)
					max_price=i;
			}
		}
		if(max_price>expection)
			x++;
		else if(max_price<expection)
			x--;
		else
			break;
	}
//	for(int i=0;i<10000;i++)
//	{
//		if(a[i]!=0)
//			cout<<i<<":"<<a[i]<<endl;
//	}
	cout<<x;
	return 0;
}

