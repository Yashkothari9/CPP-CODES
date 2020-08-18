#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int ans[n];
    if(t!=10)
    {
    for(int i=0;i<n;i++)
    {
        ans[i]=t;
    }
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            ans[i]=1;
        }
        ans[n-1]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
    }
    cout<<"\n";
}
