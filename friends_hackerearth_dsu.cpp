#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> frnd[n];
	int a,b;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		frnd[a-1].push_back(b-1);
		frnd[b-1].push_back(a-1);
	}
	vector<int> ans(n,0);
	for(int i=0;i<n;i++)
	{
		ans[i]=frnd[i].size();
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}cout<<"\n";
	return 0;
}
