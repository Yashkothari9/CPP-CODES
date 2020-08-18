
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int Case=0;Case<t;Case++)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            cin>>a[i][j];
            }
        }
        int sum_dig=0,rep_col=0,rep_rows=0;
        for(int i=0;i<n;i++)
        {
            sum_dig+=a[i][i];
        }
        int co[101];
        for(int i=0;i<n;i++)
        {
            co[101]={0};
            for(int j=0;j<n;j++)
            {
                co[a[i][j]]++;
                if(co[a[i][j]]>=2)
                {
                    rep_rows++;
                    cout<<"rows having similar ele"<<j+1<<"\n";
                    break;
                }
           }
           cout<<"elements in each rows\n";
            for(int k=0;k<100;k++)
            {
                cout<<co[k]<<" ";
            }cout<<"\n";
        }
        for(int j=0;j<n;j++)
        {
            co[101]={0};
            for(int i=0;i<n;i++)
            {
                co[a[i][j]]++;
                if(co[a[i][j]]>=2)
                {
                    rep_col++;
                    cout<<"coloums having similar ele"<<i+1<<"\n";
                    break;
                }
            }
            cout<<"elements in each coloumn\n";
            for(int k=0;k<100;k++)
            {
                cout<<co[k]<<" ";
            }cout<<"\n";
        }
        cout<<"Case #"<<Case+1<<": "<<sum_dig<<" "<<rep_rows<<" "<<rep_col<<"\n";

    }
    return 0;
}
