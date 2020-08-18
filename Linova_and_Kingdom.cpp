#include<bits/stdc++.h>
using namespace std;
int kingdom
{
    int parent;
    vector<int> child;
    int type;
    int link;
}
int main()
{
    int n,k;
    cin>>n>>k;
    kingdom city[n+1];
    int u,v;
    vector<pair<int,int>> city[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>u>>v;
        city[u].push_back(v);
        city[v].push_back(u);
    }
    for(int i=0;i<n;i++)
    {

    }
    /*set<pair<int,int>> cities;
    for(int i=0;i<n-1;i++)
    {
      cin>>u>>v;
      if(u<v)
      {
          cities.insert(make_pair(u,v));
      }
      else
      {
          cities.insert(make_pair(v,u));
      }
    }
    for(i=1;i<=n;i++)
    {
        city[i].parent=0;
    }
   for(auto it=cities.begin(); it!=cities.end(); ++it)
    {
        //first is x, y is the second element
        if(it->first==1)
        {
            city[it->second].parent=1;
            city[it->first].child.push_back(it->second);
        }
        else
        {
            if(city[it->first].parent>0)
            {
                city[it->first].child.push_back(it->second);
                city[it->second].parent=it->first;
            }
            else if(city[it->second].parent>0)
            {
              city[it->second].child.push_back(it->first);
                city[it->first].parent=it->second;
            }
            else if(city[it->first].parent==0 && city[it->second]==0)
            {
                city[it->first].link=it->second;
                city[it->]
            }
        }*/
    }
    return 0;
}
