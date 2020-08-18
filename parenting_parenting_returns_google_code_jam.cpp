#include<bits/stdc++.h>
using namespace std;
struct activity{
int l;
int r;
int idx;
char ass;
};
bool comp(activity a,activity b)
{
    return a.l < b.l;
}
bool com(activity a,activity b)
{
    return a.idx < b.idx;
}
int main()
{
    int t;
    cin>>t;
    for(int Case=0;Case<t;Case++)
    {
        int n;
        cin>>n;
        activity ac[n];
        for(int i=0;i<n;i++)
        {
            cin>>ac[i].l>>ac[i].r;
            ac[i].idx=i;

        }
        sort(ac,ac+n,comp);
        char a[1441][2];
        for(int i=0;i<1441;i++)
        {
            a[i][0]='A';
            a[i][1]='A';
        }
        if((ac[0].r-ac[0].l)==0)
        {
           a[ac[0].r][0]='C';
           ac[0].ass='C';
        }
        else
        {
            for(int i=ac[0].l;i<ac[0].r;i++)
            {
                a[i][0]='C';
            }
            ac[0].ass='C';
        }
        int flag=0,f1,f2;
        for(int i=1;i<n;i++)
        {
            f1=0,f2=0;
            if(a[ac[i].l][0]=='A')
            {
                for(int j=ac[i].l;j<ac[i].r;j++)
                {
                    a[j][0]='C';
                }
                ac[i].ass='C';
            }
            else
            {
                f1=1;
            }
            if(f1==1)
            {
                if(a[ac[i].l][1]=='A')
                {
                    for(int k=ac[i].l;k<ac[i].r;k++)
                    {
                        a[k][1]='J';
                    }
                    ac[i].ass='J';
                }
                else
                {
                    f2=1;
                }
            }
            if(f1==1 && f2==1)
            {
                flag=1;
                break;
            }
        }
        /*for(int i=0;i<1441;i++)
        {
                cout<<a[i][0]<<" ";
        }cout<<"\n";
        for(int i=0;i<1441;i++)
        {
                cout<<a[i][1]<<" ";
        }cout<<"\n";*/
        cout<<"Case #"<<Case+1<<":";
        if(flag==1)
        {
            cout<<"IMPOSSIBLE\n";
        }
        else
        {
            sort(ac,ac+n,com);
            for(int i=0;i<n;i++)
            {
                cout<<ac[i].ass;
            }
            cout<<"\n";
        }
    }
    return 0;
}
