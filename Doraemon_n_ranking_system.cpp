#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int ans=0;
        int i=0;
        if(n==1)
           {
               if(a[0]==1)
               {
                   ans=1+x;


               }
               else if(a[0]-1<x)
               {
                   x=x-(a[0]-1);
                   ans=(x+a[0]);


               }
               else if(a[0]-1>=x)
               {
                   ans=1+x;

               }
            }
        else
        {

        while(x>0 && i<n)
        {
           if(a[i]==1)
           {i++;
               continue;
           }
           else
           {//cout<<"hi\n";
               if(i==0)
               {//cout<<"hi1\n";
                   if((a[i]-1)<x)
                   {//cout<<"hi2\n";
                       x=x-(a[i]-1);
                       //cout<<"x-"<<x<<"\n";;
                   }
                   else
                   {//cout<<"hi3\n";
                       ans=x+1;
                      // cout<<"ans-"<<ans<<"x-"<<x<<"\n";
                       break;
                   }
               }
               else
               {//cout<<"hi4\n";
                   if((a[i]-a[i-1]-1)<=x)
                   {x=x-(a[i]-a[i-1]-1);
                   //cout<<"x-"<<x<<"\n";}
               }
                   else
                    {
                        ans=a[i]+x;
                        //cout<<"hi5\n";
                        //cout<<"ans-"<<ans<<"x-"<<x<<"\n";
                        break;}
               }
               i++;
           }
        }
        }
        if(x==0)
        cout<<a[i-1]<<"\n";
        else{
            if(ans==0)
            {cout<<a[i-1]+x<<"\n";}
            else
            {
                cout<<ans<<"\n";
            }
        }
    }
    return 0;
}
