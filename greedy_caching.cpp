#include<bits/stdc++.h>
using namespace std;
int check(vector <int>ar,int a[],int n,int index)
{
    int ans=-1,y;
    int far=index;
    for(int i=0;i<ar.size();i++)
    {int j;
        for( j=index;j<n;j++)
        {
            if(a[j]==ar[i])
            {
                if(far<j)
                {
                far=j;
                ans=i;
                }
                break;
            }

        }
            if (j == n)
            return i;
    }
    if(ans==-1){return 0;}
    return ans;
}
void greedy_caching(int a[],int k,int n)
{
    int hit=0;
    int miss=0;
    vector <int> ar;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int p=0;p<ar.size();p++)
        {
            if(ar[p]==a[i])
                {hit++;flag=1;}
        }

        if(ar.size()<k )
        {
            if(flag==0)
            {
            ar.push_back(a[i]);
            }
        }
        else if(flag==0)
        {
            int u=check(ar,a,n,i);
            ar[u]=a[i];
        }
      /* for(int i=0;i<k;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    */
    }
    miss=n-hit;
    cout<<miss<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>k>>n;;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        greedy_caching(a,k,n);
    }
    return 0;
}

