#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n],b[n];
    int i=0,s=sum;
    while(i<n)
    {
        if(9<s)
        {
            a[i]=9;
            s=s-9;
        }
        else if(s>0 && s<9)
        {
            a[i]=s;
        }
        else
        {
            a[i]=0;
        }
        i++;
    }
    while(i<n)
    {
        if(9<s)
        {
            a[i]=9;
            s=s-9;
        }
        else if(s>0 && s<9)
        {
            a[i]=s;
        }
        else
        {
            a[i]=0;
        }
        i++;
    }

}
