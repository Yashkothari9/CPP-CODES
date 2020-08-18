#include<bits/stdc++.h>
using namespace std;
long long int mod(long long int a,long long int b)
{
    if(a>b)
    {
        return a-b;
    }
    return b-a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int p,q,r,a,b,c;
        cin>>p>>q>>r;
        cin>>a>>b>>c;
        int first,second,third;
        long long int f=a-p;
        long long int s=b-q;
        long long int t=c-r;
        int similar=0;
        int ans=0;
        if(f==s && t==f)
        {
            if(f==0)
            {
                ans=0;
            }
            else{
                ans=1;
            }
        }
        else if(s==t && t!=f)
        {
            if(f==0)
            {
                ans=1;
            }
            else if(t==0)
            {
                ans=1;
            }
            else
            {
                ans=2;
            }
        }
        else if(f==t && t!=s)
        {
            if(s==0)
            {
                ans=1;
            }
            else if(t==0)
            {
                ans=1;
            }
            else
            {
                ans=2;
            }
        }
        else if(f==s && t!=s)
        {
            if(s==0)
            {
                ans=1;
            }
            else if(t==0)
            {
                ans=1;
            }
            else
            {
                ans=2;
            }
        }
        else if(f!=s && s!=t)
        {
            if(f==0 ||s==0 ||t==0)
            {
                ans=2;
            }
            else
            {
                ans=3;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
