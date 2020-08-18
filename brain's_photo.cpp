#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]=='C'||mat[i][j]=='M'||mat[i][j]=='Y')
            {
                flag=1;
            }
        }
        if(flag==1)break;
    }
    if(flag==1)
    {
        cout<<"#Color"<<"\n";
    }
    else
    {
        cout<<"#Black&White\n";
    }
    return 0;
}
