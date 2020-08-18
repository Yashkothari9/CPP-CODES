#include<bits/stdc++.h>
using namespace std;
int check_pali(string s)
{
    int ch[27]={0};
    for(int i=0;i<s.size();i++)
    {
        ch[s[i]-97]++;
    }
    if(s.size()%2==0)
    {
        for(int i=0;i<s.size();i++)
        {
            if(ch[s[i]-97]%2!=0)
            {
                return 0;
            }
            else
            {
                continue;
            }
        }
        //cout<<s;
        return 1;
    }
    else
    {int counto=0;
        for(int i=0;i<s.size();i++)
        {
            if(ch[s[i]-97]%2!=0)
            {
                counto++;
                if(counto>1)
                {
                    return 0;
                }
            }
        }
        return 1;

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
     cin>>n;
     vector<string> s;
     int countu=0;
     for(int i=0;i<n;i++)
     {
         string f;
         cin>>f;
         s.push_back(f);
     }
     for(int i=0;i<n-1;i++)
     {
         for(int j=i+1;j<n;j++)
         {string x("");//=s[i];
            x=s[i]+s[j];//x=x;
           // cout<<x<<"\n";
             int p=check_pali(x);
             if(p==1)countu++;
             else
                continue;
         }
     }
     cout<<countu<<"\n";
    }
    return 0;
}
