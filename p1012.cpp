#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(string a,string b)
{
	int i;
	bool judge=true;
	if(a.size()>b.size())
	{
		for(i=0;i<b.size();i++)
		{
			if(a[i]!=b[i])
			{
				judge=false;
				break;
			}	
		}
		if(a[i]>=a[0]&&judge)
			return true;
		else if(a[i]<a[0]&&judge)
			return false;
	}
	else if(a.size()<b.size())
	{
		for(i=0;i<a.size();i++)
		{
			if(a[i]!=b[i])
			{
				judge=false;
				break;
			}	
		}
		if(b[i]>=b[0]&&judge)
			return false;
		else if(b[i]<b[0]&&judge)
			return true;
	}
	return (a>b);
} 
int main()
{
	int n;
	cin>>n;
	string* a=new string [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
		cout<<a[i];
	return 0;
}

