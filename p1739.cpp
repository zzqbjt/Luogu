#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool judge(string str)
{
	stack<char> s;
	char c;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='('||str[i]=='['||str[i]=='{')
			s.push(str[i]);
		if(str[i]==')'||str[i]==']'||str[i]=='}')
		{
			if(s.empty())
				return false;
			c=s.top();
			s.pop();
			if((str[i]==')'&&c!='(')||(str[i]==']'&&c!='[')||(str[i]=='}'&&c!='('))
				return false;
		}
	}
	if(s.empty())
		return true;
	else
		return false;
}
int main()
{
	string str; 
	getline(cin,str);	
	if(judge(str))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

