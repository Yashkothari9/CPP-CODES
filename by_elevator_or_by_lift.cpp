#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int a[n-1];
    int b[n-1];
    for(int i=0;i<n-1;++i)
    {
        cin>>a[i];
    }
    for(int j=0;j<n-1;++j)
    {
        cin>>b[j];
    }
    int ans[n];
    ans[0]=0;
    int by_which=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>b[i-1]+c && by_which==0)
        {

            ans[i]=ans[i-1]+b[i-1]+c;
            by_which=1;
        }
        else if(a[i-1]>b[i-1] && by_which==1)
            {
               ans[i]=ans[i-1]+b[i-1];
               by_which=1;
            }
        else
        {
            ans[i]=ans[i-1]+a[i-1];
            by_which=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }cout<<"\n";
    return 0;
}
