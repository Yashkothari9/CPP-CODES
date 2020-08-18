#include<bits/stdc++.h>
using namespace std;
struct str{
  string s;
  char start;
  char end;
  int tot_ast=0;

};
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }

    return -1;
}
int is_ending_same(string s1,string s2)
{
    int n=s2.size();
    int sub=s1.size();
    for(int i=n-1,j=sub-1;i>=n-sub,j>=0;i--,j--)
    {
        if(s2[i]==s1[j])
        {
            continue;
        }
        else
        {
            return -1;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    for(int Case=0;Case<t;Case++)
    {
        int n;
        cin>>n;
        str p[n];
        string d;
        for(int i=0;i<n;i++)
        {
            cin>>d;
            p[i].s=d;
            p[i].start=p[i].s[0];
            p[i].end=p[i].s[d.size()-1];
            for(int j=0;j<p[i].s.size();j++)
            {
                if(p[i].s[j]=='*')
                {
                 p[i].tot_ast++;
                }
            }
        }

       /* int flag=0,begin_idx,end_idx,end_len=INT_MAX,begin_len=INT_MIN;
        char begin='a',finish='a';
        for(int i=0;i<n;i++)
        {
            if(begin=='a'||begin=='*')
            {
                if((p[i].s[0]>=97 && p[i].s[0]<=122)||(p[i].s[0]=='*'))
                {
                    begin=p[i].s[0];
                }
            }
            else
            {
                if(p[i].s[0]=='*')
                {
                    continue;
                }
                else
                {
                    if(begin==p[i].s[0])
                    {
                        int j=0;
                        while(p[i].s[j]!='*')
                        {
                            j++;
                        }
                        if(j>begin_len)
                        {
                            begin_idx=i;
                        }
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(finish=='a'||finish=='*')
            {
                if((p[i].end>=97 && p[i].end<=122)||(p[i].end=='*'))
                {
                    finish=p[i].end;
                }
            }
            else
            {
                if(p[i].end=='*')
                {
                    continue;
                }
                else
                {
                    if(finish==p[i].end)
                    {
                        int j=p[i].s.size()-1;
                        while(p[i].s[j]!='*')
                        {
                            j--;
                        }
                        if(j<end_len)
                        {
                            end_len=j;
                            end_idx=i;
                        }
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        string ans;
            if(flag==1)
            {
                ans="*";
            }
            else
            {
             if(begin=='*')
             {
                 if(finish=='*')
                 {
                  for(int i=0;i<n;i++)
                  {
                      for(int j=0;j<p[i].s.size();j++)
                      {
                          if(p[i].s[j]!='*')
                        {
                            ans=ans+p[i].s[j];
                        }
                      }
                  }
                 }
                 else
                 {
                    if(p[end_idx].tot_ast==1)
                    {string ex=substr(1,p[end_idx].s.size()-1));
                        for(int i=0;i<n;i++)
                        {
                            if(isSubstring(1,p[i].s.size()-1),ex))
                            {
                                continue;
                            }
                            else
                            {
                                flag=1;
                                break;
                            }
                        }
                        ans=ex;
                    }

                 }
             }

            }*/
            int biggest=0,idx=-1;
            for(int i=0;i<n;i++)
            {
                if(p[i].s.size()>biggest)
                {
                    biggest=p[i].s.size();
                    idx=i;
                }
            }
            int flag=0;
            string mp=p[idx].s;
            string ex=mp.substr(1,mp.size()-1);
           /// cout<<"the biggest string to compare others from- "<<ex<<"\n";
            for(int i=0;i<n;i++)
            { string en=p[i].s;
                if(i==idx)
                {
                    continue;
                }
                else if(isSubstring(en.substr(1,en.size()-1),ex)!=-1 && is_ending_same(en.substr(1,en.size()-1),ex)!=-1)
                   {
                       continue;
                   }
                else
                {
                    //cout<<"not matching in -"<<en.substr(1,en.size()-1)<<"\n";
                    flag=1;
                    break;
                }
            }
            string ans;
            if(flag==1)
            {
                ans="*";
            }
            else
            {

                ans=ex;
            }
            cout<<"Case #"<<Case+1<<": "<<ans<<"\n";
            //cout<<ans<<"\n";
    }
    return 0;
}
