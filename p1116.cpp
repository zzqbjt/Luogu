#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int* a=new int [N];
	int count=0;
	for(int i=0;i<N;i++)
		cin>>a[i];
	for(int i=N-1;i>=0;i--)
	{
		bool judge=true;
		for(int j=1;j<=i;j++)
		{
			if(a[j-1]>a[j])
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				count++;
				judge=false;	
			}			
		}
		if(judge)
			break;
	}
	cout<<count;
	return 0;
}

