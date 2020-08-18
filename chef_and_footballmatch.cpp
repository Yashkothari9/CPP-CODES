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
        int q;
        cin>>q;
        long long int b[n-1];
         for(int i=0;i<n-1;i++)
         {
             cin>>b[i];
         }
         for(int j=0;j<q;j++)
         {
            int a,w;
             cin>>a>>w;
             int c=abs(a-w);
            // cout<<c<<"\t";
             //int flag=0;
             if(c%2==0)
             {
                 cout<<"UNKNOWN"<<"\n";
                // flag=1;
             }
             else
             {
                 if(c==1){cout<<b[a-1]<<"\n";}
                    else{
                  int e=min(a,w);
                  int f=max(a,w);
                  long long int sum1=0,sum2=0;
                  for(int j=e-1;j<f-1;j+=2)
                  {
                      sum1+=b[j];
                  }
                   for(int j=e;j<f-1;j+=2)
                  {
                      sum2+=b[j];
                  }
                  long long int u=sum1-sum2;
                 cout<<u<<"\n";
                    }
             }


         }
        //cout<<"\n";
    }
    return 0;
}
