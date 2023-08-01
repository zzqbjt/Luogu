#include<iostream>
#include<cmath>
using namespace std;
int sub(int num,int index)
{
	int a[5];
	for(int i=0;i<5;i++)
	{
		a[i]=num/pow(10,5-i-1);
		num-=a[i]*pow(10,5-i-1);
	}
	int r=0;
	for(int i=index-1;i<index+2;i++)
		r+=a[i]*pow(10,index-i+1);
	return r;
 } 
int main()
{
	int k;
	cin>>k;
	bool flag=true;
	for(int i=10000;i<30001;i++)
	{
		if(sub(i,1)%k==0&&sub(i,2)%k==0&&sub(i,3)%k==0)
		{
			cout<<i<<endl;
			flag=false;
		}
	}
	if(flag)
	{
		cout<<"No";
	 } 
	return 0;
}

