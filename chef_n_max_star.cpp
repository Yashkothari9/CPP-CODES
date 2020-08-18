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
        int *a=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int maxi=a[0];
        for(int i=1;i<n;i++)
        {
            if(maxi<a[i])
            {
                maxi=a[i];
            }
        }
        // cout<<"maximum element in array"<<maxi<<"\n";
        //map<int,int> m;
        int *b=new int[maxi];
        for(int i=0;i<maxi;i++)
        {
            b[i]=0;
        }
        int mx=0;
        for(int i=0;i<n;i++)
        {
          //  cout<<i<<"\n";
            if(b[a[i]]>0)
            {
                if(mx<b[a[i]])
                {
                    mx=b[a[i]];

                    //cout<<"maximum after "<<i<<"th operation is "<<mx<<"\n";
                }
            }

            for(int j=1;j<=sqrt(a[i]);j++)
             {
               if(a[i]%j==0)
               {
                if(a[i]/j==j)
                {
                 b[j]++;
                }
                else
                {
                 b[j]++;
                 int x=a[i]/j;
                 b[x]++;
                // cout<<"executing"<<i<<"\n";
                }
                }
            }
        }
        /*for(int i=0;i<maxi;i++)
        {
            cout<<b[i]<<" ";
        }cout<<"\n";
        */cout<<mx<<"\n";
    }
    return 0;
}
