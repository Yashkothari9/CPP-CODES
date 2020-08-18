#include<bits/stdc++.h>
using namespace std;
struct ma
{
    int idx;
    int c;
};
bool comp(ma a,ma b)
{
    return a.c<b.c;
}
bool compi(ma a,ma b)
{
    return a.c>b.c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n>1)
        {
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }max++;
        int mi[max];
        for(int i=0;i<max;i++)
        {
            mi[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            mi[a[i]]++;
        }
        int uniq=0,mx=0;
        sort(mi,mi+max);
        int large=mi[max-1];
        for(int i=0;i<max-1;i++)
        {
            if(mi[i]==1)
            {
                uniq++;
            }
            else if(mi[i]>1)
            {
                if(uniq<large)
                {
                    uniq++;
                }
                else
                {
                    break;
                }
            }
        }
        if(uniq>large)
        {
            ans=large;
        }
        else if(uniq==large)
        {
            ans=large;
        }
        else if(uniq<large)
        {
            if(large-1==uniq+1)
            {
                ans=large-1;
            }
            else
            {
                ans=uniq;
            }
        }
        }
        else
        {
            ans=0;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
