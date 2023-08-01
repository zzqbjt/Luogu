#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int* a=new int [N];
	for(int i=0;i<N;i++)
		a[i]=0;
	cout<<N<<endl;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(j!=i)
			{
				a[j]=!a[j];
			}
		}
		for(int k=0;k<N;k++)
			cout<<a[k];
		cout<<endl;
	 } 
	return 0;
}

