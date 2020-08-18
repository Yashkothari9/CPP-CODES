
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int y;
    for(int i=0;i<n;i++)
    {
        cin>>y;
        a[i]=y;
    }
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(a[i])!=mp.end())
        {
            mp[a[i]]++;
        }
        else
        {
            mp[a[i]]=1;
        }
    }
    int q;
    cin>>q;
    int x;
    char sym;
    for(int i=0;i<q;i++)
    {
        string ans;
        cin>>sym>>x;
        if(mp.find(x)!=mp.end())
        {
            if(sym=='-')
            {
                mp[x]--;
            }
            else
            {
                mp[x]++;
            }
        }
        else
        {
            mp[x]++;
        }
        bool sqr=false,rec=false;
        map<int,int> sec;
        sec=mp;
        int cntrec=0,cntsq=0;
        for(auto m:sec)
        {
            int ro=m.second;
            if(ro>=4)
            {
                int q=ro/4;
                cntsq+=q;
                ro=ro-4*q;
               // cout<<"when 4 subtracted"<<m.second<<"\n";
            }
            if(ro>=2)
            {
                int o=ro/2;
                cntrec+=o;
                ro=ro-2*o;
            }
        }
        cout<<cntsq<<" "<<cntrec<<"\n";
        if(cntsq>=1)
        {
         if(cntsq>=2)
         {
          sqr=true;
          rec=true;
         }
         else if(cntrec>=2)
         {
             sqr=true;
             rec=true;
         }
        }
        else
        {
            if(cntrec>=4)
            {
                sqr=true;
                rec=true;
            }
        }
        if(sqr&&rec)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
