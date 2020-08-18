#include<bits/stdc++.h>
using namespace std;
//#define long long int ll;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int *a=new long long int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int *b= new long long int[n];
        for(int i=0;i<n;i++)
       {
           b[i]=1;
       }
        int *c=new int[n];
        c[0]=0;
        for(int i=1;i<n;i++)
        {
            c[i]=-1;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;++j)
            {
                if(a[j]<=a[i])
                {
                    if(b[i]<=b[j]+1)
                    {
                    b[i]=b[j]+1;
                    c[i]=j;

                    }
                }
            }
        }
        int h=0;
        long long int maxi=0;
        for(int f=0;f<n;++f)
        {
            if(b[f]>maxi)
            {
                maxi=b[f];
                h=f;
            }
        }
for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<c[i]<<" ";
        }cout<<"\n";
        cout<<maxi<<"\n";
        vector<int> d;
        int x=h;
        d.push_back(x+1);
        while(x>0)
        {
            if(c[x]>=0)
            {
            d.push_back(c[x]+1);
            //cout<<c[h]<<" ";
            x=c[x];
            }
            else
            {
                break;
            }
        }
        sort(d.begin(),d.end());
        for(int i=0;i<d.size();i++)
        {
            cout<<d[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
