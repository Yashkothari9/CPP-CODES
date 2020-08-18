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
        long long int *a=new long long int[n];
        long long int *b=new long long int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                sum+=b[i];
            }
            else
            {
                sum+=a[i];
            }
        }
        cout<<sum<<"\n";

    }
    return 0;
}
