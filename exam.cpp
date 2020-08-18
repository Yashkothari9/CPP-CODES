#include<bits/stdc++.h>
using namespace std;
int find(char* a,char x,int n)
{
for(int i=0;i<n;i++)
{
        if(a[i]==x)
        {
        return i;
        }
}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        int counti=0;
        char *a=new char[x];
        for(int i=0;i<x;i++)
        {
            a[i]='A'+i;
        }
        for(int i=1;i<s.size()-1;i++)
        {
            if(s[i]==s[i-1])
            {
                if(s[i-1]==s[i+1])
                {
                    int k=find(a,s[i],x);
                    if(k==x-1)
                        {
                        s[i]=a[0];
                        }
                    else
                        {
                        s[i]=a[k+1];
                        }
                    counti++;
                }
                if(s[i-1]!=s[i+1])
                {
                    if(s[i-1]>s[i+1])
                    {
                        int o=find(a,s[i-1],x);
                         if(o==x-1)
                        {
                        s[i]=a[0];
                        }
                        else
                        {
                        s[i]=a[o+1];
                        }
                    counti++;

                    }
                    if(s[i-1]<s[i+1])
		{
		 s[i]=s[i+1]+1;
                        int h=find(a,s[i+1],x);
                         if(h==x-1)
                        {
                        s[i]=a[0];
                        }
                        else
                        {
                        s[i]=a[h+1];
                        }

                        counti++;
                    }
                }

            }
        }
        if(s[n-1]==s[n-2]){counti++;}
        cout<<counti<<"\n";
    }
    return 0;
}
