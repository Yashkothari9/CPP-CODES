#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    cin>>n>>m;
    vector<int> a[n];
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}
