#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >PascalPath;
vector<vector<pair<int,int> > > FormPascalTriangle(int n)
{
    int siz=n
    vector<vector<pair<int,int> > > PascalTriangle(siz);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==0||j==0||i==j)
            {
                PascalTriangle[i].push_back(make_pair(1,0));
            }
            else
            {
                int x=PascalTriangle[i-1][j-1]+PascalTriangle[i-1][j];
                PascalTriangle[i].push_back(make_pair(x,0);
            }
        }
    }
    return PascalTriangle;
}
void Print(vector<vector<pair<int,int> > > Pascal)
{
    for(int i=0;i<Pascal.size();i++)
    {
        for(int j=0;j<Pascal[i].size();j++)
        {
            cout<<Pascal[i][j]<<" ";
        }cout<<"\n";
    }
}
int PascalPath(int i,int j,int sum,vector<vector<pair<int,int> > > formTriangle)
{
    if(i<0||j<0||j>i||formTriangle[i][j].second==1||sum-formTriangle[i][j].first<0)
    {
        return 0;
    }
    else if(sum-formTriangle[i][j].first>0)
    {
        formTriangle[i].second=1;
        PascalPath(i-1,j-1,sum-formTriangle[i][j].first,formTriangle);
        PascalPath(i-1,j,sum-formTriangle[i][j].first,formTriangle);
        PascalPath(i,j-1,sum-formTriangle[i][j].first,formTriangle);
        PascalPath(i,j+1,sum-formTriangle[i][j].first,formTriangle);
        PascalPath(i+1,j,sum-formTriangle[i][j].first,formTriangle);
        PascalPath(i+1,j+1,sum-formTriangle[i][j].first,formTriangle);
    }
    else if(sum-formTriangle[i][j].first==0)
    {
        push_back(make_pair(i,j));
        return 1;
    }

}
int main()
{
    int t;
    cin>>t;
    for(int Case=0;Case<t;Case++)
    {
        int n;
        cin>>n;
        vector<vector<pair<int,int> > >formTriangle;
        formTriangle=FormPascalTriangle(n);
        int x=PascalPath(0,0,n,formTriangle);
        if(x==1)
        {
            for(int i=0;i<PascalPath.size();i++)
            {
                cout<<PascalPath[i][j].first<<" "<<PascalPath[i][j].second<<"\n";
            }
        }
        else
        {
            cout<<"no path possible\n";
        }
    }
    return 0;
}
