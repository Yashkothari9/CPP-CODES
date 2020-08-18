#include<bits/stdc++.h>
using namespace std;
int dis(int x1,int y1,int x2,int y2)
{
    int d=sqrt(pow((x1-x2),2)+pow(y1-y2),2);
    return d;
}
int main()
{
    int n,m,x;
    cin>>n>>m>>x;
    char key[n][m];
    vector<pair<int,int>> shift;
    vector<pair<int,int>> alpha[26];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>key[i][j];
            if(islower(key[i][j]))
            {a[key[i][j]-97]++;
            alpha[key[i][j]-97].push_back(make_pair(i,j));
            }
            else if(key[i][j]=='S')
            {
             shift.push_back(make_pair(i,j));
            }
       }
    }
    int q;
    cin>>q;
    string s;
    cin>>s;
    int count=0;
    int flag=0;
    for(int i=0;i<q;i++)
    {
        if(islower(s[i]))
        {
            if(alpha[s[i]-97].size()>0)
            {
                continue;
            }
            else
            {
                flag=1;
                break;
            }
        }
        else
        {
            char x=s[i];
            if(alpha[tolower(x)-97].size()>0)
            {
              for(int l=0;l<alpha[tolower(x)-97].size();l++)
              {int flg=0;
                  for(int j=0;j<shift.size();j++)
                  {
                      if(dis(alpha[tolower(x)-97][l].first,alpha[tolower(x)-97][l].second,shift[j].first,shift[j].second)<=x)
                      {
                         flg=1;
                         break;
                      }
                      else
                      {
                          continue;
                      }
                  }
                  if(flg==1)
                  {
                      break;
                  }
              }
            }
            else
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<count<<"\n";
    }
    return 0;
}
