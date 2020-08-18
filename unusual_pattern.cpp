#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    int x=n;
    for(int i=0;i<n;i++)
    {
        if(i<n/2)
        {
            for(int j=i;j<n-i;j++)
            {
               a[j][i]=x;
            }
            x=x-2;
        }
        else if(i==n/2)
        {
            a[n/2][n/2]=1;
            x=x+2;
        }
        else if(i>n/2)
        {
            for(int j=n-i-1;j<i+1;j++)
            {
                a[j][i]=x;
            }
          x=x+2;
        }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          cout<<a[i][j]<<" ";
      }cout<<"\n";
    }
}
