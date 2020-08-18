#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    while(n<m)
    {
        if(m%2)
            m++;
        else
            m=m/2;
    cnt++;
    }
    cnt+=(n-m);
    cout<<cnt<<"\n";
}
