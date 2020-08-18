#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,q;
        cin>>n>>m>>q;
       // int a[n][m];
       int a[n];
       int b[m];

        for(int i=0;i<n;i++)
        {
           a[i]=0;
        }
        for(int j=0;j<m;j++)
        {
            b[j]=0;
        }
        for(int i=0;i<q;i++)
        {
            int x,y;
            cin>>x>>y;
            a[x-1]++;
            b[y-1]++;
        }
        int counti=0;
        int counte1=0;
        int counte2=0;
        int odd1=0;
        int odd2=0;

           for(int i=0;i<n;i++)
           {
               if(a[i]%2==0)counte1++;
               else
                odd1++;
           }
           for(int i=0;i<m;i++)
           {
               if(b[i]%2==0)counte2++;
               else
                odd2++;
           }

           counti=(counte1*odd2)+(counte2*odd1);
           cout<<counti<<"\n";
    }
    return 0;
}
