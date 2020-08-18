#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int r0,c0;
    cin>>r0>>c0;
    vector<pair<int,int>> p;
    int rcur,ccur;
    int i=4;
    int count=1;
    int rp=2,cp=2;
    p.push_back(make_pair(rp,cp));
    while(i<=8)
    {
        int c1=0,c2=0;
        if(rp<=cp)
        {
            rp=1;
            cp=i-rp;
            p.push_back(make_pair(rp,cp));
            //cout<<rp<<" "<<cp<<"\n";
            count++;
            c1++;
            cp=1;
            rp=i-cp;
            count++;
            c2++;
            p.push_back(make_pair(rp,cp));
            //cout<<rp<<" "<<cp<<"\n";
        }
        else
        {
            cp=1;
            rp=i-cp;
            p.push_back(make_pair(rp,cp));
            //cout<<rp<<" "<<cp<<"\n";
            count++;
            c2++;
            rp=1;
            cp=i-rp;
            p.push_back(make_pair(rp,cp));
            //cout<<rp<<" "<<cp<<"\n";
            c1++;
            count++;
        }
        if(c1==1 && c2==1)
        {
            rp++;
            cp++;
            p.push_back(make_pair(rp,cp));
            //cout<<rp<<" "<<cp<<"\n";
            count++;
        }
        i=i+2;
    }
    while(i<16)
    {
     int co1=0,co2=0;
     if(rp==8)
     {
         co1++;
        // cp=i-rp;
         //cout<<rp<<" "<<cp<<"\n";
         //count++;
         //co1++;
         cp=8;
         rp=i-cp;
        p.push_back(make_pair(rp,cp));
        //cout<<rp<<" "<<cp<<"\n";
         count++;
         co2++;
     }
     else
     {
         //rp=i-cp;
         //cout<<rp<<" "<<cp<<"\n";
         //count++;
         co2++;
         rp=8;
         cp=i-rp;
         p.push_back(make_pair(rp,cp));
         //cout<<rp<<" "<<cp<<"\n";
         count++;
         co1++;
     }
     if(co1==1 && co2==1)
     {
         if(rp==8)
         {
             rp--;
             cp++;
             count++;
             p.push_back(make_pair(rp,cp));
             //cout<<rp<<" "<<cp<<"\n";
             rp++;
             cp++;
             count++;
             p.push_back(make_pair(rp,cp));
             //cout<<rp<<" "<<cp<<"\n";
         }
         else
         {
             cp--;
             rp++;
             count++;
             p.push_back(make_pair(rp,cp));
             //cout<<rp<<" "<<cp<<"\n";
             rp++;
             cp++;
             count++;
             p.push_back(make_pair(rp,cp));
             //cout<<rp<<" "<<cp<<"\n";
         }
     }
     i=i+2;
    }
    cout<<count<<"\n";
    for(i=0;i<p.size();i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<"\n";
    }
    }
    return 0;
}
