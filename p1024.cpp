#include<iostream>
#include<stdio.h>
using namespace std;
double a,b,c,d;
double f(double x)
{
	return a*x*x*x+b*x*x+c*x+d;
}
int main()
{	
	cin>>a>>b>>c>>d;
	double left[4],right[4];
	left[0]=-100;right[0]=100;
	int k=1;
	for(int i=left[0];i<right[0];i++)
	{
		if(f(i)*f(i+1)<=0&&(f(i+1)!=0||(f(i)==0&&f(i+1)==0)))
		{
			left[k]=i;
			right[k]=i+1;
			k++;
		}
	}
	k--;
	double x[4];
	double mid;
	for(int i=1;i<=k;i++)
	{
//		cout<<left[i]<<" "<<right[i]<<endl;
		if(f(left[i])==0)
		{
			x[i]=left[i];
			continue;
		}
		else
		{
			while(right[i]-left[i]>0.01)
			{
				mid=(left[i]+right[i])/2;
				if(f(mid)==0)
				{
					x[i]=mid;
					break;
				}
				else if(f(mid)*f(left[i])<0)
					right[i]=mid;
				else if(f(mid)*f(right[i])<0)
					left[i]=mid;
			}
			x[i]=(left[i]+right[i])/2;	
		}			
	}
	printf("%.2lf %.2lf %.2lf",x[1],x[2],x[3]);
	return 0;
}

