#include<bits/stdc++.h>
using namespace std;
struct seagment
{
    int l;
    int r;
    int v;
    int len;
};
bool comp(seagment a,seagment b)
{
    return a.l < b.l;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        seagment *seg=new seagment[n];
        for(int i=0;i<n;i++)
        {
            cin>>seg[i].l;
            cin>>seg[i].r;
            cin>>seg[i].v;
            seg[i].len=seg[i].r-seg[i].l;
        }
        sort(seg,seg+n,comp);
        int counti=0;
        for(int i=0;i<n;i++)
        {
            if(seg[i+1].r<seg[i].l)
            {
                if(seg[i+1].v!=seg[i].v)
                {
                    counti++;
                }
            }
        }
        if(counti==n){printf("YES\n");}
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}
