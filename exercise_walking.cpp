#include<bits/stdc++.h>
using namespace std;
long long int mod(long long int a,long long b)
{
    if(a>=b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int x,x1,x2;
        long long int y,y1,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        long long int left,right,up,down;
        left=mod(x,x1);
        right=mod(x,x2);
        down=mod(y,y1);
        up=mod(y,y2);
        cout<<"left ="<<left<<",right ="<<right<<",up ="<<up<<",down ="<<down;
        int flag=0;
        if(a-2*b>left )
        {
            //cout<<a-2*b<<">"<<left<<"left\n";
            flag=1;
        }
        else if(b-2*a>right)
        {
            //cout<<b-2*a<<">"<<right<<"right\n";
            flag=1;
        }
        else if(c-2*d>down)
        {
            //cout<<c-2*d<<">"<<down<<"down\n";
            flag=1;
        }
        else if(d-2*a>up)
        {
            //
            cout<<d-2*a<<">"<<up<<"up\n";
            flag=1;
        }
        else if(left==0 && right==0)
        {
            if(a>0 || b>0)
            {
                flag=1;
            }
        }
        else if(up==0 && down==0)
        {
            if(c>0 || d>0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
