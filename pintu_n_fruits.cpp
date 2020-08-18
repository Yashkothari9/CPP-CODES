#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int mi[m]={0};
        int f[n],p[n];
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            mi[f[i]]+=p[i];
        }
        int min=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(min>mi[i] && mi[i]!=0)
            {
                min=mi[i];
            }
        }
            for(int i=0;i<m;i++)
            {
                cout<<mi[i]<<" ";
            }cout<<"\n";
        cout<<min<<"\n";
    }
    return 0;
}
