#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int i=n-1;
    while(k>0 &&i>=0)
    {
        if(a[i]<0)
        {
            a[i]=-(a[i]);
            //cout<<a[i]<<"\n";
            k--;
        }i--;
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<"\n";
    return 0;
}
