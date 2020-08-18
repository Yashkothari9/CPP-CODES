#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    int *b=new int[n + 1];
    int *c=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int j=0;j<n;j++)
    {
       cin>>c[j];

    }
    for(int i=0;i<n;i++)
    {
    //cout<<b[a[i]]<<" ";
      b[a[i]]=i+1;
    }cout<<"\n";
    for(int i=1;i<n + 1;i++)
    {
       cout<<b[i]<<" ";
    }cout<<"\n";

    int counti=0;


    for(int k=0;k<n;k++)
    {
        if(b[c[k]]>k+1)
        {
            counti++;
        }
    }
    cout<<counti;
    return 0;
}
