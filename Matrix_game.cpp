#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        int row[n];
        int cols[m];
        for(int i=0;i<n;i++)
        {
            row[i]=0;
        }
        for(int j=0;j<m;j++)
        {
            cols[j]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              if(arr[i][j]==1)
                {
                  row[i]=1;
                  cols[j]=1;
                }
            }
        }
        int cntcol=0,cntrow=0;
        
        for(int i=0;i<n;i++)
            if(row[i]==0)   cntrow++;
        
        for(int j=0;j<m;j++)
            if(cols[j]==0)  cntcol++;
 
        int mini=min(cntrow,cntcol);
        
        if(mini%2!=0)   cout<<"Ashish"<<"\n";
        else    cout<<"Vivek"<<"\n";
        
    }
    return 0;
}
