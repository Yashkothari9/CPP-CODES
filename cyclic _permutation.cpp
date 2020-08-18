#include<bits/stdc++.h>
using namespace std;
bool cyclic(vector<vector<int>> graph,vector<int> inDegree)
{
    queue<int> q;
    int num=graph.size();
    for(int i=0;i<inDegree.size();i++)
    {
        if(inDegree[i]==0)
        {
            q.push(i);
            num--;
        }
    }
    while(!q.empty())
    {
        int currNode=q.front();
        q.pop();
        for(int i=0;i<graph[currNode].size();i++)
        {
            int nextNode=graph[currNode][i];
            inDegree[nextNode]--;
            if(inDegree[nextNode]==0)
            {
                q.push(nextNode);
                num--;
            }
        }
    }
    if(num>0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool check_cyclic(vector<int> p)
{
    vector<int> inDegree(p.size(),0);
    vector<vector<int>> graph(p.size());
    int sma=p.size(),la=-1;
    for(int j=1;j<p.size();j++)
    {
          if(p[0]<p[j])
            {
                if(sma>j)
                {
                    sma=j;
                }
            }
    }
    if(sma!=p.size())
    {
        graph[0].push_back(sma);
        inDegree[sma]++;
    }
    for(int j=0;j<p.size()-1;j++)
    {
         if(p[p.size()-1]<p[j])
            {
                if(la<j)
                {
                    la=j;
                }
            }
    }
    if(la!=-1)
    {
        graph[p.size()-1].push_back(la);
        inDegree[la]++;
    }
    for(int i=1;i<p.size()-1;i++)
    {
        int large=-1,small=p.size();
        for(int j=0;j<i;j++)
        {
            if(p[i]<p[j])
            {
                if(large<j)
                {
                    large=j;
                }
            }

        }
        if(large!=-1)
        {
            graph[i].push_back(large);
            inDegree[large]++;
        }
        for(int j=i+1;j<p.size();j++)
        {
             if(p[i]<p[j])
            {
                if(small>j)
                {
                    small=j;
                }
            }
        }
        if(small!=p.size())
        {
            graph[i].push_back(small);
            inDegree[small]++;
        }
    }

    return cyclic(graph,inDegree);
}
int main()
{
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++)
    {
        p[i]=i+1;
    }
    vector<vector<int>> all_permu;
    do{
        all_permu.push_back(p);
        cout<<"hey\n";
    }while(next_permutation(p.begin(),p.end()));
    int k=0,count=0;
    for(int i=0;i<all_permu.size();i++)
    {
        for(int j=0;j<all_permu[i].size();i++)
        {
            cout<<all_permu[i][j]<<" ";
        }cout<<"\n";
        if(check_cyclic(all_permu[i]))
        {
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}
