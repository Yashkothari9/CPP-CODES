#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long int b[n];
        for(int i=0;i<n;i++)
        {long int counti=1;
         long int x=i+1;
         long int j=i;

         while(x!=a[j])
         {//cout<<"x:"<<x<<"j:"<<j<<"\n";
          j=a[j]-1;
          counti++;
         }
         //cout<<"count:"<<counti<<"\n";
            b[i]=counti;
        }
         for(int i=0;i<n;i++)
         {
         cout<<b[i]<<" ";
         }cout<<"\n";
    }
    return 0;
}
