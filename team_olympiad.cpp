#include<bits/stdc++.h>
using namespace std;
struct mem{
    int r;
    int pos;
};
bool comp(mem a,mem b)
{
    return a.r > b.r;
}
int main()
{
    int n;
    cin>>n;
    int c1=0,c2=0,c3=0;
    mem m[n];
    for(int i=0;i<n;i++)
    {
        cin>>m[i].r;
        m[i].pos=i+1;
        if(m[i].r==1)
        {
            c1++;
        }
        if(m[i].r==2)
        {
            c2++;
        }
        if(m[i].r==3)
        {
            c3++;
        }
    }
    int mini;
    if(c1>c2)
    {
        if(c3>c2)
        {
            mini=c2;
        }
        else
        {
            mini=c3;
        }
    }
    else
    {
        if(c3>c1)
        {
            mini=c1;
        }
        else
        {
            mini=c3;
        }
    }
    sort(m,m+n,comp);
    int flag=0;
    while(mini--)
    {
        int ch1=0,ch2=0,ch3=0;
        int cnt=0;
        int a[3]={-1};

        for(int i=0;i<n;i++)
        {
            if(ch1==0 && m[i].r==1)
            {
                a[0]=m[i].pos;
                m[i].r=-1;
                ch1++;
            }
            if(ch2==0 && m[i].r==2)
            {
                a[1]=m[i].pos;
                m[i].r=-1;
                ch2++;
            }
            if(ch3==0 && m[i].r==3)
            {
                a[2]=m[i].pos;
                m[i].r=-1;
                ch3++;
            }
            if(ch1==1 && ch2==1 && ch3==1)
            {
                flag=1;
                break;

            }
        }
        if(a[0]>0 &&a[1]>0 &&a[2]>0)
        {
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";
        }

    }
        if(flag==0)
        {
            cout<<"0\n";
        }
    return 0;
}
