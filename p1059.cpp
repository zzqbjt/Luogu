#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int* a=new int [N];
	for(int i=0;i<N;i++)
		cin>>a[i];
	sort(a,a+N);
	int len=N;
	for(int i=0;i<len-1;i++)
	{
		if(a[i]==a[i+1])
		{
			for(int j=i;j<len-1;j++)
				a[j]=a[j+1];
			len--;
			i--;
		}
	}
	cout<<len<<endl;
	for(int i=0;i<len;i++)
		cout<<a[i]<<' ';
	return 0;
}

