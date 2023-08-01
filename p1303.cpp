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
string half_mul(string A, char b)
{
	int C = 0;
	string r= "";
	char c;
	for(int i = A.size() - 1; i >= 0; i--)
	{
		c = (A[i] - '0') * (b - '0') + C;
		C = c / 10;
		c = c % 10 + '0';
		r = c + r;
	}
	if(C > 0)
		r = char(C + '0') + r;
	return r;	
} 
string mul(string A, string B)
{
	string r = "0";
	string x = "";
	for(int i = B.size()-1; i >= 0; i--)
	{
		x = half_mul(A, B[i]);
		for(int j = 0; j < B.size() - 1 - i; j++)
			x = x + "0";
		r = add(r, x); 
	}
	for(int i = 0; i < r.size(); i++)
	{
		if(r[i] != '0')
			return r;
	}
	r = "0";
	return r;
}
int main()
{
	string A, B;
	cin>>A>>B;
	cout<<mul(A, B);
	return 0;
}

