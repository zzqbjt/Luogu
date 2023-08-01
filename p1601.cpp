#include<iostream>
#include<string>
using namespace std;
string add(string A, string B)
{
	string r = "";
	char b;
	int C = 0;
	int x = A.size() - 1;
	int y = B.size() - 1;
	while(x >= 0 && y >= 0)
	{
		if(A[x] + B[y] + C - 2*'0' >= 10)
		{
			b = A[x] + B[y] + C - '0' - 10;
			C = 1;			
		}
		else
		{
			b = A[x] + B[y] + C - '0';
			C = 0;			
		}
		r = b + r;
		x--;
		y--;
	}
	if(x >= 0)
	{
		while(x >= 0)
		{
			if(A[x] + C - '0' >= 10)
			{
				b = A[x] + C - 10;
				C = 1;			
			}
			else
			{
				b = A[x] + C;
				C = 0;			
			}
			r = b + r;
			x--;
		}		
	}
	if(y >= 0)
	{
		while(y >= 0)
		{
			if(B[y] + C - '0' >= 10)
			{
				b = B[y] + C - 10;
				C = 1;			
			}
			else
			{
				b = B[y] + C;
				C = 0;			
			}
			r = b + r;
			y--;
		}		
	}
	if(C > 0)
		r = char(C+'0') + r;
	return r;
}
int main()
{
	string A;
	string B;
	cin>>A>>B;
	cout<<add(A, B);
	return 0;
}

