#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
         char f[n][m];
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 cin>>f[i][j];
             }
         }
         int i=0;
         int cost=0;
         while(i<n)
         {
             int j=0;
             while(j<m)
             {
                 if(f[i][j]=='.')
                 {
                     if(f[i][j+1]=='.' &&j+1<m)
                     {
                         if(2*x>=y)
                         {
                             cost+=y;
                         }
                         else
                         {
                             cost+=2*x;
                         }
                         j+=2;
                     }
                     else
                     {
                         cost+=x;
                         j++;
                     }
                 }
                 else
                 {
                     j++;
                 }
             }
             i++;
         }
         cout<<cost<<"\n";
    }
    return 0;
}
