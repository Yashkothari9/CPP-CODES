#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> c
        int a[100][100];
        string s;
        cin.ignore();
        getline(cin,s);
        int j=0;int k,q=1,r=1;
            for(k=1;k<s.length()-1;k++)
            {
              if(s[q]=='[')
              {
                  if(s[k]==',')
                  {
                      r=k;

                  int l;
                  string s3="";
                  for(l=q+1;l<=r-1;l++)
                  {
                      s3=s3+s[l];
                  }
               //   cout<<s3<<"\n";
                char m[s3.length()];
                for(int u=0;u<s3.length();u++)
                {
                    m[u]=s3[u];
                }
                  int h;
                  h=std::atoi(m);
                  //cout<<h<<"\n";
                  if(h!=0)
                  c.push_back(h);
                  q=r;
                  }
              }
              if(s[q]==',')
              {
                  if(s[k]==',')
                  {
                      r=k;

                  int l;
                  string s3="";
                  for(l=q+1;l<=r-1;l++)
                  {
                      s3=s3+s[l];
                  }
                 // cout<<s3<<"\n";
                 char m[s3.length()];
                for(int u=0;u<s3.length();u++)
                {
                    m[u]=s3[u];
                }
                  int h;
                  h=std::atoi(m);
                  //cout<<h<<"\n";
                  if(h!=0)
                  c.push_back(h);
                  q=r;
                  }
              }
              if(s[q]==',')
              {
                  if(s[k]==']')
                  {
                      r=k;

                  int l;
                  string s3="";
                  for(l=q+1;l<=r-1;l++)
                  {
                      s3=s3+s[l];
                  }
                  //cout<<s3<<"\n";
                   char m[s3.length()];
                for(int u=0;u<s3.length();u++)
                {
                    m[u]=s3[u];
                }
                  int h;
                  h=std::atoi(m);
                //  cout<<h<<"\n";
                  if(h!=0)
                  c.push_back(h);
                  q=r;
                  }
              }
              if(s[k]=='[')
              {
                  q=k;
                  r=k;
              }
            }

        for(int i=0;i<n;i++)
        {
            if(isnum(s[i]))
            {
                b[j++]=s[i];
            }
        }
        for(int y=0;y<j;y++)
        {
            cout<<b[y];
        }
    }
    return 0;
}
