#include<bits/stdc++.h>
using namespace std;
int check_A(int ch[][],int r,int c,string s.int sr,int sc)
{
if(s.size()<r)
{
    int k=0;
    int flag=0;
    for(int i=start;i<s.size();--i)
    {
        if(ch[i][sc]==s[k++])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
 return 1;
}
else
{
    return 0;
}
}
int check_E(int ch[][],int r,int c,string s.int sr,int sc)
{
if(s.size()<r-sr)
{
    int k=0;
    int flag=0;
    for(int i=start;i<s.size();++i)
    {
        if(ch[i][sc]==s[k++])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
 return 1;
}
else
{
    return 0;
}
}
int check_C(int ch[][],int r,int c,string s.int sr,int sc)
{
if(s.size()<c-sr)
{
    int k=0;
    int flag=0;
    for(int i=start;i<s.size();++i)
    {
        if(ch[sr][i]==s[k++])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
 return 1;
}
else
{
    return 0;
}
}

int check_G(int ch[][],int r,int c,string s.int sr,int sc)
{
if(s.size()<sc)
{
    int k=0;
    int flag=0;
    for(int i=start;i<s.size();++i)
    {
        if(ch[sr][i]==s[k++])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
 return 1;
}
else
{
    return 0;
}
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int r,c,w;
        cin>>r>>c>>w;
        char ch[c][w];
        for(int i=0;i<r;++i)
        {
            for(int j=0;j<c;++j)
            {
                cin>>ch[i][j];
            }
        }
        vector <string>words;
        for(int i=0;i<w;++i)
        {
            string f;
            cin>>f;
            words.push_back(f);
        }
        for(int k=0;k<w;++k)
        {
            for(int i=0;i<r;++j)
            {int flag=0;
                for(int j=0;j<c;++j)
                {

                }

            }

        }

    }
    return 0;
}
