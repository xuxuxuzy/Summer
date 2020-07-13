#include<bits\stdc++.h>
using namespace std;
int main()
{
	set<int>p;
	set<int>::iterator it;
	int n,x;
	cin>>n;
	while(n--)
	{
		cin>>x;
		p.insert(x);
	}
	for(it=p.begin();it!=p.end();it++)
		printf("%d\n",*it);
	
	return 0;
}
