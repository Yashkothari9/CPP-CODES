#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<long long int> a(n,0);
        for(int i=0;i<n;i++)
        {
            int o;
            cin>>o;
            a[i]=o;
        }
        vector<long long int> w(k,0);
        for(int i=0;i<k;i++)
        {
            int p;
            cin>>p;
            w[i]=p;
        }
        sort(a.begin(),a.end());
        sort(w.begin(),w.end());
        map<long long int,long long int> mp;
        for(int i=n-1;i>=0;i--)
        {
            if(mp.find(a[i])==mp.end())
            {
                mp.insert({a[i],1});
            }
            else
            {
                mp[a[i]]+=1;
            }
        }
        long long int mimx[k][2];
        for(int i=0;i<k;i++)
        {
            mimx[i][0]=INT_MIN;
            mimx[i][1]=INT_MAX;
        }
        // for(auto m:mp)
        // {
        //     cout<<m.first<<" "<<m.second<<"\n";
        // }
       // cout<<"----------\n";
        for(int i=0;i<k;i++)
        {
          int l=w[i];
          int y=0;
          while(l>0 && y!=1)
          {
               map<long long int,long long int>::reverse_iterator m;
              for(m=mp.rbegin();m!=mp.rend();m++)
              {
                  if(m->second>0 &&l>0)
                  { //cout<<m->first<<" "<<m->second<<"\n";
                      if(mimx[i][0]<m->first)
                      {
                          mimx[i][0]=m->first;

                      }
                      if(mimx[i][1]>m->first)
                      {
                          mimx[i][1]=m->first;

                      }
                       mp[m->first]-=1;
                      l--;
                  }
                  if(l==0)
                  {
                      break;
                  }
              }
              y=1;
          }
         // cout<<mimx[i][0]<<" "<<mimx[i][1]<<"\n";
        }
       // cout<<"---o----\n";
        long long int sum=0;
        for(int i=0;i<k;i++)
        {
           // cout<<mimx[i][0]<<" "<<mimx[i][1]<<"\n";
            sum=sum+mimx[i][0]+mimx[i][1];
        }//cout<<"-----x------";
        cout<<sum<<"\n";
    }
    return 0;
}
