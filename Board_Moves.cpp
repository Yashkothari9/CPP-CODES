#include<bits/stdc++.h>
using namespace std;
long long int x(int i,int j,vector<vector<int> > vec)
{
    if(i<0 || j<0 || i>=vec.size()||j>=vec[0].size())
    {
        return 0;
    }
    else if(vec[i][j]==0)
    {
        return 0;
    }
    else if(vec[i][j]==-1)
    {
        vec[i][j]=0;
        return 1+x(i-1,j-1,vec)+x(i-1,j,vec)+x(i-1,j+1,vec)+x(i,j+1,vec)+x(i,j-1,vec)+x(i+1,j-1,vec)+x(i+1,j,vec)+x(i+1,j+1,vec);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
         vector<vector<int> > vec(n);

        for (int i = 0; i < n; i++) {
        int col;
        col = n;
        vec[i] = vector<int>(col);
        for (int j = 0; j < col; j++)
            vec[i][j] = -1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<vec[i][j]<<" ";
        }cout<<"\n";
    }
    int i=n/2;
    int j=n/2;
    vec[i][j]=n*n;
    long long int moves=0;
        if(n>1)
        {
          moves=x(i,j,vec);
        }
        else
        {
            moves=0;
        }
        cout<<moves<<"\n";
    }
    return 0;
}
