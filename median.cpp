#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k;
        //vector <int>a;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int counti=0;
        for(int i=(n/2);i<n;i++)
        {
            if(a[i]<=k)
          {
              counti+=(k-a[i]);
          }
        }
        cout<<counti<<"\n";

    }
    return 0;

}
