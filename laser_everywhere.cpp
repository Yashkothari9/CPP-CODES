#include<bits/stdc++.h>
using namespace std;
struct coordinate
{
    long long int x,y;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        coordinate a[n+1];
        for(int i=1;i<=n;i++)
        {
            a[i].x=i;
            cin>>a[i].y;
        }
        long long int x1,x2,yi;
        while(q--)
        {
        cin>>x1>>x2>>yi;
        int count =0;
       // cout<<"x1-"<<x1<<"x2-"<<x2<<"y-"<<yi<<"\n";
        for(int i=x1;i<x2;i++)
        {
          //  cout<<a[i].x<<" "<<a[i].y<<"\n";
            if(a[i].y<=yi && a[i+1].y>=yi)
            {
                count++;
            }
            else if(a[i].y>=yi && a[i+1].y<=yi)
            {
                count++;
            }
            else
            {
                continue;
            }

        }
        cout<<count<<"\n";
       // cout<<"\n";
        }
    }
    return 0;
}
