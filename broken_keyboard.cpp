#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a[27][2]={0};
        for(int i=0;i<s.size()-1;++i)
        {
            if(s[i]==s[i+1] &&a[s[i]-97][1]!=1)
            {
                a[s[i]-97][0]++;
                //a[s[i]-97][1]++;N
            }
            else
            {
                if((a[s[i]-97][0])>0 )
                {
                    a[s[i]-97][0]=0;
                    //a[s[i]-97][1]++;
                }
                else if( (s[i]!=s[i+1]))
                {
                    a[s[i]-97][1]++;
                }

            }
        }
       /* for(int i=0;i<26;i++)
        {
            cout<<a[i]<<" ";
        }*/
        int j=0;
        char *p= (char *) calloc(s.size(), 1);
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]-97][0]==0 )
            {
                //cout<<s[i];
                p[j++]=s[i];
                a[s[i]-97][0]=1;
            }
        }
        /*char *p=new char[s.size()];
        for(int i=0;i<27;i++)
        {
            if(a[i]==0 && s.find('a'+97))
            {
                p[i]='a'+i;
            }
            else
            {
                continue;
            }
        }*/
        delete[] p;
       cout<<p<<"\n";
    }
    return 0;
}
