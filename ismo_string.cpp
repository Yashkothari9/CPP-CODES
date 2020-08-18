#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int m,n;
       cin>>n>>m;
       string s;
       cin>>s;
       for(int i=0;i<m;i++)
       {
           int a,b,len;
           cin>>a>>b>>len;
           string x=s.substr(a-1,len);
           string y=s.substr(b-1,len);
           int e[27];
           int flag=0;
           for(int i=0;i<27;i++)
           {
               e[i]=-1;
           }
           int f[27];

           for(int i=0;i<27;i++)
           {
               f[i]=-1;
           }
           for(int i=0;i<x.size();++i)
           {
               if(e[x[i]-97]==-1)
               {
               e[x[i]-97]=y[i]-97;
               }
               else
               {
                   if(e[x[i]-97]!=y[i]-97)
                   {
                       flag=1;
                       cout<<"NO\n";
                       break;
                   }
                   else
                   {
                        continue;
                   }
               }
           }
           if(flag==0)
           {
               for(int i=0;i<y.size();++i)
           {
               if(f[y[i]-97]==-1)
               {
               f[y[i]-97]=x[i]-97;
               }
               else
               {
                   if(f[y[i]-97]!=x[i]-97)
                   {
                       flag=1;
                       cout<<"NO\n";
                       break;
                   }
                   else
                   {
                        continue;
                   }
               }
           }
           }
           if(flag==0)
           {
               cout<<"YES\n";
           }

       }

    }
    return 0;
}
