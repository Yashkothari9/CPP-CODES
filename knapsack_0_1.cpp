#include<bits/stdc++.h>
using namespace std;
 struct knapsack{
int w;
float p;
string ch;
};
int calculate(int w[],int v[],int n,int W)
{
    int m[n+1][W+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
        if(i==0||j==0)
            {
            m[i][j]=0;

            }
        else if(w[i-1]<=j)
            {
           m[i][j]=max((v[i-1]+m[i-1][j-w[i-1]]),m[i-1][j]) ;
            }
        else
            {
            m[i][j]=m[i-1][j];
             }
        }
    }
    int ans=m[n][W];
    int wi=W;
    int tot_w=0;
    for(int i=n;i>0&&ans>=0;i--)
    {
        if(ans==m[i-1][wi])
        {
            continue;
        }
        else
        {
            tot_w+=w[i-1];
            wi=wi-w[i-1];
            ans=ans-v[i-1];

        }
    }
    cout<<tot_w;
    return m[n][W];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int we;
        cin>>we;
        int n;
        cin>>n;
        knapsack a[n];
        int v[n],w[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i].ch>>a[i].w>>a[i].p;
        }
        for(int j=0;j<n;++j)
        {
          v[j]=a[j].p;
        }
           for(int j=0;j<n;++j)
        {
            w[j]=a[j].w;
        }
        int op=calculate(w,v,n,we);
        printf(" %d",op);

}
    return 0;
}
