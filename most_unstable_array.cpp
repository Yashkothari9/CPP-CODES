#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int ans;
        if(n==1)
        {
            ans=0;
        }
        else if(n==2)
        {
            ans=m;
        }
        else if(n==3)
        {
            int c;
            if(m%2==0)
            {
                c=m/2;
                ans=c+c;
            }
            else
            {
                ans=m;
            }
        }
        else if(n==4)
        {
            int c;
            if(m%2==0)
            {
                c=m/2;
                ans=2*(c)+c;
            }
            else
            {
                c=m/2;
                ans=c +2*(c+1);
            }
        }
        else if(n>4)
        {
            int c;
            if(m%2==0)
            {
                c=m/2;
                ans=2*(c)+2*(c);
            }
            else
            {
                c=m/2;
                ans=2*c +2*(c+1);
            }

        }
        cout<<ans<<"\n";
    }
    return 0;
}
