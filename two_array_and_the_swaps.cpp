#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
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
        for(int i=0;i<k;i++)
        {
            if(a[i]<b[n-1-i])
            {
                a[i]=b[n-i-1];
            }
            else
            {
                break;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}
