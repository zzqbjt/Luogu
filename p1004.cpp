#include<iostream>
using namespace std;
struct Point
{
	int x;
	int y;
	int value;	
};
int m=0;
int max(int x1,int y1,int x2,int y2,int** a)
{
	if(x1==x2&&y1==y2)
	{
		m=a[x1][y1];
		return m;
	}
	int m1=0,m2=0;
	if(x2>x1)
		m1=max(x1,y1,x2-1,y2,a);
	if(y2>y1)
		m2=max(x1,y1,x2,y2-1,a);
	if(m1>m2)
	{
		m=m1;
	 }
	else
	{
		m=m2;
	 } 
	m+=a[x2][y2];
	return m;		
} 
int main()
{
	int N;
	cin>>N;
	int** a=new int* [N];
	int b[N][N];
	for(int i=0;i<N;i++)
	{
		a[i]=new int [N];
		for(int j=0;j<N;j++)
			a[i][j]=0;
	}	
	Point p;
	while(true)
	{
		cin>>p.x>>p.y>>p.value;
		if(p.x==0&&p.y==0&&p.value==0)
			break;
		a[p.x-1][p.y-1]=p.value;
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<max(0,0,N-1,N-1,a)<<endl;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}

