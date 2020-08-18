#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V,E;
    cout<<"enter no.of vertices and no. of edges tou want to enter\n";
    cin>>V>>E;
    vector<int> graph[V];
    int v,u;
    for(int i=0;i<E;i++)
    {
        cin>>u>>v;
        graph[u-1].push_back(v-1);
        graph[v-1].push_back(u-1);
    }
    /*for(int i=0;i<V;i++)
    {
        cout<<i+1<<"->";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]+1 <<"->";
        }cout<<"\n";
    }*/
    int color[V]={-1};//here are the corresponding color which we would color in the color in the graph & there are in total four colours which we would use to color different vertex
    color[0]=0;
    int flag=0;
    for(int i=1;i<V;i++)
    {
        int ffl=0;
        int k[4]={-2};
        for(int j=0;j<graph[i].size();j++)
        {
            if(color[graph[i][j]]>=0)
            {
                k[graph[i][j]]=-1;
            }
        }

        for(int l=0;l<4;l++)
        {
            if(k[l]==-2)
            {
                color[i]=l;
                ffl=1;
                break;
            }
            else
            {
                continue;
            }
        }
        if(ffl==1)
        {
            continue;
        }
        else
        {
            cout<<i<<"\n";
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Unable to color uniquely with all unique color";
    }
    else
    {
        for(int i=0;i<V;i++)
        {
            cout<<i+1<<"has color"<<color[i]<<"\n";
        }
    }
    return 0;

}
