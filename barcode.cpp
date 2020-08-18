#include<n=bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x,y;
    cin>>n>>m>>x>>y;
    char ch[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ch[i][j];
        }
    }
    vector<pair<int,int>> marble_count;
    int black,white;
    for(int i=0;i<m;i++)
    {
        white=0;
        black=0;
        for(int j=0;j<n;j++)
        {
            if(ch[j][i]=='.')
            {
                white++;
            }
            else if(ch[j][i]=='#')
            {
                black++;
            }
        }
        marble_count.push_back(make_pair(white,black));

    }

    return 0;
}
