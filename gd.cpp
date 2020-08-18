#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
        int r[9]={0};

        int *a=new int[s.size()];
        for(int i=0;i<s.size();i++)
        {
            a[i]=s[i]-48;
            r[s[i]-48]++;
        }
        int j=0,k=0;
        int flag=0;
        int n=s.size();
        int counti=0;

            if(r[0]>0 && r)
            {
              for(int i=n-1;i>=0;++i)
              {
                  if(a[i]==0)
                  {
                      j=i;
                      r[0]--;
                      break;
                  }
              }
              if(r[0]>0 &&j!=0)
              {
                  for(int i=j;i>=0;--i)
                  {
                      if(a[i]==0)
                      {
                          k=i;
                          r[0]--;
                          break;
                      }
                  }
                }
                else if(j!=0)
                {
                    for(int i=j;i<=n;--i)
                    {
                        if(a[i]==5)
                        {
                            k=i;
                            break;
                        }
                    }
                }
                else if(j==0)
                {
                    for(int i=n-1;i>0;--i)
                    {
                        if(a[i]==5)
                        {
                            k=i;
                            break;
                        }
                    }
                }
               // cout<<n-j<<" "<<n-1-k<<"\n";
                counti=(n-j)+(n-1-k)+1;

            }
            else
            {
                for(int i=n-1;i>0;--i)
                {
                    if(a[i]==5)
                    {
                        j=i;
                        break;
                    }
                }
                if(j!=0)
                {
                    for(int i=j;i>=0;--i)
                    {
                        if(a[i]==2||a[i]==7)
                        {
                            k=i;
                            break;
                        }
                    }
                }
                else
                {
                    for(int i=n;i>0;--i)
                    {
                        if(a[i]==2||a[i]==7)
                        {
                            k=i;
                            break;
                        }
                    }
                }
                //cout<<n-j<<" "<<n-1-k<<"\n";
                counti=(n-j)+(n-1-k)+1;
            }
            if(j!=0||k!=0)
            {
            cout<<counti<<"\n";
            }
            else
            {
                cout<<"-1"<<"\n";
            }
    }
    return 0;
}
