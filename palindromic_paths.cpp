#include<bits/stdc++.h>
using namespace std;
void find_paths(vector<vector<int>> arr,vector<vector<int>>& paths,int i,int j,vector<int>& dif,int m,int n)
{
    if(i>arr.size()||j>arr[0].size())
    {
        return;
    }
    if(i==m && j==n)
    {
        paths.push_back(dif);
        dif.clear();
        return;
    }
    dif.push_back(arr[i][j]);
    find_paths(arr,paths,i+1,j,dif,m,n);
    find_paths(arr,paths,i,j+1,dif,m,n);
    dif.clear();
    return;
}
int Pali_dif(vector<int> cs)
{
    int count=0;
    int n=cs.size();
    for(int i=0;i<n/2;i++)
    {
        if(cs[i]!=cs[n-i-1])
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n);
    int d;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          cin>>d;
          arr[i].push_back(d);
        }
    }
    vector<vector<int>> paths;
    vector<int>dif_path;
    find_paths(arr,paths,0,0,dif_path,n,m);
     int count=0;
    for(int i=0;i<paths.size();i++)
    {
        count+=Pali_dif(paths[i]);
    }
    cout<<count<<"\n";
    }
    return 0;
}
