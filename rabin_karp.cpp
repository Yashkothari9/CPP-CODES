#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string p;
        cin>>a;
        cin>>p;
        int q=11;
        int r;
        int s=0;
        int pi=p.size();
        int ai=a.size();
        int spurious_hits=0;
        for(int i=0;i<pi;i++)
        {
            s=s*10+(p[i]-'0');
        }
        r=s%q;
        int d=pow(10,pi-1);
        int e=0;
        for(int i=0;i<pi;i++)
        {
            e=(e*10+(a[i]-'0'))%q;
        }
        e=e%q;
        if(e==r){spurious_hits++;}
        for(int i=pi;i<ai;i++)
        {
               //cout<<a[i-pi]<<" "<<e<<" "<<" "<<(e-((a[i-pi]-'0')*10)%q)<<" "<<e%q<<" "<<a[i]<<"\n";
            e=((e-((a[i-pi]-'0')*d)%q)*10+(a[i]-'0'))%q;
            if(e<0)e+=11;
            //cout<<e%q<<'\n';
            /*if(e!=s && e%q==r)
            {
                spurious_hits++;
            }*/
            if(e%q==r)//don't take this condition since it is wrong take the above one
            {
                spurious_hits++;
              //  cout<<"<-"<<i<<"\n";
            }
        }
        cout<<spurious_hits<<"\n";
    }
    return 0;
}
