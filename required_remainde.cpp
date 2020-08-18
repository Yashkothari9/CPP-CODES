#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int ans;
        if(n/x==floor(n/x))
        {
            ans=x*((n/x)-1)+y;
        }
        else
        {
            int rem=n/x;
            if(rem*x+y>n)
            {
                ans=(rem-1)*x+y;
            }
            else
            {
                ans=rem*x+y;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
