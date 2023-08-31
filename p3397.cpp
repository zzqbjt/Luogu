#include<iostream>
using namespace std;
struct D
{
	int d_x;
	int d_y;	
};
int main()
{
	int n, m;
	cin>>n>>m;
	int** a = new int* [n+1];
	D** d = new D* [n+1];
	int x1, x2, y1, y2;
	for(int i = 0; i <= n; i++)
	{
		a[i] = new int [n+1];
		d[i] = new D [n+1];
		for(int j = 0; j <= n; j++)
		{
			a[i][j] = 0;
			d[i][j].d_x = 0;
			d[i][j].d_y = 0;
		}		
	}
	for(int i = 0; i < m; i++)
	{
		cin>>x1>>y1>>x2>>y2;
		for(int x = x1; x <= x2; x++)
		{
			d[x][y1].d_x++;
			if(y2+1 <= n)
				d[x][y2+1].d_x--;
		}			
		for(int y = y1; y <= y2; y++)
		{
			d[x1][y].d_y++;
			if(x2+1 <= n)
			d[x2+1][y].d_y--;
		}		
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			a[i][j] = a[i-1][j] + d[i][j].d_y;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}

