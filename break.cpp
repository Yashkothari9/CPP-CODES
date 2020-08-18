#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s;
    cin>>t>>s;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        sort(a,a+n);
        sort(b,b+n);
        int flag=0;
        for(int i=0;i<n;i++)
        {int count=0;
            for(int j=0;j<n;j++)
            {
                if(a[i]<b[j])
                {
                    continue;
                }
                else
                {
                    count++;
                }
            }
            if(count==n || count>1)
            {
                flag=1;
                break;
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
        // if(b[n-1]>a[0])
        // {
        //     cout<<"YES\n";
        // }
        // else
        // {
        //     cout<<"NO\n";
        // }

    }
    return 0;
}
