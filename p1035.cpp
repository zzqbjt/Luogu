#include<iostream>
using namespace std;
int main()
{
	int n=1,k;
	cin>>k;
	double sum=0;
	while(sum<=k)
	{
		sum+=1.0/n;
		n++;
	} 
	cout<<n-1;
	return 0;
}

