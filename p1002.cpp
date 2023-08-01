#include<iostream>
#include<cmath>
using namespace std;
bool s[100][100]={0};
long long f[100][100]={0};
int main()
{
	int n,m;
	int x,y;
	cin>>n>>m>>x>>y;
	n+=1;
	m+=1;
	x+=1;
	y+=1;
	s[x][y]=1;
	s[x-2][y-1]=1;
	s[x+2][y-1]=1;
	s[x-2][y+1]=1;
	s[x+2][y+1]=1;
	s[x-1][y-2]=1;
	s[x-1][y+2]=1;
	s[x+1][y-2]=1;
	s[x+1][y+2]=1;
	f[1][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(s[i][j])
				continue;
			if(i==1&&j==1)
				continue;	
			f[i][j]=f[i-1][j]+f[i][j-1];	
		}
	}
	cout<<f[n][m];	
	return 0;
}

