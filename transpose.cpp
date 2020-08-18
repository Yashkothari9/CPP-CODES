#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[m][n];
        int b[n][m];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }

        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                b[j][i]=a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<"\n";
        }

    }
    return 0;
}
