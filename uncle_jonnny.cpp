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
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        int temp=a[k-1];
        sort(a,a+n);
        int x;
        for(int i=0;i<n;i++)
        {
            if(a[i]==temp)
            {
                x=i+1;
                break;
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}
