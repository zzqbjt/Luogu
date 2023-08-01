#include<iostream>
#include<string> 
using namespace std;
string ADD(string a, string b,int n)
{
	string result="          ";
	if(a.size()>=b.size())
	{
		for(int i=0;i<a.size()-b.size();i++)
			result[i]=a[i];
		for(int i=a.size()-b.size();i<a.size();i++)
		{
			result[i]=a[i]+b[i-a.size()+b.size()];
			if(result[i]>=n)
			{
				result[i]-=n;
				result[i-1]++;
			}				
		}
	}
	return result;
}
int main()
{
//	int M,N;
//	cin>>N>>M;
	bool judge=true;
	cout<<ADD("6540","123",10);
//	for(int i=0;i<=30;i++)
//	{
//		
//	}
	return 0;
}

