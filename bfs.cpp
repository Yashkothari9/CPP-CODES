#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        //n is no. of vertices and e is no. of  edges
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N] = {false};
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }

        bfs(0, adj, vis, N);
        cout<<endl;
    }
}
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
   vis[s]=1;
   queue<int> q;
   q.push(s);
   cout<<s<<" ";
   while(!q.empty())
   {
       int x=q.front();
       q.pop();
       for(int i=0;i<adj[x].size();i++)
       {
           int g;
           if(vis[adj[x][i]]==0)
            {
                g=adj[x][i];
                cout<<g<<" ";
                vis[g]=1;
                q.push(g);
            }

       }

   }
}
