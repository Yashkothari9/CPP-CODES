#include<bits/stdc++.h>
using namespace std ;
int mod(int a,int b)
{
    if(a-b>0)
    {
        return a-b;
    }
    return b-a;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int c[n][m];
    int t=n,u=m,v=k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i]*b[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<c[i][j]<<" ";
        }cout<<"\n";
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=mod(n,k);j++)
        {int flg=0,sz=0;
            for(int l=j;l<j+k;l++)
            {
                if(c[i][l]==1)
                {
                    sz++;
                   continue;
                }
                else
                {
                    break;
                }
            }
            if(sz==k)
            {
                count++;
            }
        }
    }
    if(n-k>0)
    {
    for(int i=0;i<m;i++)
    {

        for(int j=0;j<=mod(n,k);j++)
        {int flg=0,sz=0;
            for(int l=j;l<j+k;l++)
            {
                if(c[l][i]==1)
                {
                    sz++;
                   continue;
                }
                else
                {
                    break;
                }
            }
            if(sz==k)
            {
                count++;
            }
        }
    }
    }
   // int t=n,u=m,v=k;
    //cout<<n-k<<"\n";

    int counti=0;
    for(int i=0;i<mod(t,v);i++)
    {//cout<<"hi\n";
        for(int j=0;j<mod(u,v);j++)
        {int flag=1;
         int sz=0;
            for(int l=i;l<i+v;l++)
            {
                for(int p=j;p<j+v;p++)
                {
                 //   cout<<c[i][j]<<" ";
                    if(c[i][j]==1)
                    {
                        sz++;
                        continue;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
              //  cout<<"\n";
                if(flag==0)
                {
                    break;
                }
                else
                {
                    if(sz==v)
                    {
                        counti++;
                    }
                }
            }
        }
    }
    cout<<count<<" "<<counti<<" "<<count+counti<<"\n";
    return 0;
}
