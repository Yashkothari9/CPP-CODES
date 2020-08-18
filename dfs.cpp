    #include<bits/stdc++.h>
    using namespace std;

    vector<int> t_sort;
    void dfs(int n,vector<int> g[],bool vis[]);
    void dfs_util(int s, vector<int> g[], bool vis[]);
    int main()
    {
        int T;
        cin>>T;
        while(T--)
        {
            int N, E;
            cin>>N>>E;

            vector<int> g[N + 1];
            bool vis[N + 1];


        for(int i=0;i<=N;i++)
        {
            vis[i]=0;
        }
            for(int i=0;i<E;i++)
            {

                int u,v;
                cin>>u>>v;
                g[u].push_back(v);

            }

            dfs(N,g,vis);
            for(auto it = t_sort.begin() ; it != t_sort.end() ; ++it) cout << *it << " ";
            cout<<"\n";
        }
    }
    void dfs(int n,vector<int> g[],bool vis[])
    {
        for(int i = 1 ; i <= n ; i++)
        {

            if(vis[i]==0)
            {
               dfs_util(i,g,vis);
            }
        }
    }
    void dfs_util(int s,vector<int> g[], bool vis[])
    {

         vis[s]=1;

         cout<<s<<" ";

           for(int i=0;i<g[s].size();i++)
           {
               int h;
               if(vis[g[s][i]]==0)
                {
                    h=g[s][i];
                    dfs_util(h,g,vis);
                    t_sort.push_back(h);
                    cout<<g<<" ";
                     vis[h]=1;
                }
           }

    }
