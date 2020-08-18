#include<bits/stdc++.h>
using namespace std;
long long int f(int n)
{
    int ans=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            ans=i;
            break;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int ans=f(n)+n;
        ans=ans+(k-1)*2;
       /* for(int i=0;i<k;i++)
        {
        cout<<ans<<"\t";
        ans+=f(ans);
        }*/
    cout<<ans<<"\n";
    }
}
