#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >PascalPth;
void Print(vector<vector<pair<int,int> > > Pascal)
{
    for(int i=0;i<Pascal.size();i++)
    {
        for(int j=0;j<Pascal[i].size();j++)
        {
            cout<<Pascal[i][j].first<<" ";
        }cout<<"\n";
    }
}
vector<vector<pair<int,int> > > FormPascalTriangle(int n)
{cout<<"here"<<endl;
    vector<vector<pair<int,int> > > PascalTriangle(n);
    for(int i=0;i<n;i++)
    {cout<<"here"<<i<<"------->"<<endl;
        for(int j=0;j<=i;j++)
        {cout<<"here"<<j<<endl;
            if(i==0||j==0||i==j)
            {
                PascalTriangle[i].push_back(make_pair(1,0));
            }
            else
            {
                int x=PascalTriangle[i-1][j-1].first+PascalTriangle[i-1][j].first;
                PascalTriangle[i].push_back(make_pair(x,0));
            }
        }cout<<"\n";
    }
    Print(PascalTriangle);
    return PascalTriangle;
}

int PascalPath(int i,int j,int sum,vector<vector<pair<int,int> > > formTriangle)
{
    if(i<0||j<0||j>i||formTriangle[i][j].second==1||sum-formTriangle[i][j].first<0)
    {
        return 0;
    }
    else if(sum-formTriangle[i][j].first>0)
    {
        formTriangle[i][j].second=1;
        PascalPath(i-1,j-1,sum-formTriangle[i][j].first,formTriangle);
        PascalPath(i-1,j,sum-formTriangle[i][j].first,formTriangle);
        PascalPath(i,j-1,sum-formTriangle[i][j].first,formTriangle);
        PascalPath(i,j+1,sum-formTriangle[i][j].first,formTriangle);
        PascalPath(i+1,j,sum-formTriangle[i][j].first,formTriangle);
        PascalPath(i+1,j+1,sum-formTriangle[i][j].first,formTriangle);
    }
    else if(sum-formTriangle[i][j].first==0)
    {
       sum=sum-formTriangle[i][j].first;
       PascalPth.push_back(make_pair(i,j));
       cout<<i<<" "<<j<<"\n";
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
        cout<<"got n\n";
        vector<vector<pair<int,int> > > formTriangle;
        cout<<"forming triangles"<<endl;
        formTriangle=FormPascalTriangle(n);
        cout<<"formed\n";
        int x=PascalPath(0,0,n,formTriangle);
        cout<<"path= "<<x<<endl;
        if(x==1)
        {cout<<"here"<<endl;
            for(int i=0;i<PascalPth.size();i++)
            {
                cout<<PascalPth[i].first<<" "<<PascalPth[i].second<<endl;
            }
        }
        else
        {
            cout<<"no path possible"<<endl;
        }
    }
    return 0;
}
