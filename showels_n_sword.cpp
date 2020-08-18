#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,ans;
        cin>>a>>b;
        if(a==0||b==0)
        {
            ans=0;
        }
        else
        {
            int mx,mi;
            mx=max(a,b);
            mi=min(a,b);
            if(mi<=mx/2)
            {
                ans=mi;
            }
            else
            {
                ans=(a+b)/3;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
