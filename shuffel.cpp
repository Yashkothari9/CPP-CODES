#include<bits/stdc++.h>
using namespace std;
int pre(vector<int> arr,int l,int r)
{
    for(int i=l;i<r;i++)
    {
        if(arr[i]==1)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,m;
        cin>>n>>x>>m;
        int l=x,r=x;
        vector<int> arr(n);
        int p,q;
        for(int i=0;i<m;i++)
        {
            cin>>p>>q;
            if(p<=l||r>=r)
            {
            l=min(p,l);
            r=max(q,r);
            }
        }
        cout<<r-l<<"\n";
    }
    return 0;
}
