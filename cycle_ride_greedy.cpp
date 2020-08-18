#include<bits/stdc++.h>
using namespace std;
int min(int *a,int n)
{
    int min=0;
    int mi=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<mi)
        {
            min=i;
        }
    }
    return min;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int *a=new int[n];
        int *b=new int[n];
        int *c=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        int score=a[d-1]+b[0];
        int place=1;
       for(int i=0;i<d;i++)
       {
           if(a[i]>score)
           {
               place++;
           }
           else
           {
               int x=min(b,n);
             if((a[i]+b[x])>score)
             {
                 b[x]=-1;
                 place++;
             }
             else
             {
                 continue;
             }
           }
       }
       cout<<place<<"\n";
    }
    return 0;
}
