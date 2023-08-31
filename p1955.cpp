#include <iostream>
#include <map>

using namespace std;
map<int, int> p;
map<int, int> q;
int find(int x, map<int, int> &p) {
    while (p[x] != x) {
		x = p[x];
        p[x] = p[p[x]];
    }
    return p[x];
}

void union_(int a, int b, map<int, int> &p) {
    p[find(a, p)] = find(b, p);
}

bool connected(int a, int b, map<int, int> &p) {
	return find(a, p) == find(b, p);
}

int main() {
   	int n;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		p.clear();
		q.clear();
		int m;
		cin>>m;
		int j;
		for(j = 0; j < m; j++)
		{
			int a, b, c;
			cin>>a>>b>>c;
			if (!p.count(a))
				p[a] = a;
			if (!p.count(b))
				p[b] = b;
			if (!q.count(a))
				q[a] = a;
			if (!q.count(b))
				q[b] = b;
			if(c == 1)
			{
				if(connected(a, b, q) && a != b)
				{
					cout<<"NO"<<endl;
					break;
				}
				union_(a, b, p);
			}				
			else
			{
				if(connected(a, b, p))
				{
					cout<<"NO"<<endl;
					break;
				}
				union_(a, b, q);
			}				
		}
		if (j == m)
			cout<<"YES"<<endl;
	}
	system("pause");
   	return 0;
}


