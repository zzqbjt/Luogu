#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int Rem;
    while(b > 0)
    {
        Rem = a % b;
        a = b;
        b = Rem;
    }
    return a;
}
int main()
{
	int P,Q,x,y;
	cin>>x>>y;
	int product=x*y;
	int count=0;
	for(int i=x;i<=y;i++)
	{
		if(product%i==0&&gcd(i,product/i)==x)
		{
//			cout<<i<<" "<<product/i<<endl;
			count++;
		}	
	}
	cout<<count;
	return 0;
}

