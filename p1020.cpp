#include<iostream>
#define inf 100000
using namespace std;
int num=0;
struct Node
{
	int data;
	Node* next;	
	bool visited;
};
int FirstAdj(Node* a,int i)
{
	if(!a[i].next)
		return -1;
	return a[i].next->data;
}
int NextAdj(Node* a,int i,int j)
{
	Node* curr=&a[i];
	while(curr->data!=j&&curr->next)
		curr=curr->next;
	if(!curr->next)
		return -1;
	else
		return curr->next->data;
}
int longest(Node* a,int i)
{
	int max=0;
	if(a[i].next==NULL)
		return 1;
	for(int w=FirstAdj(a,i);w!=-1;w=NextAdj(a,i,w))
	{
		if(longest(a,w)>max)
			max=longest(a,w);	
	}
	return max+1; 
}
int main()
{
	int n=0;
	int min=inf,index; 
	Node a[10000];
	while(cin>>a[n].data)
	{
		a[n].next=NULL;
		a[n].visited=false;
		if(a[n].data<inf)
		{
			min=a[n].data;
			index=n;
		}
		for(int i=0;i<n;i++)
		{
			if(a[i].data>a[n].data)
			{
				Node* p=new Node;
				p->data=n;
				p->next=NULL;
				Node* curr=&a[i];
				while(curr->next)
					curr=curr->next;
				curr->next=p;
			}
		}
		n++;
		if(cin.get()=='\n')
			break;	
	}
	cout<<longest(a,0)<<endl;	
	return 0;
}

