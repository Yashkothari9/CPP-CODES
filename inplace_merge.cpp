#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        int n;
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        int h=0;// for array a
        int g=0;// for array b
        while(h<m)
        {
            if(a[h]>=b[g])
            {
                int temp=a[m-1];
                for(int i=m-1;i>h;i--)
                {
                    a[i]=a[i-1];
                }
                 a[h]=b[g];
                for(int j=g;j<n-1;j++)
                {
                    b[j]=b[j+1];
                }
                int l=n-1;
                for(int k=g+1;k<n-1;k++)
                {
                    if(temp<b[0])
                    {
                        l=0;
                        //break;
                    }
                    if(temp<b[k] && temp>b[k-1])
                    {
                        l=k;
                        break;
                    }
                }
                if(l==n-1)
                {
                    b[n-1]=temp;
                }
                else
                {
                    for(int i=n-1;i>l;i--)
                    {
                        b[i]=b[i-1];
                    }
                     b[l]=temp;
                }
            }
            h++;

        }
        for(int i=0;i<m;i++)
        {
            cout<<a[i]<<" ";
        }cout<<"\n";
        for(int j=0;j<n;j++)
        {
            cout<<b[j]<<" ";
        }cout<<"\n";
    }
    return 0;
}

