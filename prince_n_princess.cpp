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
        int prince[n];
        int princes[n][2];
        for(int i=0;i<n;i++)
        {
            princes[i][1]=-1;
            prince[i]=-1;
        }
        vector<int> a[n];
        int k;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            princes[i][0]=k;
            int x;
            while(k--)
            {
                cin>>x;
                a[i].push_back(x);
            }
            sort(a[i].begin(),a[i].end());
        }
        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<princes[i][0];j++)
            {
                if(prince[a[i][j]-1]==-1)
                {
                    princes[i][1]=prince[a[i][j]-1];
                    prince[a[i][j]-1]=i;
                    flag=1;
                    break;
                }
            }
        }
        int prn=-1,prncs=-1;
        for(int i=0;i<n;i++)
        {
            if(prince[i]==-1)
            {
                prn=i;
            }
            if(princes[i][1]==-1)
            {
                prncs=i;
            }
            if(prn!=-1 && prncs!=-1)
            {
                break;
            }
        }
        if(prn==-1 || prncs==-1)
        {
            cout<<"OPTIMAL\n";
        }
        else
        {
            cout<<"IMPROVE\n";
            cout<<prncs+1<<" "<<prn+1<<"\n";
        }
    }
    return 0;
}
