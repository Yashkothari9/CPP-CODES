#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count1=0,count2=0,count0=0;
        for(int k=0;k<n;k++)
        {
            if(a[k]==0)
            {
                count0++;
            }
            if(a[k]==1)
            {
                count1++;
            }
            if(a[k]==2)
            {
                count2++;
            }
        }
        int b[n];
        int i=0;
        while(count0--)
        {
            b[i++]=0;
        }
        while(count1--)
        {
            b[i++]=1;
        }
        while(count2--)
        {
            b[i++]=2;
        }
        for(int k=0;k<n;k++)
        {
            cout<<b[k]<<" ";
        }
    }
    return 0;
}
