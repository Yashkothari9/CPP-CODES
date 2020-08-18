#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<int>minus;
        vector<int>plus;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                plus.push_back(i);
            }
            else if(a[i]==-1)
            {
                minus.push_back(i);
            }
        }
        int flag=0;
        if(a[0]!=b[0])
        {
            flag=1;
        }
        if(flag==0)
        {
            for(int i=1;i<n;i++)
            {
                if(a[i]!=b[i])
                {
                    if(a[i]<b[i])
                    {   int flg=0;
                        if(plus.size()>0)
                        {
                        if(plus[0]<i )
                        {
                            continue;
                        }
                        else
                        {
                            flag=1;
                            break;
                        }
                        }
                        else
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(a[i]>b[i])
                    {
                        int flg=0;
                        if(minus.size()>0)
                        {
                        if(minus[0]<i )
                        {
                            continue;
                        }
                        else
                        {
                            flag=1;
                            break;
                        }
                        }
                        else
                        {
                            flag=1;
                            break;
                        }
                    }
                }
            }
        }
        if(flag==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
