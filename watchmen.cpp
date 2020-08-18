//DO USING O(N) OR O(N LogN SOLUTION)
#include<bits/stdc++.h>
using namespace std;
long long int mod(long long int x,long long int y)
{
    if(x>y)
    {
        return x-y;
    }
    return y-x;
}
long long int Manhattan_distance(pair<long long int,long long int> i,pair<long long int,long long int> j)
{
    return mod(i.first,j.first)+mod(i.second,j.second);
}
long long int daniel_distance(pair<long long int,long long int> i,pair<long long int,long long int> j)
{
    int x=mod(i.first,j.first);
    int y=mod(i.second,j.second);
    return sqrt(x*x+y*y);
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> dis;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        dis.push_back(make_pair(x,y));
    }
    int count;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(Manhattan_distance(dis[i],dis[j])==daniel_distance(dis[i],dis[j]))
            {
                count++;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}
